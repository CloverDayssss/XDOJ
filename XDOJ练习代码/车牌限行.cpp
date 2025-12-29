#include <stdio.h>

int main() {
    int a, b;       
    long int c;     
    int d;          

    scanf("%d %d %ld", &a, &b, &c);

    d = c % 10;

    printf("%d ", d);

    if (a == 6 || a == 7) {
        printf("no");
    }
    else {
   
        if (b < 200) {
            
            printf("no");
        }
        else if (b >= 200 && b < 400) {
            
            if (a == 1) {
                
                if (d == 1 || d == 6) {
                    printf("yes");
                }
                else {
                    printf("no");
                }
            }
            else if (a == 2) {
                
                if (d == 2 || d == 7) {
                    printf("yes");
                }
                else {
                    printf("no");
                }
            }
            else if (a == 3) {
                
                if (d == 3 || d == 8) {
                    printf("yes");
                }
                else {
                    printf("no");
                }
            }
            else if (a == 4) {
                
                if (d == 4 || d == 9) {
                    printf("yes");
                }
                else {
                    printf("no");
                }
            }
            else if (a == 5) {
               
                if (d == 5 || d == 0) {
                    printf("yes");
                }
                else {
                    printf("no");
                }
            }
        }
        else {
            
            if (a == 1 || a == 3 || a == 5) {
                
                if (d % 2 == 1) {
                    printf("yes");
                }
                else {
                    printf("no");
                }
            }
            else if (a == 2 || a == 4) {
                
                if (d % 2 == 0) {
                    printf("yes");
                }
                else {
                    printf("no");
                }
            }
        }
    }

    return 0;
}