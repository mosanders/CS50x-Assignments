#include <cs50.h>
#include <stdio.h>

int get_pyramid_height(string prompt);
void build_pyramid(int n);

int main(void)
{
    int x = get_pyramid_height("How tall do you want these pyramids?\n");
    build_pyramid(x);
}

int get_pyramid_height(string prompt)
{
    int x;
    do 
    {
     x = get_int("%s", prompt);   
    } while (x < 1 || x > 8);
    return x;
}

void build_pyramid(int n)
{
    for (int h = n; h > 0; h--)
    {
        for (int fs = h; fs > 1; fs--)
        {
            printf(" ");
        }
         for (int f = n + 1; f > h; f--)
        {
            printf("#");
        }
        for (int s = 2; s > 0; s--)
        {
            printf(" ");
        }
        for (int b = n + 1; b > h; b--)
        {
            printf("#");
        }
        printf("\n");
    }
}
