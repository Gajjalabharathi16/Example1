#include <stdio.h>

int main() {
    int arr[] = {1, 2, 2, 3, 4, 4, 5, 6, 6, 7};
    int n = sizeof(arr) / sizeof(arr[0]);
    int i, j;

    
    for (i = 0; i < n; i++) {
        
        for (j = 0; j < i; j++) {
            if (arr[i] == arr[j])
	    {
                break; 
            }

        }
	 if (j == i) {
            printf("%d ", arr[i]);
        }

       
    
    
    }

    return 0;
}
