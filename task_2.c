#include <stdio.h>
#include <string.h>

// Define the maximum number of accounts
#define MAX_ACCOUNTS 5

// Define the maximum length of the username and password
#define MAX_USERNAME_LENGTH 20
#define MAX_PASSWORD_LENGTH 20

// Define a union to store login status
union LoginStatus {
    int active;
    char inactive[5];
};

// Define a structure for an account
struct Account {
    char username[MAX_USERNAME_LENGTH];
    char password[MAX_PASSWORD_LENGTH];
    union LoginStatus status;
};

int main() {
    // Create an array of accounts
    struct Account accounts[MAX_ACCOUNTS];

    // Initialize some sample accounts
    strcpy(accounts[0].username, "user1");
    strcpy(accounts[0].password, "pass1");
    accounts[0].status.active = 0;

    strcpy(accounts[1].username, "user2");
    strcpy(accounts[1].password, "pass2");
    accounts[1].status.active = 1;

    // You can add more accounts similarly

    // Input variables
    char inputUsername[MAX_USERNAME_LENGTH];
    char inputPassword[MAX_PASSWORD_LENGTH];

    // Get user input
    printf("Enter username: ");
    scanf("%s", inputUsername);
    printf("Enter password: ");
    scanf("%s", inputPassword);

    // Check if the entered username and password match any account
    int found = 0;
    for (int i = 0; i < MAX_ACCOUNTS; i++) {
        if (strcmp(inputUsername, accounts[i].username) == 0 &&
            strcmp(inputPassword, accounts[i].password) == 0) {
            found = 1;

            // Check login status
            if (accounts[i].status.active) {
                printf("Login successful!\n");
            } else {
                printf("Account is inactive. Login failed.\n");
            }

            break;
        }
    }

    if (!found) {
        printf("Invalid username or password. Login failed.\n");
    }

    return 0;
}
