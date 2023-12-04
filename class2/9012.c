#include <stdio.h>
#include <string.h>

int main() {
	
	int times;
	int stack;
	scanf("%d",&times);
	
	for(int i =0; i<times; i++){
		char inp[50] = {0,};
		scanf("%s",inp);
		stack=0;
		for(int j =0;j<strlen(inp);j++){
			if(inp[j]=='('){
				++stack;
			}
			else if(inp[j]==')'){
				--stack;
			}
			if(stack < 0){
				break;
			}
		}
		if(stack == 0){
			printf("YES\n");
		}
		else{
			printf("NO\n");
		}
	}
	
	return 0;
}