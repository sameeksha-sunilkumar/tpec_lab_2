//study while loop only

#include <stdio.h> 
#include <string.h> 
#include <stdlib.h> 

int main(){ 
    int n;  
    scanf("%d",&n); 
    char* B = (char *)malloc(10240 * sizeof(char)); 
    scanf("%s",B); 
    int i=0,count=0; 
    while(B[i]){ 
         if(B[i]=='0'&&B[i+1]=='1'&&B[i+2]=='0'){ 
B[i+2]='1'; 
count++; 
} 
i++; 
} 
printf("%d",count); 
return 0; 
}
