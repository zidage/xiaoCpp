#include <iostream>
#include <string>

using namespace std;

#define SCORE 10
#define MAX 9

struct Questions
{
    string QuestionStem;
    string Options_A;
    string Options_B;
    string Options_C;
    string Options_D;
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
    cout << "1,查看目前题库\n2,在题库中添加题目\n3,编辑题库\n4,开始答题\n5,退出系统\n";
}

void showQuestion(Paper* paper)
{
    if (paper->questionQuantity == 0)
    {
        cout << "试题库中没有题目！" << endl;
        system("pause");
        system("cls");
    }
    else
    {
        for (int i = 0; i < paper->questionQuantity; i++)
        {
            cout << i+1 << "," << paper->questionArray[i].QuestionStem << endl;
            cout << "A:" << paper->questionArray[i].Options_A << "  " << "B:" << paper->questionArray[i].Options_B << endl;
            cout << "C:" << paper->questionArray[i].Options_C << "  " << "D:" << paper->questionArray[i].Options_D << endl;
        }
        system("pause");
        system("cls");
    }
    
}

void addQuestion(Paper* paper)
{
    while (true)
    {
        cout << "请输入题干内容： ";
        cin >> paper->questionArray[paper->questionQuantity].QuestionStem;
        system("cls");
        cout << "请输入选项内容：\n";
        cout << "A: ";
        cin >> paper->questionArray[paper->questionQuantity].Options_A;
        system("cls");
        cout << "B: ";
        cin >> paper->questionArray[paper->questionQuantity].Options_B;
        system("cls");
        cout << "C: ";
        cin >> paper->questionArray[paper->questionQuantity].Options_C;
        system("cls");
        cout << "D: ";
        cin >> paper->questionArray[paper->questionQuantity].Options_D;
        system("cls");
        cout << "请输入正确答案：";
        cin >> paper->questionArray[paper->questionQuantity].Answer;
        system("cls");
        cout << "退出编辑请按1\n继续请按2\n";
        paper->questionQuantity++;
    }
    
}

int answer_the_Question(Paper* paper)
{
    int score = 0;
    if (paper->questionQuantity == 0)
    {
        cout << "试题库中没有题目！\n";
    }
    else
    {
        for (int i = 0; i < paper->questionQuantity; i++)
        {
            cout << i + 1 << "," << paper->questionArray[i].QuestionStem << endl;
            cout << "A:" << paper->questionArray[i].Options_A << "  " << "B:" << paper->questionArray[i].Options_B << endl;
            cout << "C:" << paper->questionArray[i].Options_C << "  " << "D:" << paper->questionArray[i].Options_D << endl;
            string user_answer;
            cout << "请输入答案：";
            cin >> user_answer;
            if (user_answer == paper->questionArray[i].Answer)
            {
                score += 10;
                cout << "回答正确！\n";
                system("pause");
                system("cls");
            }
            else
            {
                cout << "回答错误\n";
                system("pause");
            }
        }
    }
    cout << "考试结束，成绩计算中\n";


}

void proBar()
{

}

int main() {
    struct Paper paper;
    paper.questionQuantity = 0;
    int option = 0;
    while (true)
    {
        welcomeInterface();
        cin >> option;
        switch (option)
        {
        case 1:
            showQuestion(&paper);
            break;
        case 2:
            addQuestion(&paper);
            break;
        case 3:
            answer_the_Question(&paper);
            break;
        case 4:
            break;
        default:
            cout << "请输入正确选项\n";
        }

    }
    



    system("pause");
    return 0;


}