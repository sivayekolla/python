#include <stdio.h>

typedef int (*CalibArrayPtr)[10];

CalibArrayPtr get_calibration_data(void)
{
    static int calib_data[10] = {100, 101, 102, 103, 104, 105, 106, 107, 108, 109};
    return &calib_data;
}

int main()
{
    CalibArrayPtr p;
    int i;

    p = get_calibration_data();

    for (i = 0; i < 10; i++) {
        printf("Calibration[%d] = %d\n", i, (*p)[i]);
    }

    return 0;
}
