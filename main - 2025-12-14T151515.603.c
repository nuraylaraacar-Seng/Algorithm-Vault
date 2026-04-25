/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int matris[2][3];
    int transpoz[3][2];
    
    
    //GİRDİ: kullanıcıdan matris al
    printf("2*3 Matris girin:\n");
    for(int i=0;i<2;i++){
        for(int j=0;j<3;j++){
            printf("[%d][%d]: ",i, j);
            scanf("%d", &matris[i][j]);
        }
    }
    
    //İŞLEM: Transpoz al
    for(int i=0;i<2;i++){
        for(int j=0;j<3;j++){
            transpoz[3][2]=matris[2][3];
        }
    }
    
    //ÇIKTI:Orijinal matris
    printf("\nOrijinal Matris (2x3):\n");
    for(int i=0;i<2;i++){
        for(int j=0;j<3;j++){
        printf("%d ", matris[i][j]);
        }
        printf("\n");
    }
    
    //Trnaspoz matris
    printf("\nOrijinal Matris (3x2):\n");
    for(int i=0;i<3;i++){
        for(int j=0;j<2;j++){
            printf("%d ", transpoz[i][j]);
        }
        printf("\n");
    }
    
    
    
    
    return 0;
}