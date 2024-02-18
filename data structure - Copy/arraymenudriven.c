/*write a menu driven program to input an array and perform following operation
1. traversal/ linear search for an element in the array 
2.string reversal 
3. updating the element of array(multiply the element at even indicices by two and add 5 to the element at odd indicices)
4. inserting an element at the specified position
5. deleting the element from a specified position
6. sorting the array(bubble sort)*/

#include <stdio.h>
void main()
{
int n, choice, i, s,pos;
printf("Enter the size of the array: ");
 scanf("%d", &n);
 int arr[n];
 printf("Enter the elements of the array: ");
for (i = 0; i < n; i++) 
{
    scanf("%d", &arr[i]);
}
while (n!=0) 
    {
 printf("\n1. Traversal/Linear Search\n,2.string reversal,\n3.updating the element\n4.inserting an element at specified position\n5.deleting an element from specified position\n6.Sorting the array (Bubble Sort)\n0. to exit\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);
    
        switch (choice) 
{case 0:
 printf("Exiting program.\n"); 
 return;
    case 1:
    printf("Enter element to search: ");
        scanf("%d", &s);
        for (i = 0; i < n; i++)
        {if (arr[i] == s) 
          {printf("the element %d is present at index %d",s,i+1);
             }
        }
        break;
                
        case 2:
        printf("Reversed array: ");
        for (i = n - 1; i >= 0; i--) {
            printf("%d ", arr[i]);
        }
        printf("\n");
        break;
        
        case 3:
        for (i = 0; i < n; i++)
        {
        if (i % 2 == 0) 
        {
        arr[i] *= 2;
        } 
        else 
        {
        arr[i] += 5;
        }
        }
        for (i = 0; i < n; i++)
        {
        printf("%d ", arr[i]);
        }
        break;
                
            case 4:
            printf("Enter position to insert: ");
                scanf("%d", &pos);
                if (pos < 1 || pos > n + 1) {
                    printf("Invalid position.\n");
                } else {
                    printf("Enter element to insert: ");
                    scanf("%d", &s);
                    for (i = n - 1; i >= pos - 1; i--) {
                        arr[i + 1] = arr[i];
                    }
                    arr[pos - 1] = s;
                    n++;
                    printf("Element inserted successfully.\n");
                }
                
                break;
                
            case 5:
             printf("Enter position to delete: ");
                scanf("%d", &pos);
                if (pos < 1 || pos > n) {
                    printf("Invalid position.\n");
                } else {
                    for (i = pos - 1; i < n - 1; i++) {
                        arr[i] = arr[i + 1];
                    }
                    n--;
                    printf("Element deleted successfully.\n");
                }
           break;

       case 6:
    for (i = 0; i < n - 1; i++) 
    {
        for (int j = 0; j < n - i - 1; j++) 
        {
            if (arr[j] > arr[j + 1]) 
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
    for (i = 0; i < n; i++) {
        printf(" Sorted array: %d ", arr[i]);
    }
    break;
    default:
    printf("Invalid choice.\n");
        }
        
    }
}