/* �p������׹��-�򥻽m�ߧ@�~-�@�~12*/
/* �s�@�H�G���f�W */
/* �����ɶ��G2019/03/21 10:00*/ 
#include <stdio.h> //��ܮw
#include <stdlib.h> //��ܮw 
int main(void)
{
    int n;  //��J 
    int w, x, y, z; //�w�q 
    printf("��J�ȡG ");
    scanf("%d", &n); //��J���� 
    

    z = n; //z=n 
    for(y=1; y<=z; y++){ //���X�� 
       for(x=n; x<z; x++) // �ťզ�m 
          printf(" ");
       for(w=1; w<=n; w++) //�P����m 
          printf("*");
       printf("\n");  //���� 
       n--;
    }
    
    system("pause"); //�Ȱ�����  
    return 0; //�^�ǭȬ�0 
}
