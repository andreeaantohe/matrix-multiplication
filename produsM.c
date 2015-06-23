#include<stdio.h>

int main()
{
    // citire 
    int a[20][20], b[20][20], rez[20][20];
    
    int n1, m1, n2, m2;
    int i, j, k;
    
    scanf("%d%d", &n1, &m1);	//citim dimensiunile primei metrice
    for(i = 0;i < n1;i ++)
        for(j = 0;j < m1;j ++)
            scanf("%d", &a[i][j]); //citim elementele primei matrice
    
    scanf("%d%d", &n2, &m2);	//citim dimensiunile celei de-a 2-a matrice
    for(i = 0;i < n2;i ++)
        for(j = 0;j < m2;j ++)
            scanf("%d", &b[i][j]); //citim elementele celei de-a doua matrice
            
    // verificare dimensiune
    if(m1 != n2) {
        printf("matricele nu pot fi inmultite!");
        return 0;
    }
    
    // inmultirea matricilor
    for(i = 0;i < n1;i ++)
        for(j = 0; j < m1;j ++)
            for(k = 0; k < m2; k ++)
                rez[i][j] += a[i][j] * b[j][k];
                
    // afisare matrice rezultat
    printf("Matricea rezultat este: \n");
    for(i = 0;i < n1;i ++)
    {
        for(j = 0;j <= m2;j ++)
            printf("%d ", rez[i][j]);
        printf("\n");
    }
    
}
