bool validPalindrome(char* s) {
    int i = 0, l = strlen(s), j = l - 1, c = 0, d = 0;
    for (; i < j && c <= 1 ;)
        if (s[i] == s[j])
            i++, j--;        
        else if (++c <= 1 && s[i] == s[j - 1])
            i++, j -= 2;
    for (i = 0, j = l - 1, d = 0 ; i < j && c > 1 && d <= 1 ;)
        if (s[i] == s[j])
            i++, j--;        
        else if (++d <= 1 && s[i + 1] == s[j])
            i += 2, j--;
    return c <= 1 || d <= 1;
}