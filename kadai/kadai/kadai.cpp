#include <stdio.h>
//【問題】
//メモリ確保を使用し、
//1000個の配列を確保して、
//その配列に0～999を設定するプログラムを作成してください。
//newとdeleteで配列を確保する処理を、
//クラスにしてデストラクタで自動でdeleteが呼ばれるようにしてください。


class Hoge
{
public:
   
    Hoge(int a)
    {
        hoge = new int[a];
    };

    ~Hoge()
    {
        delete[] hoge;
        hoge = nullptr;
    };
    void Set_Hoge(int a, int b)
    {
        if (0 <= a && a < hogeSize)
        {
            hoge[a] = b;
        }
        else
        {
            printf("配列外参照です\n");
        }
    };

    int Get_Hoge(int a)
    {
        if (0 <= a && a < hogeSize)
        {
            return hoge[a];
        }
        else
        {
            printf("配列外参照です\n");
            return 0;
        }
    };

    private:
    int* hoge = nullptr;
    int hogeSize;
};
int main()
{
    Hoge hoge(1000);

    for (int i = 0; i < 1000; ++i)
    {
        hoge.Set_Hoge(i, i);

        printf("num = %d\n", hoge.Get_Hoge(i));
    }
}