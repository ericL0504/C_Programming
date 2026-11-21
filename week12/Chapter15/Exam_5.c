#include <iostream>
using namespace std;

struct Student
{
    string name;
    int score[3];
    int total;   // 총점
};

//정올 정답 구역
void input(Student p[], int n)
{
    for(int i = 0; i < n; i++)
    {
        cin >> p[i].name;

        p[i].total = 0;

        for(int j = 0; j < 3; j++)
        {
            cin >> p[i].score[j];
            p[i].total += p[i].score[j];
        }
    }
}

void sort(Student p[], int n)
{
    Student temp;

    for(int i = 0; i < n - 1; i++)
    {
        for(int j = 0; j < n - 1 - i; j++)
        {
            if(p[j].total < p[j + 1].total)
            {
                temp = p[j];
                p[j] = p[j + 1];
                p[j + 1] = temp;
            }
        }
    }
}

void output(Student p[], int n)
{
    for(int i = 0; i < n; i++)
    {
        cout << p[i].name << " ";

        for(int j = 0; j < 3; j++)
        {
            cout << p[i].score[j] << " ";
        }

        cout << p[i].total << '\n';
    }
}
//정올 정답 구역