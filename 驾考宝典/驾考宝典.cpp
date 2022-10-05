#include <iostream>
#include <string>

using namespace std;

#define SCORE 10
#define MAX 22




struct Questions
{
    string QuestionStem;
    string Options;
    string Answer;
};

struct Paper
{
    struct Questions questionArray[MAX]; 
    int questionQuantity;
};

void welcomeInterface()
{
    cout << "**************" << endl;
    cout << "欢迎来到考试系统" << endl;
    cout << "**************" << endl;
}


int main() {
    welcomeInterface;
    system("pause");
    return 0;


}