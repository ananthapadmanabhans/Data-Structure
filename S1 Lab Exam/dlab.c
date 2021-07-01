#include <stdio.h>
 
int main(){
int i,j,k,id[10],fl[10],c=0;
int a[10][10]={
    {0,1,0,0,0,0,0},
    {0,0,1,1,1,0,0},
    {0,0,0,0,1,0,0},
    {0,0,0,0,1,0,0},
    {0,0,0,0,0,1,0},
    {0,0,0,0,0,0,0},
    {0,0,0,1,0,0,0}
}; 

 

 
for(i=0;i<7;i++)
{
id[i]=0;
 fl[i]=0;
}
 
for(i=0;i<7;i++)
for(j=0;j<7;j++)
id[i]=id[i]+a[j][i];
 
printf("\nTopologically Sorted Graph is :");
 
while(c<7){
for(k=0;k<7;k++){
if((id[k]==0) && (fl[k]==0)){
printf("%d ",(k+1));
fl[k]=1;
}
 
for(i=0;i<7;i++){
if(a[i][k]==1)
id[k]--;
}
}
 
 c++; 
}
 
return 0;
}
