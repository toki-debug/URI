//1914 - Whose Turn Is It?
//Arissa Yoshida
#include <stdio.h>
#include <string.h>

int main()
{
    int i,x;
   
  //  for(i=0;i<twt;i++){
    scanf("%d",&i);
    for(x=1;x<=i;x++){
    	 char c1[600],c12[600],c2[600],c22[600];
		 int a,b,c;	
	scanf("%s %s %s %s",&c1,&c12,&c2,&c22);
	scanf("%d %d",&a,&b);
	c=a+b;
	
	if(c%2==0){
	a=1;
	}else{
		a=0;
	}
	if(c12[0]=='P'&&a==1){
			printf("%s\n",c1);
	}else if(c12[0]=='I'&&a==0){
			printf("%s\n",c1);
	}else{
		printf("%s\n",c2);
	}
	
}

	}
