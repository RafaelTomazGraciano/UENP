/*percorrendo matriz*/

#include <stdio.h>

int main(){
    int mat[2][2] = {{1,2}, {3,4}};
    /*declara um ponteiro que recebe o endereco da matriz*/
    int *p = &mat[0][0];
    for(int i = 0; i < 4; i++)
        printf("%d ", *(p+i));
    return 0;
}