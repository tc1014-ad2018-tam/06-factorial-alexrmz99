/* This program was elaborated for the homework number 5.
 * This program will help the user get the factorial of any given number.
 *
 * Autor: Alejandro Ramírez Michel
 * Fecha: 6 de septiembre, 2018
 * Correo: alex.ramirez.99@hotmail.com
 */

#include <stdio.h>

int main() {
    int factorial=1;
    int number;
    int i=1;

    printf ("Give me the number you want to get it's factorial: "); //we ask the user for a number
    scanf("%i", &number);

    //if the user provides a negative number or zero the program will ask for another number
    if(number<0) {
        printf("Negative numbers don't have a factorial.");
    }
    else {                      //the loop for calculating the factorial number
        while (number > i) {
            factorial *= number; //significa: factorial = factorial * numero
            number--;
        }
        printf("The factorial of the given number is %i.",factorial);

    }


    return 0;

}