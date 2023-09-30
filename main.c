#include <stdio.h>
#include "functions.h"
#include "euler.h"
#define SIZE 1

int main()
{
   /*
   int value = 0;
   int array[SIZE];

   printf("value = ");
   scanf_s("%d", &value);

   for (unsigned int i = 0; i < SIZE; ++i)
      scanf_s("%d", &array[i]);

   printf("%llu\n", Problem_1(value, array, SIZE));

   return 0;
}
*/

/*
int value = 0;
printf("value = ");
scanf_s("%d", &value);

printf("answer = %llu\n", Problem_2(value));

*/

   long long value_ = 0;
   printf("value = ");
   scanf_s("%llu", &value_);
   printf("answer = %llu\n", Problem_3(value_));

   return 0;
}