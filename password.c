#include <stdio.h>
#include <string.h>

int main(void)
{
    char* password = "nicospinoza2006";
    char* input ="nicospinoza2006";

    if(strcmp(password,input) == 0)
    {
        printf("Password exitosa");
    }
    else
    {
        printf("Paswword errada");
    }
}