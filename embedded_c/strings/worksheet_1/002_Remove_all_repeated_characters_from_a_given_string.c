/*
Remove all repeated characters from a given string
         Input: "programming"

        Output: "progamin"


*/
#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    printf("Enter string:\n");
    fgets(str, 100, stdin);
    str[strcspn(str, "\n")] = '\0'; 
    int len = strlen(str);
    for (int i = 0; i < len; i++) {
        for (int j = i + 1; str[j] != '\0'; ) {
            if (str[i] == str[j]) {
               
                for (int k = j; str[k] != '\0'; k++) {
                    str[k] = str[k + 1];
                }
               
                len--;  
            } else {
                j++; 
        }
    }

    printf("Result: %s\n", str);
    return 0;
}
}