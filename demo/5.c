#include <stdio.h>
#include <string.h>
#define PRAISE "you are an extraordinary being"
int main(void)
{
    char name[40];
    
    printf("What's your name\n");
    scanf("%s",name);
    printf("hello %s,%s\n",name,PRAISE);
    printf("Your's name of %zd letters occupies %zd memory cells.\n",strlen(name),sizeof name);
    printf("The phrase of praise has %zd letters",strlen(PRAISE));
    printf("and accupies %zd memory cells.\n",sizeof PRAISE);

    return 0;
}
