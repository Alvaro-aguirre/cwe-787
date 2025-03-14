#include <stdio.h>

int main()
{
    int cookie;
    char buf[4];

    printf("buf: %08p cookie: %08p\n", &buf, &cookie);

    gets(buf);
    
    if (cookie == 0x41424344)
        printf("You win!\n");
    else
        printf("Try again!\n");
}