/*
Remove from the first string all characters that appear in the second string.
Input: str1 = "hello world", str2 = "low"
Output: "he rd"
*/
#include <stdio.h>
#include <string.h>

int main() {
    char arr[100], arr1[30];
    int i, j, k = 0;
    int found;

    printf("Enter the string and substring:\n");
    fgets(arr, 100, stdin);
    fgets(arr1, 30, stdin);

    arr[strcspn(arr, "\n")] = '\0';
    arr1[strcspn(arr1, "\n")] = '\0';

    char result[100];

    for (i = 0; arr[i] != '\0'; i++) {
        found = 0;
        for (j = 0; arr1[j] != '\0'; j++) {
            if (arr[i] == arr1[j]) {
                found = 1;
                break;
            }
        }
        if (!found) {
            result[k++] = arr[i];
        }
    }
    result[k] = '\0';

    printf("Output: \"%s\"\n", result);

    return 0;
}
