int main() {
        double a, b, c, x;
        
        printf("Wprowadź trzy liczby: \n");
        scanf("%lf %lf %lf", &a, &b, &c);

        x = a + b + c;
        printf("Suma wynosi: %.2lf\n", x);

        x = a * b * c;
        printf("Iloczyn wynosi: %.2lf\n", x);

        if (a < b && a < c) {
        printf("Najmniejsza liczba to: %.2lf\n", a);
        } else if (b < a && b < c) {
        printf("Najmniejsza liczba to: %.2lf\n", b);
        } else if (c < a && c < b) {
        printf("Najmniejsza liczba to: %.2lf\n", c);
        }

        if (a > b && a > c) {
        printf("Największa liczba to: %.2lf\n", a);
        } else if (b > a && b > c) {
        printf("Największa liczba to: %.2lf\n", b);
        } else if (c > a && c > b) {
        printf("Największa liczba to: %.2lf\n", c);
        }

        return 0;
}
