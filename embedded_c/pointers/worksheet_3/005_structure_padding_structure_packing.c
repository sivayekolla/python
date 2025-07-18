#include<stdio.h>
#include<stddef.h>
struct PeripheralRegs {
  char status;
  int control;
  short error;
};

int main()
{
    struct PeripheralRegs p={'n',234,0};
    printf("%ld",sizeof(struct PeripheralRegs));
    printf("\n%d\n",sizeof(p));
    int offset_a=offsetof(struct PeripheralRegs,status);
    int offset_b=offsetof(struct PeripheralRegs,control);
    int offset_c=offsetof(struct PeripheralRegs,error);

    printf("%d %d %d",offset_a,offset_b,offset_c);
    
}