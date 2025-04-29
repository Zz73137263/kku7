#include<stdio.h>
int main(){
	int i;
	int cnt = 0;
		int isvalid=1;
	for(i=100;i<1000;i++){
		//int isvalid=1;
		for(int p=2;p<i;p++){
			if(i%p==0){
				isvalid=0;
				break;
			}
		}
		if(isvalid){
			cnt++;
			printf("%d ",i);
				if(cnt%3==0){
			printf("\n");
							}
		}
	}
	printf("\n");
	printf("%d",cnt);
	return 0;
} 