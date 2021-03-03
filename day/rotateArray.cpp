#include <iostream>
#include <stdio.h>

using namespace std;

#define N 20

int main(){
    int i,j,n,k = 1, a[N][N];
    printf("Enter a int, i <= N <= 20:\n");
    scanf("%d",&n);
    printf("**********Rotated Array**********\n");
    for(i=0;i<=n/2;i++){
        for(j=i;j<n-i;j++){
            a[i][j] = k++;
        }
        for(j=i+1;j<n-i;j++){
            a[j][n-i-1] = k++;
        }
        for(j=n-i-2;j>i;j--){
            a[n-i-1][j] = k++;
        }
        for(j=n-i-1;j>i;j--){
            a[j][i] = k++;
        }
    }
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            printf("%5d", a[i][j]);
        }
        printf("\n");
    }
    system("pause");
    return 0;
}