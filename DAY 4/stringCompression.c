/*Compress the given string “aaabcddeeee”
  into a2bcd2e4*/
#include <stdio.h>
#include <string.h>

void compressString(char* input, char* output) {
    int inputLen = strlen(input);
    if (inputLen == 0) {
        output[0] = '\0';
        return;
    }

    int outputIndex = 0;
    int count = 1;

    for (int i = 0; i < inputLen; i++) {
        if (i < inputLen - 1 && input[i] == input[i + 1]) {
            count++;
        } else {
            // 1. Always append the character
            output[outputIndex++] = input[i];

            // 2. ONLY append the count if it's greater than 1
            if (count > 1) {
                char countStr[10];
                sprintf(countStr, "%d", count);
                for (int j = 0; countStr[j] != '\0'; j++) {
                    output[outputIndex++] = countStr[j];
                }
            }
            
            count = 1;
        }
    }
    output[outputIndex] = '\0';
}

int main() {
    char input[100]; 
    char output[100]; 
    
    printf("Enter a String: ");
    if (fgets(input, sizeof(input), stdin)) {
        input[strcspn(input, "\n")] = 0;
    }

    compressString(input, output);

    printf("Original: %s\n", input);
    printf("Compressed: %s\n", output);

    return 0;
}