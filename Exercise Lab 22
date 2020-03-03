#ifndef _ex22_h
#define _ex22_h
// makes THE_SIZE in ex22.c available to other .c files
extern int​ THE_SIZE​;
// gets and sets an internal static variable in ex22.c
int​ get_age​();
void​ set_age​(​int​ age​);
          
 // updates a static variable that's inside update_ratio
double​ update_ratio​(​double​ ratio​);
void​ print_size​();
#endif


#include <stdio.h>
​#include "ex22.h"
         
​#include "dbg.h"

​int​ THE_SIZE ​=​ ​1000​;

​static int​ THE_AGE ​=​ ​37​; 8
​int​ get_age​()
 ​{
 ​return​ THE_AGE​; 12 ​}
          

​void​ set_age​(​int​ age)​ ​{
THE_AGE ​=​ age​; ​}
​double​ update_ratio​(​double​ new_ratio​) ​{
​staticdouble​ratio=​ ​​1.0​;
          
​double​ old_ratio ​=​ ratio​; ratio ​=​ new_ratio​;
​return​ old_ratio​; ​}
​void​ print_size​() ​{
log_info​(​"I think size is: %d"​,​ THE_SIZE​); ​}


/* Worksheet First question
#include <stdio.h>
int main (void){

int numb1;
int numb2;
int sum;

printf("Enter two integers:");
scanf("%d %d", &numb1, &numb2);

sum = numb1 + numb2;
printf("%d + %d = %d", numb1, numb2, sum);
   
 return 0;

}
*/

/* Worksheets Second question
#include <stdio.h>
int main() {
    double n1, n2, n3;
    printf("Enter three different numbers: ");
    scanf("%lf %lf %lf", &n1, &n2, &n3);

    if (n1 >= n2 && n1 >= n3)
        printf("%.2f is the largest number.", n1);
    if (n2 >= n1 && n2 >= n3)
        printf("%.2f is the largest number.", n2);
    if (n3 >= n1 && n3 >= n2)
        printf("%.2f is the largest number.", n3);

    return 0;
}
*/

/* Worksheet Third question
#include <stdio.h>
int main ()
{
   int monthno;
   printf("Input Month No : ");
   scanf("%d",&monthno);
   switch(monthno)
   {
	case 1:
	       printf("January\n");
	       break;
	case 2:
	       printf("February\n");
	       break;
	case 3:
	       printf("March\n");
	       break;
	case 4:
	       printf("April\n");
	       break;
	case 5:
	       printf("May\n");
	       break;
	case 6:
	       printf("June\n");
	       break;
	case 7:
	       printf("July\n");
	       break;
	case 8:
	       printf("August\n");
	       break;
	case 9:
	       printf("September\n");
	       break;
	case 10:
	       printf("October\n");
	       break;
	case 11:
	       printf("November\n");
	       break;
	case 12:
	       printf("December\n");
	       break;
	default:
	       printf("invalid Month number. \nPlease try again ....\n");
	       break;
      }
}
*/


/* Worksheet Fourth question
#include <stdio.h>
int main (void){
int i;
for (i=0; i<50; i++){
if(i%2==0)

printf("%d",(i));

}

}
*/

/* Worksheet Fifth question
#include <stdio.h>
int main() {
	int j, numbers[5],total=0;
	printf("\nInput the first number: "); 
    scanf("%d", &numbers[0]);
    printf("\nInput the second number: "); 
    scanf("%d", &numbers[1]);
    printf("\nInput the third number: "); 
    scanf("%d", &numbers[2]);
	printf("\nInput the fourth number: "); 
    scanf("%d", &numbers[3]);
    printf("\nInput the fifth number: "); 
    scanf("%d", &numbers[4]);
	for(j = 0; j < 5; j++) {
		if((numbers[j]%2) != 0) 
		{
		   total += numbers[j];
		}	
    }
   	printf("\nSum of all odd values: %d", total);
	return 0;
}
