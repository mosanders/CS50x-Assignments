#include <cs50.h>
#include <stdio.h>
#include <math.h>

float get_change(string prompt);
void create_change(float x);


int main(void)
{
    float x = get_change("How much change is owed?\n");
    printf("Minimum amount of coins to recieve:\n");
    create_change(x);
    
}

float get_change(string prompt) 
{
    float x;
    do {
        x = get_float("%s", prompt);
    } while (x <= 0.000);
    return x;
}

void create_change(float x)
{
    int cents = round(x * 100);
    while (cents > 0)
    {
        int quarters = cents / 25;
        cents = cents % 25;
        int dimes = cents / 10;
        cents = cents % 10;
        int nickles = cents / 5;
        cents = cents % 5;
        int pennys = cents / 1;
        cents = cents % 1;
        int coins = quarters + dimes + nickles + pennys;
        printf("%i\n", coins);
    }
}

