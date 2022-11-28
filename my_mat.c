#include <stdio.h>
#include "my_mat.h"

#define TEN 10

int mat[TEN][TEN]={0};
int min(int x,int y);


void dykstra (){

    for(int i=0; i<TEN;i++){
        for(int j=0;j<TEN;j++){
            if(i!=j && mat[i][j]==0){
                mat[i][j]=__INT_MAX__;
            }
        }
    }

    for(int k=0;k<TEN ; k++){
        for (int i = 0; i < TEN ; i++)
        {
            for(int j=0;j<TEN ;j++){
                int check=0;
                if (mat[i][k]==__INT_MAX__  || mat[k][j]==__INT_MAX__){
                    check = __INT_MAX__;
                }
                else{
                     check=(mat[i][k]+mat[k][j]);
                }
                mat[i][j]=min(mat[i][j],check);
            }
        }
        
    } 
    for(int i=0; i<TEN;i++){
        for(int j=0;j<TEN;j++){
            if(i!=j && mat[i][j]==__INT_MAX__){
                mat[i][j]=0;
            }
        }
    }   
}










void A_insert(){
    for (int  i = 0; i < TEN; i++)
    {
        for(int j=0; j<TEN; j++){
            scanf("%d",&mat[i][j]);
            
        }

    }
    dykstra();
    
    
}

void B_isExist(int i, int j){
    
    if (mat[i][j] ==0){
        printf("False\n");
    }
    else{
        printf("True\n");
    }
    
    
}


int min(int x,int y){
    if( x<y){
        return x;
    }
    else{
        return y;
    }
}

 

void C_shortestPath(int x, int y){

    if(mat[x][y]!=0){
        printf("%d\n",mat[x][y]);
    }
    else{
        printf("-1\n");
    }

}

