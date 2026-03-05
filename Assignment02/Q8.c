#include <stdio.h>

int main() {
    int qnt;
    float unitprice = 5.0, totalprice, discount = 0.0;

    printf("Enter quantity: ");
    scanf("%d", &qnt);

    totalprice = unitprice * qnt;

    if (qnt > 50) {
        discount = 0.15 * totalprice;
    } else if (qnt > 30) {
        discount = 0.10 * totalprice;
    }

    totalprice -= discount;

    printf("Total price after discount: Rs %.2f\n", totalprice);

    return 0;
}
