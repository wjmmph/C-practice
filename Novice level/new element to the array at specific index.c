#include <stdio.h>

int main(){
    int arr[10], n, i, index, element;
    printf("Enter number of elements in the array (max 10): ");
    scanf("%d", &n);

    printf("Enter array elements:\n");
    for(i = 0; i < n; i++){
        printf("arr[%d]: ", i);
        scanf("%d", &arr[i]);
    }

    printf("Enter the index where you want to insert the new element: ");
    scanf("%d", &index);

    printf("Enter the new element to insert: ");
    scanf("%d", &element);

    // Shift elements to the right 
    for(i = n; i > index; i--){
          arr[i] = arr[i - 1];
     }
    
     // Insert element
    arr[index] = element;

    n++; // Increase the size of the array

    printf("Array after insertion:\n");
    for(i = 0; i < n; i++){
        printf("%d ", arr[i]);
    }

    return 0;
}
