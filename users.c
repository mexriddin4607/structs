#include <stdio.h>

typedef struct {
    char first_name[50];
    char last_name[50];
    int birth_year;
    char location[50];
    char phone[15];
} User;

int main() {

    User users[] = {
        {"John", "Doe", 1990, "Tashkent", "+998901234567"},
        {"Jane", "Smith", 1985, "Samarkand", "+998901234568"},
        {"Ali", "Karimov", 2000, "Bukhara", "+998901234569"}
    };

    int n = sizeof(users) / sizeof(users[0]);

    printf("Foydalanuvchilar Jadvali\n");
    printf("First Name | Last Name | Birth Year | Location    | Phone          \n");
    printf("--------------------------------------------------------------\n");

    for (int i = 0; i < n; i++) {
        printf("%-11s| %-10s| %-11d| %-11s| %-15s\n",
               users[i].first_name, users[i].last_name, users[i].birth_year, users[i].location, users[i].phone);
    }

    return 0;
}