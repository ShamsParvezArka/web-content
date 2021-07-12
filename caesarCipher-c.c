#include <stdio.h>
#include <string.h>
#include <ctype.h>
#define LEN 101

int main()
{	
	int n,k,ccw;
	char s[LEN];
	scanf("%d\n", &n);
	fgets(s, LEN, stdin);
	scanf("%d", &k);

	int push = k%26;
	for(int i=0;i<n;i++){
		if(islower(s[i])){
			if(s[i]+push > 122){
				ccw = 96 + ((s[i]+push)%122);
				printf("%c", ccw);
				}
			else{
				printf("%c", s[i]+push);
			}
		}
		else if(isupper(s[i])){
			if(s[i]+push > 90){
				ccw = 64 + ((s[i]+push)%90);
				printf("%c", ccw);
			}
			else{
				printf("%c", s[i]+push);
			}
		}
		else{
			printf("%c", s[i]);
		}
	}
	
	return 0;	
}


