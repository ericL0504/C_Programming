#include <iostream>
using namespace std;

struct Body
{
    int height;
    double weight;
};

Body makeStudent(Body father, Body mother)
{
    //정올 정답 구역
    Body student;

    student.height = (father.height + mother.height) / 2 + 5;
    student.weight = (father.weight + mother.weight) / 2 -4.5;

    return student;
    //정올 정답 구역
}

int main()
{
    Body father, mother;
    cin >> father.height >> father.weight;
    cin >> mother.height >> mother.weight;
    
    Body student = makeStudent(father, mother);
    
    cout << "height : " << student.height << "cm" << '\n';
    cout << "weight : ";
    cout.setf(ios::fixed);
    cout.precision(1);
    cout << student.weight << "kg" << '\n';
    
    return 0;
}