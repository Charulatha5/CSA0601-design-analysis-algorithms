#include<stdio.h>
int main(){
	int i,j,k,num = 5;
	for(i=0;i<num;i++){
		for(k = num;k>=i;k--){
			printf(" ");
		}
		int count = 1;
		for(j=0;j<i;j++){
			printf("%d ",count);
			count+=1;
		}printf("\n");
	}
}
