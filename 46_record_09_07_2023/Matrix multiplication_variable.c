//Matrix multiplication - variable
#include<stdio.h>
int main(){
     int i,j,k;
     int m,n;
     scanf("%d",&m); 
     scanf("%d",&n);
    int a[100][100],b[100][100],c[100][100];

    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
             scanf("%d",&a[i][j]);             
        }
    }
    
    for(i=0;i<m;i++){
         for(j=0;j<n;j++){
             scanf("%d",&b[i][j]);             
        }
    }
    
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
             c[i][j]=0;
            for(k=0;k<n;k++){
                 c[i][j] += a[i][k]*b[k][j];
            }
        }
    }
     for(i=0;i<m;i++){
        for(j=0;j<n;j++){
             printf("%d \t",c[i][j]);
        }
         printf("\n");
    }
      return 0;
}
