#include <bits/stdc++.h>
using namespace std;

// Using "Hashing", aka an array
// This function only works with lower case letters
int isAnagram(char *a, char *b)
{
    int H[26] = {0};

    for (int i = 0; a[i] != '\0'; i++)
        H[a[i] - 97]++;

    for (int i = 0; b[i] != '\0'; i++)
    {
        H[b[i] - 97]--;
        if (H[b[i] - 97] < 0)
            return 0;
    }

    // Check if there are any non zero vals in H, if so it is not an Anagram
    for (int i = 0; i < 26; i++)
    {
        if (H[i] > 0)
            return 0;
    }
    return 1;
}

int main()
{
    char s1[] = "tenzzing";
    char s2[] = "tenzing";
    if (isAnagram(s1, s2))
        printf("is Anagram\n");
    else
        printf("is NOT Anagram\n");

    char s3[] = "tenzing";
    char s4[] = "tenzzing";
    if (isAnagram(s3, s4))
        printf("is Anagram\n");
    else
        printf("is NOT Anagram\n");

    return 0;
}