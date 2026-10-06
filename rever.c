void reverse_str(char* s, int left, int right) {
    while (left < right) {
        char temp = s[left];
        s[left++] = s[right];
        s[right--] = temp;
    }
}

char* reverseWords(char* s) {
    int n = strlen(s);
    reverse_str(s, 0, n - 1);
    int i = 0, j = 0;
    while (j < n) {
        while (j < n && s[j] == ' ')
            j++;

        if (j == n) 
            break;
        if (i > 0) 
            s[i++] = ' ';
        
        int start = i;  
        while (j < n && s[j] != ' ') {
            s[i++] = s[j++];
        }       
        reverse_str(s, start, i - 1);
    }
    s[i] = '\0';
    return s;
}