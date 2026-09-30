#include <stdio.h>

int main() {
    char municipalityName[100];
    char mayorName[100];
    int population;

    // 1. System title
    printf("========================================\n");
    printf("MUNICIPAL FINANCIAL MANAGEMENT SYSTEM\n");
    printf("========================================\n\n");

    // 2. Welcome message
    printf("Welcome to Windhoek Municipality\n\n");

    // 3. Prompt user
    printf("Enter Municipality Name: ");
    fgets(municipalityName, sizeof(municipalityName), stdin);

    printf("Enter Mayor's Name: ");
    fgets(mayorName, sizeof(mayorName), stdin);

    printf("Enter Population: ");
    scanf("%d", &population);

    // 4. Formatted report
    printf("\n---------- MUNICIPAL REPORT ----------\n");
    printf("Municipality Name : %s", municipalityName);
    printf("Mayor's Name : %s", mayorName);
    printf("Population : %d\n", population);
    printf("--------------------------------------\n");
    printf("System initialized successfully!\n");

    return 0;
}