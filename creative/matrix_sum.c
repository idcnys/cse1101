#include<stdio.h>
#include<conio.h>


int main(){

    printf("This is a basic matrix calculation program!\nEnter the dimension of 1st Matrix(Ex: 2x3): ");
    int r1,c1;
    char u;
    scanf("%d%c%d",&r1,&u,&c1);
    printf("Now enter 1st the matrix values(in same Row space seprated and columns by newline):\n");
    int mat1[r1][c1];
    int arr[10][10] = {0};
    for(int i=0;i<r1;i++){
        for(int j=0;j<c1;j++){
            int tmp;
            scanf("%d",&tmp);
            mat1[i][j]=tmp;
        }
    }
 printf("Now enter the 2nd matrix values:\n");
    int mat2[r1][c1];
    for(int i=0;i<r1;i++){
        for(int j=0;j<c1;j++){
            int tmp;
            scanf("%d",&tmp);
            mat2[i][j]=tmp;
        }
    }
    printf("Yeah. I got it. Now to add those type 1 else 0\nEnter:\n");
    int process=0;
    int result[r1][c1];
    scanf("%d",&process);
    if(process==1){
        //
        for(int i=0;i<r1;i++){
        for(int j=0;j<c1;j++){
            int sum= mat1[i][j]+mat2[i][j];
            result[i][j]=sum;
        }
    }
    }else{
        for(int i=0;i<r1;i++){
        for(int j=0;j<c1;j++){
            int sum= mat1[i][j]-mat2[i][j];
            result[i][j]=sum;
        }
    }
    }

    for(int i=0;i<r1;i++){
        for(int j=0;j<c1;j++){
            
            printf("%d ",result[i][j]);
        }
        printf("\n");
    }
    getch();

    return 0;
}