#include <stdio.h>
#include <math.h>
/*
 * NB: If the code failed to compile on your machine
 * then add -lm at the end of the compile command
 * Example: gcc crypt.c -o crypt -lm
 * this will include the math.h library for you.
 */

int encrypt(int num);
int decrypt(int num);

int main(void)
{
        //Declaration of variables used.
        //int num, i = 1, rem, temp = 0, new_d; 
        int opt;
        
        printf("1. Encryption\n2. Decryption\n");
        printf("Select what to do: ");
        scanf("%d", &opt);
  
        //select either to encrypt or decrypt
        if (opt != 1 && opt != 2)
        {
                printf("Invalid option, select either 1 or 2. \n");
                main();
                
        }
        else if(opt == 1)
        {
                //printf("Encryption selected.\n");
                int num;
                encrypt(num);
        
        }
        else if(opt == 2)
        {
                //printf("Decryption selected.\n");
                int num;
                decrypt(num);
                
        }
        

    return (0);
}

 int encrypt(int num)
{
        int i = 1, rem, temp = 0, new_d;

        //prompts the user to enter a 4-digit number to be encrypted
        printf("Enter the 4-digit number to be encrypted: \n");
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
        //print out the encrypted 4-digit number
        printf("The encrpyted 4-digit number is: %d\n", temp);

        return (temp);
}

int decrypt(int num)
{
    //Declaration of variables used
    int e_num, rem, new_d, temp = 0, i = 1;

    //prompts the user to enter an encrypted 4-digit number
    printf("Enter the number to be decrypted: \n");
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
        printf("The decrypted 4-digit number is: %d\n", temp);
        
    return (temp);
}
