#include <stdio.h>

int main() {
    int choice;
    long long num1, num2, result;

    do {
        printf("\n--- Calculator ---\n");
        printf("1. Add\n2. Subtract\n3. Multiply\n4. Divide\n5. Exit\n");
        printf("Enter choice: \n");
        scanf("%d", &choice);
            if(choice>=1&&choice<=4){
            printf("Enter two numbers: \n");
            scanf("%lld %lld", &num1, &num2);
            }

        switch (choice) {
            case 1:
                result = num1 + num2;
                printf("Result: %.2lld\n", result);
                break;
            case 2:
                result = num1 - num2;
                printf("Result: %.2lld\n", result);
                break;
            case 3:
                result = num1 * num2;
                printf("Result: %.2lld\n", result);
                break;
            case 4:
                if (num2 == 0)
                    printf("Error: Division by zero!\n");
                else {
                    result = num1 / num2;
                    printf("Result: %.2lld\n", result);
                }
                break;
            case 5:
                printf("Exiting...\n");
                break;
            default:
                printf("Invalid choice!\n");
        }
    } while (choice != 5);

    return 0;
}