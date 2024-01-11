// An array is collection of homogeneous data elements (Same data_type)
// Array is a linear data structure

// array is simplest type of data structure
// 1st index of an array is pointer (it may start with 0 OR 1)  i.e  0-based / 1-based indexing

// Array as pointer - traversing an array

// ==== IMPORTANT ==== //
// 1st index of an array is a pointer
#include<stdio.h>

int main()
{
   int n, i;
   printf("Enter size of array : ");
   scanf("%d", &n);
   int arr[n]; // intger array
   int *ptr = arr; // intger pointer

   // Input 

   printf("Input : \n");
   for(i=1; i<=n; i++)
   {
      printf("%d index : ", i);
      scanf("%d", (ptr + i));
   }
   // Output

   printf("Output : \n");
   for(i=1; i<=n; i++)
   {
      printf("%d index : %d\n", i, *(ptr + i));
   }

   return 0;
}
