#include <iostream>
#include<stdlib.h>
#include<Windows.h>
#include <cstdlib>
#include <ctime>


//   0 = ��ɫ      8 = ��ɫ
//   1 = ��ɫ      9 = ����ɫ
//   2 = ��ɫ      A = ����ɫ
//   3 = ǳ��ɫ    B = ��ǳ��ɫ
//   4 = ��ɫ      C = ����ɫ
//   5 = ��ɫ      D = ����ɫ
//   6 = ��ɫ      E = ����ɫ
//   7 = ��ɫ      F = ����ɫ
using namespace std;
/***
*����ʥ��������
*�ڿ���̨������ʥ����ͼ��
***/
void PrintTree()
{
    int i, j;
    //��������
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 2);
    cout << "                                    @" << endl;
    cout << "                                   @@@" << endl;
    //ʹ��˫��ѭ����乹������
    for (int m = 0; m <= 1; m++)
        for (i = m; i < m + 3; i++)
        {
            for (j = 0; j < 5 - i + 12; j++)
                cout << "  ";
            for (j = 0; j < 2 * (3 + i) - 3; j++) {
                //����������ɫΪ��ɫ
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
                //����������ɫΪ��ɫ
                SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_GREEN);
                cout << "@@";
            }
            cout << "\n";
        }
    //ʹ��ѭ��������׮
    for (i = 0; i < 6; i++) {
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_RED | FOREGROUND_GREEN);//������׮��ɫΪ��ɫ
        cout << "                                   ++++" << endl;
    }

}
/***
*����ѩ������
*ֱ���ڿ���̨����޹��ɵ�ѩ��
***/
void PrintXueHua()
{
    srand((int)time(0));
    while (1) {
        HANDLE hd;
        COORD pos;
        //pos.X = rand()%75;
        //pos.Y = rand()%18;
        //���ѩ������
        pos.X = rand() % 23;
        pos.Y = rand() % 23;
        hd = GetStdHandle(STD_OUTPUT_HANDLE);
        SetConsoleCursorPosition(hd, pos);
        cout << "*";
        Sleep(700);
        //�Ҳ�ѩ������
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
    //��������ʥ����������
    PrintTree();
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);//��ѩ����ɫ����Ϊ��ɫ
    //��������ѩ������
    PrintXueHua();
    system("pause");
    return 0;
}