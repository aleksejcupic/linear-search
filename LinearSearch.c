#include <stdio.h>
#include <stdlib.h>

int Search(int arr[], int x){

    // Iterate through array
    int i;
    for (int i = 0; i <= 8; i++){
        if (arr[i] == x)
            return i;
    }

    // Not found
    return -1;
}

int main()
{
    int arr[] = {1, 3, 4, 7, 8, 10, 11, 20};
    int x = 11;
    int result = Search(arr, x);
    (result == -1) ? printf("Element is not preesnt in array") 
                : printf("Element is present at index %d\n", result);
    
    return 0;
}