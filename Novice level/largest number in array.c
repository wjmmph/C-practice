#include <stdio.h>

int main(){
    int n, max;
    printf("Enter the size of the array: ");
    scanf("%d", &n);

    int array[n];
    for (int i = 0; i < n; i++){
        printf("Enter value for array[%d]: ", i);
        scanf("%d", &array[i]);
    }

    max = array[0];
    for (int i = 1; i < n; i++){
        if (array[i] > max){
            max = array[i];
        }
    }
    printf("The largest number in the array is: %d\n", max);

}