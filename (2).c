#include <stdio.h>

int main() {
    int k, l;

    printf("Enter the array's row size: ");
    scanf("%d", &k);
    printf("Enter the array's column size: ");
    scanf("%d", &l);

    int array[k][l];

    printf("Enter array's elements:\n");
    for (int i = 0; i < k; i++) {
        for (int j = 0; j < l; j++) 
		{
            printf("a[%d][%d] = ",i,j);
            scanf("%d", &array[i][j]);
        }
    }

    int largest = array[0][0];

    for (int i=0;i<k;i++) 
	{
        for (int j=0;j<l;j++) 
		{
            if (array[i][j]>largest) 
			{
                largest=array[i][j];
            }
        }
    }
    printf("The largest element is: %d\n", largest);
}
