#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main() {
    int n;
    scanf("%d", &n);

    char s[105];
    scanf("%s", s);

    int freq[26] = {0};

    for (int i = 0; i < n; i++) {
        char c = tolower(s[i]);
        if (c >= 'a' && c <= 'z') {
            freq[c - 'a'] = 1;
        }
    }

    int count = 0;
    for (int i = 0; i < 26; i++) {
        count += freq[i];
    }

    if (count == 26)
        printf("YES\n");
    else
        printf("NO\n");

    return 0;
}
