#include <stdio.h>

int main(){
    char str1[10] = "ABC";
    char str2[10] = "abc";
    int i = 0, j = 0;

    while (str1[i] != '\0') {
        i++;
    } 

    while (str2[j] != '\0') {
        str1[i] = str2[j];
        i++;
        j++;
    }

    printf("string after concatination: %s", str1);

    return 0;
}