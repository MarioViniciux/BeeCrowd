#include <stdio.h>

int main() {
    int arr[3], cop[3];
    int temp;

    scanf("%d %d %d", &arr[0], &arr[1], &arr[2]);
    
    for(int i = 0; i < 3; i++) {
        cop[i] = arr[i];
    }

    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3 - i - j; j++) {
            if(arr[j] > arr[j + 1]) {
                temp = arr[j + 1];
                arr[j + 1] = arr[j];
                arr[j] = temp;
            }
        }
    }

    for(int i = 0; i < 3; i++) {
        printf("%d\n", arr[i]);
    }

    printf("\n");

    for(int i = 0; i < 3; i++) {
        printf("%d\n", cop[i]);
    }

    return 0;
}