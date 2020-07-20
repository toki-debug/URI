//1858 - Theon's Answer
//Arissa Yoshida
#include <stdio.h>
#include <stdlib.h>


int main() {
    int z,x,p[101]={0},p1[101]={0},d=1;
    scanf("%d",&z);
    for(x=1;x<=z;x++){
    	scanf("%d",&p[x]);
    	if(x==1){
    		p[0]=p[x];
    	}else{
    		if(p[x]<p[0]){
				p[0]=p[x];    			
    			d=x;
    			}
    	}
    }
    printf("%d\n",d);
    

}
