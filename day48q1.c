#include <stdio.h>
#include <string.h>


int stringLength(char str[]) {
    int len = 0;
    while(str[len] != '\0') {
        len++;
    }
    return len;
}


int isSubstring(char str1[], char str2[]) {
    int len1 = stringLength(str1);
    int len2 = stringLength(str2);

    for(int i = 0; i <= len1 - len2; i++) {
        int j;
        for(j = 0; j < len2; j++) {
            if(str1[i + j] != str2[j])
                break;
        }
        if(j == len2)
            return 1; 
    }
    return 0;
}

int main() {
    char str1[100], str2[100];

    printf("Enter first string: ");
    fgets(str1, sizeof(str1), stdin);

    printf("Enter second string: ");
    fgets(str2, sizeof(str2), stdin);

    
    int len1 = stringLength(str1);
    int len2 = stringLength(str2);

    if(str1[len1 - 1] == '\n') str1[len1 - 1] = '\0';
    if(str2[len2 - 1] == '\n') str2[len2 - 1] = '\0';

    
    if(stringLength(str1) != stringLength(str2)) {
        printf("The strings are not rotations of each other.\n");
        return 0;
    }

    
    char temp[200];
    int i = 0;
    int n = stringLength(str1);

    for(i = 0; i < n; i++) temp[i] = str1[i];
    for(i = 0; i < n; i++) temp[n + i] = str1[i];
    temp[2*n] = '\0';

    
    if(isSubstring(temp, str2))
        printf("The strings are rotations of each other.\n");
    else
        printf("The strings are not rotations of each other.\n");

    return 0;
}

}
