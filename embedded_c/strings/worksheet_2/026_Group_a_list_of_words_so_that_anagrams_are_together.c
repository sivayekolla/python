/*
Group a list of words so that anagrams are together.
Input: ["cat", "tac", "act", "dog"]
Output: ["cat", "tac", "act"], ["dog"]
*/




#include <stdio.h>
#include <string.h>

int main() {
    char *words[] = {"cat", "tac", "act", "dog"};
    int used[4] = {0};
    int i, j, k;
    for (i = 0; i < 4; i++) 
    {
        if (used[i]) continue;
        printf("[\"%s\"", words[i]);
        used[i] = 1;
        for (j = i + 1; j < 4; j++) 
        {
            if (used[j]) continue;
            int count[26] = {0}, f = 1;
            if (strlen(words[i]) != strlen(words[j])) continue;
            for (k = 0; words[i][k]; k++) 
            {
                count[words[i][k] - 'a']++;
                count[words[j][k] - 'a']--;
            }
            for (k = 0; k < 26; k++) 
            {
                if (count[k] != 0) 
                {
                    f = 0;
                    break;
                }
            }
            if (f) 
            {
                printf(", \"%s\"", words[j]);
                used[j] = 1;
            }
        }
        printf("]\n");
    }
    return 0;
}
