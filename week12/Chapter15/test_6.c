#include <iostream>
#include <string>
using namespace std;

struct Score
{
    string name;
    int kor;
    int eng;
};

//정올 정답 구역
Score plus_(Score a, Score b)
{
    Score result;

    result.name = "Total";
    result.kor = a.kor + b.kor;
    result.eng = a.eng + b.eng;

    return result;
}
//정올 정답 구역

int main()
{
    Score a, b;
    cin >> a.name >> a.kor >> a.eng;
    cin >> b.name >> b.kor >> b.eng;

    Score result = plus_(a, b);

    cout << a.name << " " << a.kor << " " << a.eng << '\n';
    cout << b.name << " " << b.kor << " " << b.eng << '\n';
    cout << result.name << " " << result.kor << " " << result.eng << '\n';
    return 0;
}