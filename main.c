#include "my_mat.h"
#include <stdio.h>





int main(){

int c;
while ((c=getchar())!='D')
{
    if (c=='A')
    {
        A_insert();
    }
    if (c=='B')
    {
        int i,j;
        scanf("%d%d",&i,&j);
        B_isExist(i,j);
    }
    if (c=='C')
    {
        int x,y;
        scanf("%d%d",&x,&y);
        C_shortestPath(x,y);
    }
    
    
}
return 0;
}
