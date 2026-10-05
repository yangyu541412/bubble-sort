#include<stdio.h>
void BubbleSort(int a[]);
int main()
{
    int a[8] = {0};
    printf("Please input 8 numbers:");
    int i; 
    for ( i=0; i<8; i++ ) {
        scanf("%d",&a[i]);
    }
    BubbleSort(a);
    printf("After sorting:");
    for ( i=0; i<8; i++ ) {
        printf("%d",a[i]);
        if ( i!=7 ) {
            printf(" ");
        }
    } 
    printf("\n");
    return 0;
}

void BubbleSort(int a[])
{
	int i=0;
    for ( i = 0; i < 7; i++) {
    	int j;
        for ( j = 0; j < 7 - i; j++) {
            if (a[j] > a[j+1]) {
                int temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
            }
        }
    }
}

