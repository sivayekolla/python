/*Find the common folder path among a group of file paths.
Input: /home/user/docs/a.txt, /home/user/docs/b.txt, /home/user/docs/old/c.txt
Output: /home/user/docs*/
#include <stdio.h>
#include <string.h>         
#include <stdlib.h>
#define MAX_PATHS 100
#define MAX_LENGTH 1000
void find_common_path(char paths[MAX_PATHS][MAX_LENGTH], int n) {
    char common[MAX_LENGTH];
    strcpy(common, paths[0]); 

    for (int i = 1; i < n; i++) {
        char *p1 = common;
        char *p2 = paths[i];
        while (*p1 && *p2 && *p1 == *p2) {
            p1++;
            p2++;
        }
        *p1 = '\0'; 
    }
    char *last_slash = strrchr(common, '/');
    if (last_slash) {
        *(last_slash + 1) = '\0';
        printf("Common path: %s\n", common);
    }
}
int main() {
    int n;
    printf("Enter number of paths: ");
    scanf("%d", &n);
    getchar(); 
    char paths[MAX_PATHS][MAX_LENGTH];
    printf("Enter the paths:\n");
    for (int i = 0; i < n; i++) {
        fgets(paths[i], MAX_LENGTH, stdin);
        paths[i][strcspn(paths[i], "\n")] = '\0'; 
    }

    find_common_path(paths, n);
    return 0;
}



