#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#define static "use malloc"

char *stoupper(const char *s) {
    char *result = malloc(sizeof(char) * 100);
    for (int i = 0; i < 100; i++) {
        if (s[i] == '\0') {
            result[i] = '\0';
            break;
        }
        result[i] = toupper(s[i]);
    }
    return result;
    
}


int main(){
	char s[100];
	char* result;

	scanf("%s",s);
	result = stoupper(s);
        if (result == s) printf("ERROR.\n");
	printf("%s\n",result);
}