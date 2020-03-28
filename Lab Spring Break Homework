/** Question 1
 * C program to find LCM of any two numbers
 */

#include <stdio.h>

int main()
{
    int i, num1, num2, max, lcm=1;

    /* Input two numbers from user */
    printf("Enter any two numbers to find LCM: ");
    scanf("%d%d", &num1, &num2);

    /* Find maximum between num1 and num2 */
    max = (num1 > num2) ? num1 : num2;

    /* First multiple to be checked */
    i = max;
    
    /* Run loop indefinitely till LCM is found */
    while(1)
    {
        if(i%num1==0 && i%num2==0)
        {
            /*
             * If 'i' divides both 'num1' and 'num2'
             * then 'i' is the LCM.
             */
            lcm = i;

            /* Terminate the loop after LCM is found */
            break;
        }

        /*
         * If LCM is not found then generate next 
         * multiple of max between both numbers
         */
        i += max;
    }

    printf("LCM of %d and %d = %d", num1, num2, lcm);

    return 0;
}

/** Question 2
/* Palindrome Program in C using While Loop */
#include <stdio.h>

int main()
{
   int Number, Temp, Reminder, Reverse = 0;
 
   printf("\nPlease Enter any number to Check for Palindrome\n");
   scanf("%d", &Number);
  
   //Helps to prevent altering the original value
   Temp = Number;

   while ( Temp > 0)
   {
      Reminder = Temp %10;
      Reverse = Reverse *10+ Reminder;
       Temp = Temp /10;
   }
 
   printf("Reverse of entered number is = %d\n", Reverse);

   if ( Number == Reverse )
      printf("\n%d is Palindrome Number.\n", Number);

   else
      printf("%d is not the Palindrome Number.\n", Number);
 
   return 0;
}

/** Question 3
#include <stdio.h>

int main() {
int a=1; int b=2; int c=3;

if (a >= b & a >= c)
printf("%d the largest number is ", a);

else if (b>=a & b>c)
printf("%d the largest number is",b);

else;
printf("%d the largest number is",c);

return 0;

}

/** Question 4
#include <stdio.h>

int main() {
int a=1; int b=2; int c=3;

if (a >= b & a >= c)
printf("%d the largest number is ", a);

else if (b>=a & b>c)
printf("%d the largest number is",b);

else;
printf("%d the largest number is",c);

return 0;

}

/** Question 5
/**
 * C program to print Fibonacci series up to n terms
 */

#include <stdio.h>

int main()
{
    int a, b, c, i, terms;

    /* Input number from user */
    printf("Enter number of terms: ");
    scanf("%d", &terms);

    /* Fibonacci magic initialization */
    a = 0;
    b = 1;
    c = 0;

    printf("Fibonacci terms: \n");

    /* Iterate through n terms */
    for(i=1; i<=terms; i++)
    {
        printf("%d, ", c);

        a = b;     // Copy n-1 to n-2
        b = c;     // Copy current to n-1
        c = a + b; // New term
    }

    return 0;
}
