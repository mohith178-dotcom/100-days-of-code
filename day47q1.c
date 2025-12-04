#include <stdio.h>

int main() {
    char str1[100], str2[100];
    int count1[26] = {0}, count2[26] = {0}; 
    int i = 0, flag = 1;

    printf("Enter first string: ");
    fgets(str1, sizeof(str1), stdin);

    printf("Enter second string: ");
    fgets(str2, sizeof(str2), stdin);

    i = 0;
    while(str1[i] != '\0') {
        char ch = str1[i];
        if(ch >= 'a' && ch <= 'z')
            count1[ch - 'a']++;
        else if(ch >= 'A' && ch <= 'Z') 
            count1[c]()
