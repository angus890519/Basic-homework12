/* 計算機概論實務-基本練習作業-作業12*/
/* 製作人：郭柏鋒 */
/* 完成時間：2019/03/21 10:00*/ 
#include <stdio.h> //函示庫
#include <stdlib.h> //函示庫 
int main(void)
{
    int n;  //輸入 
    int w, x, y, z; //定義 
    printf("輸入值： ");
    scanf("%d", &n); //輸入的值 
    

    z = n; //z=n 
    for(y=1; y<=z; y++){ //做幾次 
       for(x=n; x<z; x++) // 空白位置 
          printf(" ");
       for(w=1; w<=n; w++) //星號位置 
          printf("*");
       printf("\n");  //換行 
       n--;
    }
    
    system("pause"); //暫停視窗  
    return 0; //回傳值為0 
}
