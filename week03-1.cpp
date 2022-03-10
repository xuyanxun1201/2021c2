#include <stdio.h>
#include <string.h>
char line[2000];
int Palindromes()
{
	for(int i=0;i<strlen(line);i++){
		if(line[i]!=line[strlen(line)-1-i])return 0;
	}
	return 1;
}
int main()
{
	while(scanf("%s",line)==1){
		int p=Palindromes();
		if(p==1)printf("%s -- is a regular palindrome.\n\n",line);
		if(p==0)printf("%s -- is not a palindrome.\n\n",line);
	}
	return 0;
}
