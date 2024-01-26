#include <iostream>
#include <string>
using namespace std;
 
int Guess;
int Total;
 

class Question {
private:
    string Question_Text;
    string Answer_1;
    string Answer_2;
    string Answer_3;
    string Answer_4;
    int Correct_Answer;
    int Question_Score;
 
public:
 
    void setValues(string, string,
                   string, string,
                 int,int);

    void askQuestion();
};
 
int main()
{
 
    Question q1;
    Question q2;
    Question q3;
    Question q4;
    Question q5;
    Question q6;
    Question q7;
    Question q8;
    Question q9;
    Question q10;
 
    q1.setValues("What is the nationality of Cristiano Ronaldo?", "1. Portugal", "2. Brazil" , 
    "3. Spain",1,10);

    q2.setValues("Choose a Premier League club: ", "1. Real Madrid", "2. AC Milan", 
    "3. Manchester United",3,10);

    q3.setValues("Which country won the FIFA World Cup in 2018?", "1. France", "2. Germany",
     "3. Spain",1, 10);

    q4.setValues("Which player has the most appearances in the history of the UEFA Champions League?",
    "1. Lionel Messi", "2. Cristiano Ronaldo", "3. Neymar Jr",2,10);

    q5.setValues("Which country won the FIFA World Cup in 2022?","1. France", "2. the Netherlands",
     "3.Argentine", 3, 10);

    q6.setValues("Which country came second in 2014 World Cup?","1. Germany","2. Argentine","3. Brazil",2,10);

    q7.setValues("Which football club have won the UEFA Champions League the most?","1. Real Madrid",
    "2. Bayern Munich","3. Barcelona",1,10);

    q8.setValues("Who holds the record for the most assists in a single Premier League season?",
    "1. Backhem","2. Owen","3. Thierry Henry",3,10);

    q9.setValues("Which club has won the most domestic league titles in European football history?",
    "1. Manchester United","2. Linfield FC", "3. Real Madrid",2,10);

    q10.setValues("Who is know for the 'Hand of God'","1. Maradona","2. Pele","3. Messi",1,10);
 
    q1.askQuestion();
    q2.askQuestion();
    q3.askQuestion();
    q4.askQuestion();
    q5.askQuestion();
    q6.askQuestion();
    q7.askQuestion();
    q8.askQuestion();
    q9.askQuestion();
    q10.askQuestion();
 
    cout << "Total Score = " << Total
         << "out of 100" << endl;
 
    if (Total >= 70) {
        cout << "Congrats you passed the"
             << " quiz!" << endl;
    }
 
    else {
        cout << "Alas! You failed the quiz."
             << endl;
        cout << "Better luck next time."
             << endl;
    }
    return 0;
}
 
void Question::setValues(
    string q, string a1,
    string a2, string a3, int ca, int pa)
{
    Question_Text = q;
    Answer_1 = a1;
    Answer_2 = a2;
    Answer_3 = a3;
    Correct_Answer = ca;
    Question_Score = pa;
}
 
void Question::askQuestion()
{
    cout << endl;
 
    cout << Question_Text << endl;
    cout << "" << Answer_1 << endl;
    cout << "" << Answer_2 << endl;
    cout << "" << Answer_3 << endl;
    cout << endl;
 
    cout << "What is your answer?(in number)"
         << endl;
    cin >> Guess;
 
    if (Guess == Correct_Answer) {
        cout << endl;
        cout << "Correct !" << endl;
 
        Total = Total + Question_Score;
        cout << endl;
    }
 
    else {
        cout << endl;
        cout << "Wrong !" << endl;
        cout << "Correct answer = "
             << Correct_Answer
             << "." << endl;
        cout << endl;
    }
}