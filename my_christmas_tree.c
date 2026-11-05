#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv){
    if(argc == 2){
        int width;
        int n = atoi(argv[1]);
        int M = n * n + 3*n + 3;
        if (n < 1) {
            return 1;
        }
        for (int i = 1; i <= n; i++){
            for(int rows = 0; rows <= i + 2; rows++){
                int stars = (i * i + i - 1) + 2 * rows;
                int spaces = (M - stars) / 2;
                
                for(int k = 0; k < spaces; k++){
                    printf(" ");
                }

                for(int j = 0; j < stars; j++){
                    printf("*");
                }
                
                
                printf("\n");
            }
        }
        
        if(n % 2 == 0){
            width = n + 1;
        }
        
        else{
            width = n;
        }
        
        int log_tree_thingy = (M - width) / 2;
        for(int o = 0; o < n; o++){
            for(int p = 0; p < log_tree_thingy; p++){
                printf(" ");
            }

            for(int u = 0; u < width; u++){
                printf("|");
            }

            printf("\n");
        }
    }

    else{
        return 1;
    }

    return 0;
}