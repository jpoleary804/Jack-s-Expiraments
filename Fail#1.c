#include <stdio.h>
int main()
{
float input;
int output;
input = 0;
printf("Type temperature in Celcius to get it in Farenheit.\n");
scanf("%d", input);
output = ((9/5)*input)+32
printf("%f Celcius is %f degrees Fareneheit", input, output);
return 0;
}
