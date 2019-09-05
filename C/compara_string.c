#include <stdio.h>
#include <string.h>

typedef unsigned short u16_t;
typedef unsigned char u8_t;

int main()
{
    char input[256];
    memset(input,'\0',256);
    u16_t input_char;
    u8_t b1, b2;
    char send[] = "SE";
    int i;
    for(i = 0; i < strlen(send); ++i)
    {
        if(i%2 == 0)
        {
            b1 = send[i];
            printf("B1: %c\n", b1);
        }else{
            b2 = send[i];
            printf("B2: %c\n", b2);
        }
    }
    
    input[0] = b1;
    input[1] = b2;

    printf("MY STRING: %s\n", input);

    return 0;
}