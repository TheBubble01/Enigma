/*NAME: ALABENI OMOSHEYE DAVID
  LOCATION: LAGOS, NIGERIA
  DATE: 15/11/2022
  DESCRIPTION: This program decrypts the encrypted 4-digit number and prints the original number.*/

#include <stdio.h>
#include <math.h>

int main(void)
{
    //Declaration of variables used
    int e_num, rem, new_d, temp = 0, i = 1;

    //prompts the user to enter an encrypted 4-digit number
    printf("Enter an encryted 4-digit number: \n");
    scanf("%d", &e_num);

     while(i <= 4)
        {
            //determines the remainder when the number is divided by 10.
            rem = e_num % 10;

            //subtracts 7 from the remainder if it is graeater than 7
            if(rem > 7)
            {
                new_d = rem - 7;
            }

            //adds 10 to the remainder and then subtract 7 if the remainder is less than 7
            else
            {
                new_d = (rem + 10) - 7;
            }

            //interchanges the first digit with the third digit
            if(i == 1)
            {
                temp = temp + new_d * pow(10, 2);
            }

            //interchanges the second digit with the fourth digit.
            else if(i == 2)
            {
                temp = temp + new_d * pow(10, 3);
            }

            //interchanges the third digit with the first digit
            else if(i ==3)
            {
                temp = temp + new_d * pow(10, 0);
            }

            //interchanges the fourth digit with the second digit
            else
            {
                temp = temp + new_d * pow(10, 1);
            }

            //peels of the last term.
            e_num = e_num / 10;

            //increments the value of i by 1
            i++;
        }

        //prints out the de-crypted 4-digit number
        printf("The de-crypted 4-digit number is: %d\n", temp);
        
    return (0);
}
