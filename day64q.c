#include <stdio.h>
#include <string.h>

int main() {
    char s[1000];
    scanf("%s", s);

    int freq[256] = {0};
    int start = 0, maxLen = 0;

    for (int end = 0; s[end] != '\0'; end++) {
        freq[(unsigned char)s[end]]++;

        
        while (freq[(unsigned char)s[end]] > 1) {
            freq[(unsigned char)s[start]]--;
            start++;
        }

        int currentLen = end - start + 1;
        if (currentLen > maxLen)
            maxLen = currentLen;
    }

    printf("%d", maxLen);
    return 0;
}
