#include<stdio.h>
#define REG_BASE 0x40000000
int main()
{
    volatile int *reg_modifiable = (int *)REG_BASE;
    const int *reg_readonly = (const int *)REG_BASE;
    const volatile int *reg_const_volatile = (const volatile int *)REG_BASE;
     printf("\nmodifiablr=%x",reg_modifiable);
    reg_modifiable=0x234567;
    printf("\n%x",reg_modifiable);
    printf("\nreg_const_volatile=%x",reg_const_volatile);
    reg_const_volatile=0x896785;
     printf("\nreg_const_volatile=%x",reg_const_volatile);
    printf("\nreg_readonly=%d",reg_readonly);
    reg_readonly=0x564783;
     printf("\nreg_readonly=%d",reg_readonly);
}