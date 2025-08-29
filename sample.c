#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
	char* str = malloc(sizeof(char) * 100);
	
	printf("Enter a string: ");
	fgets(str, 100, stdin);
	
	// remove trailing newlines
	str[strcspn(str, "\r\n")] = 0;	

	int length = strlen(str);

	for (int i = 0; i < length; i++) {
		if (str[i] >= 'a' && str[i] <= 'z') {
			str[i] = str[i] - 'a' + 'A';
		}
	}

	printf("The capitalized string is: %s\n", str);

	// Reverse the string.
	int len = strlen(str);
	for (int i = 0; i < len / 2; i++) {
		char temp = str[i];
		str[i] = str[len - 1 - i];
		str[len - 1 - i] = temp;
	}

	printf("The reversed string is: %s\n", str);

	return 0;
}
