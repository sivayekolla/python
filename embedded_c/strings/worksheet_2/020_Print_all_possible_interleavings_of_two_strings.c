/*
-Print all possible interleavings of two strings, preserving the relative order of characters in each string.
Input: str1 = "AB", str2 = "CD"
Output: "ABCD", "ACBD", "ACDB", "CABD", "CADB", "CDAB"
*/


#include <stdio.h>
#include <string.h>

void mint(char *str1, char *str2, char *res, int i, int j, int k) {
    if (str1[i] == '\0' && str2[j] == '\0') {
        res[k] = '\0';
        printf("%s\n", res);
        return;
    }

    if (str1[i] != '\0') {
        res[k] = str1[i];
        mint(str1, str2, res, i + 1, j, k + 1);
    }

    if (str2[j] != '\0') {
        res[k] = str2[j];
        mint(str1, str2, res, i, j + 1, k + 1);
    }
}

int main() {
    char str1[100], str2[100], res[200];
    printf("Enter first string:\n");
    scanf("%s", str1);
    printf("Enter second string:\n");
    scanf("%s", str2);
     int a=0;int b=0;int c=0;
    mint(str1, str2, res, a,b,c);
    return 0;
}
