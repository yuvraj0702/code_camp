#include <stdio.h>
int main()
{
  int num;
  printf("Enter the number of elements: ");
  scanf("%d", &num);
  int arr1[num];

  for (int i =0; i < num; i++) {

      printf("enter the numbers:");
      scanf("%d",&arr1[i]);   

  }

      int search, index;
      printf("Element to search for:");
      scanf("%d", &search);
      for (int i =0; i < num; i++) 
      {
        if (arr1[i] == search ){
            index=i;
            break;
        }
      }
      printf("element at index %d", index+1);
      
return 0;

}
