#include<stdio.h>
int main(){
	int tc;
	scanf("%d",&tc);
	while(tc--){
	char str[151];
	scanf("%s",&str);
	int suvo=0,suvojit=0;
//	printf("%s",str);
	for(int i=0;str[i]!='\0';i++){
		if(str[i]='S'){
			if(str[i+1]=='U'&&str[i+2]=='V'&&str[i+3]=='O'){
				if(str[i+4]=='J'&&str[i+5]=='I'&&str[i+6]=='T'){
					suvojit++;
				}else{
					suvo++;
				}
			}
		}
	}
	printf("SUVO = %d, SUVOJIT = %d\n",suvo,suvojit);
	}
	
	return 0;
}
