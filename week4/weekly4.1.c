#include <stdio.h>
int main() 
{
    //จงเขียนโปรแกรมเพื่อรับข้อมูลความสูงของนักเรียน 10 คน แล้วแสดงผลลัพธ์ความสูงของนักเรียน 10 คน พร้อมหาว่าความสูงเฉลี่ยของนักเรียน 10 คนเป็นเท่าไร (Level 3)
    int x[10] ,n=10,sum = 0;
    scanf("%d %d %d %d %d %d %d %d %d %d",&x[0],&x[1],&x[2],&x[3],&x[4],&x[5],&x[6],&x[7],&x[8],&x[9]);
    for (int i = 0; i < n; i++)
    {
        sum+=x[i];
    }
       printf("%.2f ", sum/(float)n);
    return 0;
}