/*
Given a list of strings and a word, print the strings containing all characters of that word.
Input: Word = "act", List = ["cat", "tac", "act", "dog"]
Output: "cat", "tac", "act"
*/
#include <stdio.h>

int main() {
    char *w = "act", *a[] = {"cat", "tac", "act", "dog"};
    int i = 0, j = 0, k = 0, c = 0, f = 0;
    for (i = 0; i < 4; i++) {
        char *v = a[i];
        f = 1;
        for (j = 0; w[j]; j++) {
            c = 0;
            for (k = 0; v[k]; k++) {
                if (w[j] == v[k]) {
                    c = 1;
                    break;
                }
            }
            if (!c) {
                f = 0;
                break;
            }
        }
        if (f)
            printf("%s\n", v);
    }
    return 0;
}
