#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int get_rank(char s[]) {
    char order[15][3] = {"3","4","5","6","7","8","9","10","J","Q","K","A","2","w","W"};
    for (int i = 0; i < 15; i++) {
        if (strcmp(s, order[i]) == 0) {
            return i;
        }
    }
    return -1;
}

int main() {
    int t;
    scanf("%d", &t);
    while (t--) {
        int n;
        scanf("%d", &n);
        char sizes[10000][3];
        char suits[10000][3];
        int ranks[10000];
        int suit_vals[10000];
        int indices[10000];
        for (int i = 0; i < n; i++) {
            scanf("%s", sizes[i]);
            ranks[i] = get_rank(sizes[i]);
            indices[i] = i;
        }
        for (int i = 0; i < n; i++) {
            scanf("%s", suits[i]);
            suit_vals[i] = atoi(suits[i]);
        }
        for (int i = 0; i < n - 1; i++) {
            for (int j = 0; j < n - i - 1; j++) {
                int idx1 = indices[j];
                int idx2 = indices[j + 1];
                if (ranks[idx1] > ranks[idx2]) {
                    int temp = indices[j];
                    indices[j] = indices[j + 1];
                    indices[j + 1] = temp;
                } else if (ranks[idx1] == ranks[idx2]) {
                    if (suit_vals[idx1] > suit_vals[idx2]) {
                        int temp = indices[j];
                        indices[j] = indices[j + 1];
                        indices[j + 1] = temp;
                    }
                }
            }
        }
        for (int i = 0; i < n; i++) {
            if (i > 0) {
                printf(" ");
            }
            printf("%s", sizes[indices[i]]);
        }
        printf("\n");
        
        for (int i = 0; i < n; i++) {
            if (i > 0) {
                printf(" ");
            }
            printf("%s", suits[indices[i]]);
        }
        printf("\n");
    }
    
    return 0;
}