#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

double FtoC(double temp_f);

int main(void) {

    double c, f;
    f = 32.0;
    c = FtoC(f);

    printf("화씨 온도 %lf는 섭씨온도 %lf에 해당한다. \n", f, c);

	return 0;
}

double FtoC(double temp_f){
    double temp_c;
    temp_c = (temp_f - 32.0) * (5.0 / 9.0);
    return temp_c
    
}
