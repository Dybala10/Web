#include<stdio.h>
int main(void)
{
    int nums, g, s, b; //����nums��ʾˮ�ɻ�����g, s, b�ֱ��Ǹ�λʮλ��λ��
    for (nums = 100; nums <= 999; nums++)
    {
        b = nums / 100;
        s = (nums - b*100) / 10;
        g = nums - b*100 - s*10;
        if (nums == g*g*g + s*s*s + b*b*b)
            printf("%d��ˮ�ɻ���\n", nums);
    }
    return 0;

}
