#include <stdio.h>

int main()
{
    const char DOKU_MANDIRI[] = "DOKU_MANDIRI";
    const char DOKU_BCA[] = "DOKU_BCA";
    const char DOKU_KREDIVO[] = "DOKU_KREDIVO";
    const char DOKU_ATOME[] = "DOKU_ATOME";

    int input = 0;

    printf("Enter code the payment : ");
    scanf("%d", &input);
    getchar();

    switch (input)
    {
    case 1:
        printf("%s", DOKU_MANDIRI);
        break;
    case 2:
        printf("%s", DOKU_BCA);
        break;
    case 3:
        printf("%s", DOKU_KREDIVO);
        break;
    case 4:
        printf("%s", DOKU_ATOME);
        break;
    default:
        printf("Payment not available !");
    }

    return 0;
}
