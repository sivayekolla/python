#include <stdio.h>
int intadd(int a, int b)      { return a + b; }
int intsub(int a, int b)      { return a - b; }

float floatadd(float a, float b)  { return a + b; }
float floatsub(float a, float b)  { return a - b; }

int intand(int a, int b)      { return a & b; }
int intor(int a, int b)       { return a | b; }

typedef enum { ARITHMETIC, BITWISE, OP_TYPE_COUNT } optype;
typedef enum { INT_TYPE, FLOAT_TYPE, DATA_TYPE_COUNT } DataType;

typedef int   (*intop)(int, int);
typedef float (*floatop)(float, float);

intop intOps[OP_TYPE_COUNT][2] = {
    { intadd, intsub },  
    { intand, intor }    
};

floatop floatops[OP_TYPE_COUNT][2] = {
    { floatadd, floatsub },  
    { NULL, NULL }           
};

int main() {
    int a = 10, b = 5;
    float x = 10.5f, y = 4.5f;

    optype op = ARITHMETIC;
    DataType type = FLOAT_TYPE;
    int operationIndex = 0; 

    if (type == INT_TYPE) {
        int result = intOps[op][operationIndex](a, b);
        printf("INT result: %d\n", result);
    } else if (type == FLOAT_TYPE && floatops[op][operationIndex] != NULL) {
        float result = floatops[op][operationIndex](x, y);
        printf("FLOAT result: %.2f\n", result);
    } else {
        printf("Invalid operation for selected type.\n");
    }

    return 0;
}
