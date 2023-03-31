#include <stdio.h>

int main() {
    char nAME[100];
    int acc, pIN, sECRET, aMOUNT;
    float bALANCE, present;

    printf("Welcome to SBI ATM\n");

    // User need to enter the name so that atm will detect the user bank account details
    printf("PLEASE ENTER YOUR NAME: ");
    fgets(nAME, 100, stdin);

    // User should enter the respective account number linked with the name mentioned above
    printf("PLEASE ENTER YOUR ACCOUNT NUMBER: ");
    scanf("%d", &acc);

    // The user need to enter his ATM PIN to verify whether the person doing transaction is the account owner or not
    printf("ENTER YOUR PRIVATE PIN: ");
    scanf("%d", &pIN);

    // The user should know the bank balance of his account and he need to enter the bank balance, after he enters the bank balance the atm proceeds to further steps
    printf("PLEASE ENTER YOUR BANK BALANCE: ");
    scanf("%f", &bALANCE);

    if (bALANCE < 500) {
        printf("YOU CAN'T WITHDRAW MONEY DUE TO LESS BANK BALANCE\n");
        return 0;
    }

    // If the bank balance is less than 500 then the user is unable to withdraw money. Because there should be minimum balance of 500 in the bank account
    // The user need to enter his ATM PIN once again,that should be same as the pin entered before
    printf("PLEASE ENTER YOUR SECRET PIN: ");
    scanf("%d", &sECRET);

    if (pIN == sECRET) {
        // The user need to enter the amout that he need to withdraw
        printf("PLEASE ENTER THE AMOUNT TO BE WITHDRAWN: ");
        scanf("%d", &aMOUNT);

        if (aMOUNT < bALANCE) {
            // The amount entered should be less than the bank balance
            // After transaction the ATM displays the present bank balance
            present = bALANCE - aMOUNT;
            printf("YOUR PRESENT BANK BALANCE IS %.2f\n", present);
            printf("YOUR TRANSACTION IS SUCCESSFUL\n");
            printf("VISIT AGAIN\n");
        } else {
            printf("SORRY YOUR BANK BALANCE IS LESS THAN THE AMOUNT TO BE WITHDRAWN\n");
        }
    } else {
        // If the pin entered doesn't match then the ATM don't move to further steps
        printf("*INVALID YOUR PRIVATE PIN IS WRONG\n");
    }

    return 0;
}
