#include <stdio.h> 
 //linear search
//compliexity:o(n)
int linearSearch(int arr[], int n, int x) { 
    int i; 
    for (i = 0; i < n; i++) {
        if (arr[i] == x) {
            return i; //element found at index i
        }
    }
    return -1; 
} 
  
int main() { 
    int n, arr[100],x,result;
    printf("\nEnter the number of elements :");
    scanf("%d",&n);
    printf("\nEnter the array elements: ");
    for(int i=0;i<n;i++) {
        scanf("%d",&arr[i]);
    }
    printf("\nEnter the element that needs to be searched:") ;
    scanf("%d",&x);
    result = linearSearch(arr, n, x); 
    (result == -1) ? printf("Element is not present in array") 
                   : printf("Element is present at index %d", 
                            result); 
    return 0; 
} 
