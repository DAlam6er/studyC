#include <ctype.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

char from_hex(char);
char to_hex(int);
char *url_encode(char*);
char *url_decode(char*);
int check_hexchar(char*);
void usage(char*);
void help(char*);

void usage(char *prog_name)
{
    fprintf(stderr, "Usage: %s <-de> string\n", prog_name);
}

void help(char *prog_name)
{ 
    fprintf(stderr, "Usage: %s <OPTION> STRING\n", prog_name);
    fprintf(stderr, "Convert STRING from URL encoding (Percent Encoding)"
        "to UTF-8 format and vice versa.\n\n");
    fprintf(stderr, "  -d,  --decode\t\tconvert string into UTF-8 format\n"
        "  -e,  --encode\t\treplace unsafe ASCII characters with a \"%%\" followed by two hexadecimal digits\n"
        "  -h,  --help\t\tdisplay this help and exit\n\n");
}

int main (int argc, char *argv[])
{
    size_t optind;
    if (1 == argc) {
        usage(argv[0]);
        return 1;
    }
    
    for (optind = 1; optind < (size_t)argc; optind++) 
    {
        if ('-' == argv[optind][0] && '-' == argv[optind][1]) {
            printf("Flags '--' are temporarily unavailable.\n");
            return 1;
        } else if ('-' == argv[optind][0] && 0 == argv[optind][2]) {
            switch (argv[optind][1]) {
            case 'd' : { 
                char *decoded_string;
                printf("Original string:\n%s\n", argv[2]);
                decoded_string = url_decode(argv[2]); 
                printf("Decoded string:\n%s\n", decoded_string);
                free(decoded_string);
                break;
            }
            case 'e' : {
                char *encoded_string;
                printf("Original string:\n%s\n", argv[2]);
                encoded_string = url_encode(argv[2]); 
                printf("Encoded string:\n%s\n", encoded_string);
                free(encoded_string);
                break;
            }
            case 'h':
                help(argv[0]);
                break;
            default:
                printf("%s: invalid option '%s'\n", 
                    argv[0], argv[1]);
                printf("Try '%s --help' for more information\n", 
                    argv[0]);
                return 1;
            }    
        }            
    } 
    return 0;
}

/* Checks char corresponding hex digit */
int check_hexchar(char *ch)
{
    return (*ch > 47 && *ch < 58) || (*ch > 64 && *ch < 71) || 
           (*ch > 96 && *ch < 103);
}

/* Converts a hex character to its integer value */
char from_hex(char ch) 
{
    if (!check_hexchar(&ch)) {
        return 0;
    }
    return isdigit(ch) ? ch - '0' : tolower(ch) - 'a' + 10;
}

/* Converts an integer value to its hex character*/
char to_hex(int code) 
{
    static char hex[] = "0123456789abcdef";
    if (code < 0 || code > 15) {    
        return 0;
    }
    return hex[code & 15];
}

/* Returns a url-encoded version of str */
/* IMPORTANT: be sure to free() the returned string after use */
char *url_encode(char *str) 
{
    char *pstr; 
    char *buf; 
    char *pbuf;
   
    if (NULL == str) {
        puts("Zero length string in the input!");
        exit(1);
    }
    pstr = str;
    buf = malloc(strlen(str) * 3 + 1);
    if (buf == NULL) {
        puts("Allocation error!");
        exit(1);
    }
    pbuf = buf;
    while (*pstr) {
        if (isalnum(*pstr) || *pstr == '-' || *pstr == '_' || 
            *pstr == '.' || *pstr == '~')
        { 
            *pbuf++ = *pstr;
        }
        else { 
            *pbuf++ = '%';
            *pbuf++ = to_hex(*pstr >> 4); 
            *pbuf++ = to_hex(*pstr & 15);
        }
        pstr++;
    }
    
    *pbuf = '\0';
    return buf;
}

/* Returns a url-decoded version of str */
/* IMPORTANT: be sure to free() the returned string after use */
char *url_decode(char *str) 
{
    char *pstr;
    char *buf;
    char *pbuf;
    
    if (NULL == str) {
        puts("Zero length string in the input!");
        exit(1);
    }
    pstr = str;
    buf = malloc(strlen(str) + 1);
    if (NULL == buf) {
        puts("Allocation error!");
        exit(1);
    }

    pbuf = buf;
    while (*pstr) {
        if (*pstr == '%') {
            if (pstr[1] && pstr[2]) {
                *pbuf++ = from_hex(pstr[1]) << 4 | from_hex(pstr[2]);
                pstr += 2;
            }
        } else if (*pstr == '+') { 
            *pbuf++ = ' ';
        } else {
            *pbuf++ = *pstr;
        }
        pstr++;
    }
    
    *pbuf = '\0';
    return buf;
}
