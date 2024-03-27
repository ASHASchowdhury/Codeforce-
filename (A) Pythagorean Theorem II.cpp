#include<stdio.h>
 
const int max =2e8+12;
bool isprfctSquare[max];
 
int main(){
 
int n;
 
scanf("%d",&n);
 
for(int i=1;i<=n;i++){
    isprfctSquare[i*i]=1;
}
int count=0;
for(int a=1;a<=n;a++){
    for(int b=a;b<=n;b++){
        int v=(a*a)+(b*b);
        if(isprfctSquare[v]){
            count++;
        }
    }
}
printf("%d",count);
}
