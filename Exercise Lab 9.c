//Make the loop count backward by using i-- to start at 25 and go to 0.
#include <stdio.h>
int main (void){
int f;
for (f=25;f>0; f--){
printf("%d \n",f);}
}

// Extra loop 1
#include <stdio.h>
int main()
{
    int var =5;
    while (var <=10)
    {
       printf("%d", var);
       var--;
    }
    return 0;
}

//Extra loop 2
#include <stdio.h>
int main()
{
   int i=1, j=1;
   while (i <= 4 || j <= 3)
   {
	printf("%d %d\n",i, j);
	i++;
	j++;
   }
   return 0;
}
