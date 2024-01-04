#include<stdio.h>
int main()
{
    int i,j,cout=0;
    int a[3][3]={1,2,3,8,7,2,4,5,2};
     
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            if(i>=j){
                printf("%d",a[i][j]);

            }
            else{
                printf("0");
            }

        }  
        printf("\n");
    }            
}
    

    
