#include <stdio.h>

#define SIZE 7

void print_matrix(int arr[SIZE][SIZE])
{
    for(int i=0; i<SIZE; i++){
        for(int j=0; j<SIZE; j++){
            printf("%5d ", arr[i][j]);
        }
        printf("\n");
    }
}

int main()
{
    int arr[SIZE][SIZE]={0};
    int n;
    printf("Enter a number:");
    scanf("%d", &n);

    int start=(n/SIZE)-(SIZE*SIZE/2);
    if(n%SIZE || start<=0) {
        printf("Enter a valid number\n");  
        return 1;
    }

    for(int i=SIZE-1, j=SIZE/2, counter=1; counter<=SIZE*SIZE; i++, j++, counter++){
        j%=SIZE;
        i%=SIZE;
        arr[i][j]=start++;
        if(counter%SIZE==0){
            i-=2;
            j--;
        }
    }
    print_matrix(arr);
    printf("\n");
}
