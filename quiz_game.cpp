#include <iostream>
using namespace std;

static int count;
class Quiz
{
protected:
    void answer1();
    void answer2();
    void answer3();
    void answer4();
    void answer5();
    void answer6();
    void answer7();
    void answer8();
    void answer9();
    void answer10();

public:
    void question1();
    void question2();
    void question3();
    void question4();
    void question5();
    void question6();
    void question7();
    void question8();
    void question9();
    void question10();
    void total_percentage();
};
void Quiz ::question1()
{
    cout << "Q1. What is the Full form of OOP ?" << endl;
    cout << "1.Objective Programming" << endl;
    cout << "2.Object Oriented Programming" << endl;
    cout << "3.Object based Programming" << endl;
    cout << "4.None of these" << endl;
    answer1();
}

void Quiz ::answer1()
{
    int ans1;
    cout << "Enter Your Answer (1,2,3 or 4): " << endl;
    cin >> ans1;
    if (ans1 == 2)
    {
        total_percentage();
    }
    else
    {
        cout << "Incorrect Answer !" << endl;
    }
}

void Quiz ::question2()
{
    cout << "Q2. Which of the following is/are Asymptotic Notations ?" << endl;
    cout << "1.Big O O()" << endl;
    cout << "2.Big Omega" << endl;
    cout << "3.Big Theta" << endl;
    cout << "4.All of the above" << endl;
    answer2();
}

void Quiz ::answer2()
{
    int ans2;
    cout << "Enter Your Answer (1,2,3 or 4): " << endl;
    cin >> ans2;
    if (ans2 == 4)
    {
        total_percentage();
    }
    else
    {
        cout << "Incorrect Answer !" << endl;
    }
}

void Quiz ::question3()
{
    cout << "Q3. What are the types of Polymorphism ?" << endl;
    cout << "1.Compile time Polymorphism" << endl;
    cout << "2.Run time Polymorphism" << endl;
    cout << "3.Both 1 and 2" << endl;
    cout << "4.None of the above" << endl;
    answer3();
}

void Quiz ::answer3()
{
    int ans3;
    cout << "Enter Your Answer (1,2,3 or 4): " << endl;
    cin >> ans3;
    if (ans3 == 3)
    {
        total_percentage();
    }
    else
    {
        cout << "Incorrect Answer !" << endl;
    }
}

void Quiz ::question4()
{
    cout << "Q4. How many types of Inheritance are there ?" << endl;
    cout << "1.Multi-Level" << endl;
    cout << "2.Multiple" << endl;
    cout << "3.Single" << endl;
    cout << "4.Hierarchial" << endl;
    cout << "5.Hybrid (Combination of two or more) " << endl;
    cout << "6.All of the above " << endl;
    answer4();
}

void Quiz ::answer4()
{
    int ans4;
    cout << "Enter Your Answer (1,2,3 or 4): " << endl;
    cin >> ans4;
    if (ans4 == 6)
    {
        total_percentage();
    }
    else
    {
        cout << "Incorrect Answer !" << endl;
    }
}

void Quiz ::question5()
{
    cout << "Q5.The method with the same name or different return type and difference in the parameters either in number or type is known as ?" << endl;
    cout << "1.Function overloading" << endl;
    cout << "2.Compile Time Overloading" << endl;
    cout << "3.Function overriding" << endl;
    cout << "4.None of the Above" << endl;
    answer5();
}

void Quiz ::answer5()
{
    int ans5;
    cout << "Enter Your Answer (1,2,3 or 4): " << endl;
    cin >> ans5;
    if (ans5 == 1)
    {
        total_percentage();
    }
    else
    {
        cout << "Incorrect Answer !" << endl;
    }
}
void Quiz::question6()
{
    cout << "Q6.What is Inheritance ?" << endl;
    cout << "1.process of acquiring the properties of another object" << endl;
    cout << "2.One name multiple form" << endl;
    cout << "3.Both 1 and 2" << endl;
    cout << "4.None of the Above" << endl;
    answer6();
}

void Quiz::answer6()
{
    int ans6;
    cin >> ans6;
    if (ans6 == 1)
    {
        total_percentage();
    }
    else
    {
        cout << "Incorrect Answer !" << endl;
    }
}

void Quiz::question7()
{
    cout << "Q7.What is Polymorphism ?" << endl;
    cout << "1.One name and one form only" << endl;
    cout << "2.One name multiple form" << endl;
    cout << "3.Both 1 and 2" << endl;
    cout << "4.None of the Above" << endl;
    answer7();
}
void Quiz::answer7()
{
    int ans7;
    cin >> ans7;
    if (ans7 == 2)
    {
        total_percentage();
    }
    else
    {
        cout << "Incorrect Answer !" << endl;
    }
}

void Quiz::question8()
{
    cout << "Q8.Which access modifier allows to inherit private data ?" << endl;
    cout << "1.Private" << endl;
    cout << "2.Public" << endl;
    cout << "3.Protected" << endl;
    cout << "4.None of the Above" << endl;
    answer8();
}
void Quiz::answer8()
{
    int ans8;
    cin >> ans8;
    if (ans8 == 3)
    {
        total_percentage();
    }
    else
    {
        cout << "Incorrect Answer !" << endl;
    }
}

void Quiz::question9()
{
    cout << "Q9.What is Base class ?" << endl;
    cout << "1.A base class is a class from which other classes are derived." << endl;
    cout << "2.A class which does nothing" << endl;
    cout << "3.Both 1 and 2" << endl;
    cout << "4.None of the Above" << endl;
    answer9();
}
void Quiz::answer9()
{
    int ans9;
    cin >> ans9;
    if (ans9 == 1)
    {
        total_percentage();
    }
    else
    {
        cout << "Incorrect Answer !" << endl;
    }
}

void Quiz::question10()
{
    cout << "Q10.What is Derived class ?" << endl;
    cout << "1.A class that is created from an existing class" << endl;
    cout << "2.A class which does nothing" << endl;
    cout << "3.Both 1 and 2" << endl;
    cout << "4.None of the Above" << endl;
    answer10();
}
void Quiz::answer10()
{
    int ans10;
    cin >> ans10;
    if (ans10 == 1)
    {
        total_percentage();
    }
    else
    {
        cout << "Incorrect Answer !" << endl;
    }
}

void Quiz::total_percentage()
{
    float attempted = 10;
    cout << "Correct Answer!" << endl;
    count++;
    cout << "Points Obtained: " << count << endl;
    cout << "Percentage: " << float(count / attempted) * 100 << " %" << endl;
}
int main()
{
    Quiz q1;
    int reply;
    cout << "Welcome to My Quiz Game :) " << endl;
    cout << "Do you want to play my Quiz (1-yes/0-no)?" << endl;
    cin >> reply;
    if (reply == 1)
    {
        cout << "There are 10 Questions in the quiz" << endl;
        q1.question1();
        q1.question2();
        q1.question3();
        q1.question4();
        q1.question5();
        q1.question6();
        q1.question7();
        q1.question8();
        q1.question9();
        q1.question10();
        cout << "Thank you for Playing my Quiz :)" << endl;
    }
    else
    {
        cout << "See you next time :)" << endl;
    }
    return 0;
}