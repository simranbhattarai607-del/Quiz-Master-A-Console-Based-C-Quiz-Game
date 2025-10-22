#include <iostream>
#include <string>
using namespace std;

int main() {
    string questions[] = {
        "1. Who developed the C++ programming language?",
        "2. Which of the following is not a valid C++ data type?",
        "3. Which data type is used to store true/false values?",
        "4. What is the correct syntax to output in C++?",
        "5. Which of the following is not a programming language?"
    };

    string options[][4] = {
        {"A. Bjarne Stroustrup", "B. Dennis Ritchie", "C. James Gosling", "D. Guido van Rossum"},
        {"A. int", "B. float", "C. real", "D. char"},
        {"A. int", "B. char", "C. bool", "D. double"},
        {"A. cout <<", "B. printf()", "C. Console.WriteLine()", "D. echo"},
        {"A. Python", "B. Java", "C. HTML", "D. C++"}
    };

    char answers[] = {'A', 'C', 'C', 'A', 'C'};
    int totalQuestions = 5;
    char playAgain;

    do {
        int score = 0;
        cout << "\n==============================" << endl;
        cout << "          QUIZ GAME           " << endl;
        cout << "==============================" << endl;

        for (int i = 0; i < totalQuestions; i++) {
            cout << endl << questions[i] << endl;
            for (int j = 0; j < 4; j++) {
                cout << options[i][j] << endl;
            }

            char userAnswer;
            do {
                cout << "Enter your answer (A/B/C/D): ";
                cin >> userAnswer;
                userAnswer = toupper(userAnswer);
            } while (userAnswer != 'A' && userAnswer != 'B' && userAnswer != 'C' && userAnswer != 'D');

            if (userAnswer == answers[i]) {
                cout << "? Correct!" << endl;
                score++;
            } else {
                cout << "? Wrong! The correct answer is " << answers[i] << endl;
            }

            cout << "---------------------------------" << endl;
        }

        cout << "\n==============================" << endl;
        cout << "          QUIZ RESULT         " << endl;
        cout << "==============================" << endl;
        cout << "Your Score: " << score << " out of " << totalQuestions << endl;

        double percentage = (score * 100.0) / totalQuestions;
        cout << "Percentage: " << percentage << "%" << endl;

        if (score == totalQuestions) {
            cout << "?? Excellent! Full marks!" << endl;
        } else if (score >= 3) {
            cout << "?? Good job! Keep practicing." << endl;
        } else {
            cout << "?? Better luck next time." << endl;
        }

        cout << "\nDo you want to play again? (Y/N): ";
        cin >> playAgain;
        playAgain = toupper(playAgain);

    } while (playAgain == 'Y');

    cout << "\nThanks for playing! ??" << endl;
    return 0;
}
