//1789 - The Race of Slugs
//Arissa Yoshida
#include <stdio.h>
#include <stdlib.h>


int main() {
    int z,x;

    while(scanf("%d",&z) != EOF){
    	int p[z+1];
    	for(x=1;x<=z;x++){
    		scanf("%d",&p[x]);
    	if(x==1){
    		p[0]=p[x];
    	}else{
    		if(p[x]>p[0]){
				p[0]=p[x];    			
    			}
    	}
    }

    if(p[0]<10){
    	printf("1\n");
    }else if(p[0]>=10&&p[0]<20){
    	printf("2\n");
    }else if(p[0]>=20){
    	printf("3\n");
    }
    
    }

}
