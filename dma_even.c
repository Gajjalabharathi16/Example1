#include <stdio.h>
#include <stdlib.h>

int main() {
    int rows, cols;

   
    printf("Enter the number of rows: ");
    scanf("%d", &rows);
    printf("Enter the number of columns: ");
    scanf("%d", &cols);

  
    int *ptr[rows]; 

    
    for (int i = 0; i < rows; i++) {
        ptr[i] = (int *)malloc(cols * sizeof(int));  
        if (ptr[i] == NULL) {
            fprintf(stderr, "Memory allocation failed for row %d\n", i);
            return 1;
        }
    }

   
    printf("Enter even elements of the 2D array:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            int num;
            do {
                printf("Element [%d][%d]: ", i, j);
                scanf("%d", &num);
                if (num % 2 != 0) {
                    printf("Please enter an even number.\n");
                }
            } while (num % 2 != 0); 
            ptr[i][j] = num;  
        }
   }
    printf("The 2D array of even numbers is:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d ", ptr[i][j]);
        }
        printf("\n");
    }

    
    for (int i = 0; i < rows; i++) {
        free(ptr[i]);  
    }

    return 0;
}

