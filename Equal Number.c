#include <stdio.h>
#include<string.h>
int main(void) {
	// your code goes here
	int T,i=0,j;
	char W[100],I[100],W1[100],I1[100];
	scanf("%d",&T);
	while(T--) {
	    scanf("%s%s",W,I);
	    for(i=0,j=0;i<strlen(W);i++) {
	        if(W[i]!=',') {
	            W1[j++]=W[i];
	        }
	    }
	    W1[j]='\0';
	    for(i=0,j=0;i<strlen(I);i++) {
	        if(I[i]!=',') {
	            I1[j++]=I[i];
	        }
	    }
	    I1[j]='\0';
	    if(!strcmp(W1,I1)) {
	        printf("equal\n");
	    }
	    else {
	        printf("different\n");
	    }
	}
	return 0;
}

