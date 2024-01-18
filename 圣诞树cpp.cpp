#include <iostream>
#include<stdlib.h>
#include<Windows.h>
#include <cstdlib>
#include <ctime>


//   0 = 黑色      8 = 灰色
//   1 = 蓝色      9 = 淡蓝色
//   2 = 绿色      A = 淡绿色
//   3 = 浅绿色    B = 淡浅绿色
//   4 = 红色      C = 淡红色
//   5 = 紫色      D = 淡紫色
//   6 = 黄色      E = 淡黄色
//   7 = 白色      F = 亮白色
using namespace std;
/***
*生成圣诞树函数
*在控制台输出多彩圣诞树图案
***/
void PrintTree()
{
    int i, j;
    //构建树顶
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 2);
    cout << "                                    @" << endl;
    cout << "                                   @@@" << endl;
    //使用双重循环语句构建树干
    for (int m = 0; m <= 1; m++)
        for (i = m; i < m + 3; i++)
        {
            for (j = 0; j < 5 - i + 12; j++)
                cout << "  ";
            for (j = 0; j < 2 * (3 + i) - 3; j++) {
                //更改树干颜色为绿色
                SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_GREEN);
                cout << "@@";
            }
            cout << "\n";
        }

    for (int n = 2; n <= 3; n++)
        for (i = n; i < n * 3; i++)
        {
            for (j = 0; j < 5 - i + 12; j++)
                cout << "  ";
            for (j = 0; j < 2 * (3 + i) - 3; j++) {
                //更改树干颜色为绿色
                SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_GREEN);
                cout << "@@";
            }
            cout << "\n";
        }
    //使用循环构建树桩
    for (i = 0; i < 6; i++) {
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_RED | FOREGROUND_GREEN);//更改树桩颜色为黄色
        cout << "                                   ++++" << endl;
    }

}
/***
*生成雪花函数
*直接在控制台输出无规律的雪花
***/
void PrintXueHua()
{
    srand((int)time(0));
    while (1) {
        HANDLE hd;
        COORD pos;
        //pos.X = rand()%75;
        //pos.Y = rand()%18;
        //左侧雪花生成
        pos.X = rand() % 23;
        pos.Y = rand() % 23;
        hd = GetStdHandle(STD_OUTPUT_HANDLE);
        SetConsoleCursorPosition(hd, pos);
        cout << "*";
        Sleep(700);
        //右侧雪花生成
        pos.X = 42 + (rand() % 30);
        pos.Y = rand() % 23;
        hd = GetStdHandle(STD_OUTPUT_HANDLE);
        SetConsoleCursorPosition(hd, pos);
        cout << "*";
        Sleep(700);
    }
}

int main()
{
    system("color c");
    //调用生成圣诞树树函数
    PrintTree();
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);//将雪花颜色更改为白色
    //调用生成雪花函数
    PrintXueHua();
    system("pause");
    return 0;
}