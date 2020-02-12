#include <stdio.h>
int main(int argc, char *argv[])
 {
 int areas[] = { 10, 12, 13, 14, 20 };
 char name[] = "Zed";
 char full_name[] = {
 'Z', 'e', 'd',
 ' ', 'A', '.', ' ',
 'S', 'h', 'a', 'w', '\0'
 };

 
 printf("The size of an int: %ld\n", sizeof(int));
 printf("The size of areas (int[]): %ld\n", sizeof(areas));
 printf("The number of ints in areas: %ld\n",
 sizeof(areas) / sizeof(int));
 printf("The first area is %d, the 2nd %d.\n", areas[0],
areas[1]);

 printf("The size of a char: %ld\n", sizeof(char));
 printf("The size of name (char[]): %ld\n", sizeof(name));
 printf("The number of chars: %ld\n", sizeof(name) /
sizeof(char));

printf("The size of full_name (char[]): %ld\n",
sizeof(full_name));
 printf("The number of chars: %ld\n",
 sizeof(full_name) / sizeof(char));

 printf("name=\"%s\" and full_name=\"%s\"\n", name, full_name);

 return 0;
 }
 
 /* Extra Credit

1.
areas[0]=100;
area[1]=200;
printf("now the first area is %d, the 2nd %d \n", area[0], area[1]);

2.
 name[0] = "T";
full_name[0] = "T";
printf("name\"%s\" and full_name=\"%s\"\n", name, full_name);

3.
areas[0] = name[0];
printf("Now the first area is %d \n, areas [0]");
