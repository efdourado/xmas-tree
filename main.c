#include <stdio.h>

void sp (int n) //print spaces
{
    for (int i = 0; i <= n; i ++) printf (" ");
}

void st (int n) //print stars
{
    for (int i = 0; i < 2 * n - 1; i ++) printf ("*");
}

int main ()
{
    int h;

    printf ("height of the tree: "); scanf ("%d", &h);
    printf ("\n");

    for (int i = 1; i <= h; i ++)
    {
        sp (h - i);
        st (i);
        printf ("\n");
    }

    for (int i = 0; i <= h; i += 3)
    {
        sp (h - 1);
        st (1);
        printf ("\n");
    }
    
    return 0;
}
