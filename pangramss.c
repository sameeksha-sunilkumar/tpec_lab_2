#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char s[10000];
    int f[26] = {0}, ans = 0;

    fgets(s, sizeof(s), stdin);

    for (int i = 0; s[i]; i++) {
        if (isalpha(s[i])) {
            char ch = toupper(s[i]);
            if (!f[ch - 'A']++) 
                ans++;
        }
    }

    if (ans == 26)
        printf("pangram\n");
    else
        printf("not pangram\n");

    return 0;
}

//OR (study for loop only)

#include <stdio.h> 
#include <string.h>

char s[10000]; 

int main() { 
    gets(s); 
    int f[300] = {0}, ans = 0, i; 
    int l = strlen(s); 
    
    for(i = 0; i < l; i++) { 
        if(s[i] == ' ') 
            continue; 
        
        if(s[i] >= 'a') 
            s[i] = s[i] - ('a' - 'A'); 
        
        if(!(f[s[i]]++)) 
            ans++; 
    } 
    
    if(ans != 26) 
        printf("not "); 
    
    printf("pangram\n"); 
    
    return 0; 
}
