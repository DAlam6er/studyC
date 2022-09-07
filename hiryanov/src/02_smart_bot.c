#include <stdio.h>

int main()
{
    char name[20];
    int age;
    printf("I'm a Bot. What's your name?\n");
    scanf("%s", name);
    printf("Hello, %s! How old are you?\n", name);
    scanf("%d", &age);
    printf("You are looking younger! "
            "I thought you are %d!\n", age - 3);
    return 0;
}
