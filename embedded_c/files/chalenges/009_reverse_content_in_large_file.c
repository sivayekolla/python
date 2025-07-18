#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *fp = fopen("largefile.bin", "r+b");
    if (!fp) return 1;

    if (fseek(fp, 0, SEEK_END) != 0) { fclose(fp); return 1; }
    long size = ftell(fp);
    if (size <= 1) 
    { 
     fclose(fp); 
     return 0; 
     }

    long start = 0, end = size - 1;
    int b1, b2;

    while (start < end) {
        if (fseek(fp, start, SEEK_SET) != 0) break;
        b1 = fgetc(fp);
        if (fseek(fp, end, SEEK_SET) != 0) break;
        b2 = fgetc(fp);

        if (fseek(fp, start, SEEK_SET) != 0) break;
        fputc(b2, fp);
        if (fseek(fp, end, SEEK_SET) != 0) break;
        fputc(b1, fp);

        start++;
        end--;
    }

    fclose(fp);
    return 0;
}
