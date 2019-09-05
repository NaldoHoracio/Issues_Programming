#include <stdio.h>

int main ()
{
    int n = 16;
    int y = 0xABCDEF;

    /* Upper and lower case. */

    printf ("%X hexadecimal with upper case letters.\n", n);
    printf ("%x hexadecimal with lower case letters.\n", n);
    printf("\n");

    /* Different kinds of padding. */

    printf ("<%8x> hexadecimal padded with blanks to width 8.\n", n);
    printf ("%04x hexadecimal padded with four leading zeros.\n", n);
    printf ("0x%08x padded with eight leading zeros.\n", n);
    printf("\n");

    /* Hash mark, #, adds 0x to number. */

    printf ("%#x automatically add 0x.\n", y);
    printf ("%#X, capital X, automatically add 0X.\n", y);
    printf ("%#X, but don't add 0X if zero.\n", 0);
    printf("\n");

    /* Hash mark plus padding. */

    printf ("%#8x - no padding is added with #.\n", y);
    printf ("%#8X - no padding is added with #.\n", y);
    printf ("%#08X - padding is added with 0, but don't add 0X.\n", 0);
    printf("\n");

    return 0;
}
