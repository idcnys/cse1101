#include<stdio.h>
#include<conio.h>



int main(){
    printf("PROGRAMMED BY BITTO SAHA\nArea of a polygon in cartesian plane\nHow many points?\n=>");
    int n;
    scanf("%d",&n);
    int arr[n+1][2];
    int fa=0;
    int fb=0;
    for(int i=0;i<n;i++){
        
        printf("Enter %d no. Coords: ",i+1);
        int a,b;
        scanf("%d %d",&a,&b);
        arr[i][0]=a;
        arr[i][1]=b;
        if(i==0){
            fa=a;
            fb=b;
        }
        if(i+1==n){

            arr[i+1][0]=fa;
            arr[i+1][1]=fb;
        }
    }
    float area=0;
    for(int i=0;i<n+1;i++){
        for(int j=0;j<2;j++){
            if(i+1<n+1 && j+1<2){
            int as = arr[i][j] * arr[i+1][j+1];
            int ds = arr[i][j+1] * arr[i+1][j];
            int val = as - ds;
            area+=val;
            }
            
            // printf("%d ",arr[i][j]);
        }
        // printf("\n");
    }

    if(area<0){
        area = -area;
    }
    printf("Area is %.3f",area/2);
    getch();
    return 0;
}