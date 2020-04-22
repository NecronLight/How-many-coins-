#include <stdio.h>
#include <cs50.h>
#include <math.h>

int main(void)
{
    float cash;
    do
    {
        cash = get_float("How much dollars is owed?\n");//prompt the user to put how much change is owed
    }
    while (cash <= 0);
    
    int cents = round(cash * 100);//turn dollars into cents by multiplying by 100
    printf("%i cents is owed\n", cents);

    int quarters = cents / 25;//dividir o troco por quarters
    int restanteQ = cents % 25;//troco a ser dividido ainda
    
    int dimes = restanteQ / 10;//dividir o troco por dimes
    int restanteD = restanteQ % 10;//troco a ser dividido ainda

    int nickels = restanteD / 5;//dividir o troco por nickels
    int restanteN = restanteD % 5;//troco a ser dividido ainda

    int pennies = restanteN / 1;//dividir o troco por nickels
    int restanteP = restanteN % 1;

    int troco = quarters + dimes + nickels + pennies;//amount of coins
    printf("%i\n", troco);
}
