#include <stdio.h>
int main() {
    int y, x=1, wynik = 0;
    while (x<=10) {
        y = x*x;
        printf("%d\n", y);
        wynik += y;
        ++x;
    }
    printf("wynik = %d\n", wynik);
    return 0;
}
/* wynik:
1
4
9
16
25
36
49
64
81
100
wynik = 385
*/
