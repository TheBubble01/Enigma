/*NAME: ALABENI OMOSHEYE DAVID
  LOCATION: LAGOS, NIGERIA
  DATE: 15/11/2022
  DESCRIPTION: This program prompts a user to enter a 4-digit number, encrypts the code by; 
  (a) replacing each digit with the result of adding 7 to the digits and getting the remainder 
  after the new value is divided by 10 (b) Then swap the second and fourth digit 
  and also swap the first and third digit.
  Then prints the encrypted digit.*/
  
#include <stdio.h>
#include <math.h>

int main(void)
{
    //Declaration of variables used.
    int num, i = 1, rem, temp = 0, new_d;

    //prompts the user to enter a 4-digit number to be encrypted
    printf("Enter a 4-digit number: \n");
    scanf("%d", &num);

    while(i <= 4)
    {
        //determines the remainder when the number is divided by 10.
        rem = num % 10;

        //generates a new digit by adding 7 to the old digit and getting the remainder when divided by 10.
        new_d = (rem + 7) % 10;

        //conditional statement to interchange digits.
        if(i == 1)
        {
            //interchanges the first digit with the third digit
            temp = temp + new_d * pow(10, 2);
        }
        else if(i == 2)
        {
            //interchanges the second digit with the fourth digit.
            temp = temp + new_d * pow(10, 3);
        }
        else if(i == 3)
        {
            //interchanges the third digit with the first digit
            temp = temp + new_d * pow(10, 0);
        }
        else
        {
            //interchanges the fourth digit with the second digit
            temp = temp + new_d * pow(10, 1);
        }
        //peels of the last term.
        num = num / 10;

        //increments the value of i by 1
        i++;
    }
    //prints out the encrypted 4-digit number
    printf("The encryted 4-digit number is: %d\n", temp);

    return (0);
}
