#include <stdio.h>



// Function to display personal details

void display_personal_details() {

    char name[] = "John Doe";

    int age = 30;

    char city[] = "New York";

    char country[] = "USA";

    char email[] = "john.doe@example.com";

    

    printf("Personal Details:\n");

    printf("Name: %s\n", name);

    printf("Age: %d\n", age);

    printf("City: %s\n", city);

    printf("Country: %s\n", country);

    printf("Email: %s\n", email);

}



int main() {

    // Call the function to display personal details

    display_personal_details();

    return 0;

}
