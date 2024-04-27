#include <stdio.h>
#include <string.h>

int main() {
    printf("Enter the name: \n");
    char name[100];
    scanf("%s", name);

    int len = strlen(name);
    char str[len]; // Variable length array to store counts

    for (int i = 0; i < len; i++) {
        int count = 1; // Initialize count for each character
        for (int j = i + 1; j < len; j++) {
            if (name[i] == name[j]) {
                count++;
                name[j]=0;
            }
        }
        str[i] = count; // Store count in str array
    }
    str[len] = '\0'; // Terminate str array with null character

    // Print character and its count
    for (int k = 0; k < len; k++) {
        if(name[k]!=0)
        printf("%c=%d\n", name[k], str[k]);
    }

    return 0;
}
