#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;
    while(T--) {
        int quiz_set;
        string answers;
        cin >> quiz_set >> answers;

        int score = 0;
        for(int i = 0; i < answers.size(); i++) {
            if((quiz_set == 101 && answers[i] == "A B B A D C C A B D C C A B D"[i]) || (quiz_set == 102 && answers[i] == "A C C A B C D D B B C D D B B"[i])) {
                score++;
            }
        }

        double result = (double) score / 15 * 10;
        cout << fixed << setprecision(2) << result << " "; 
    }
    cout << endl; 
    return 0;
}
/*************************************************************************************************************/

#include <bits/stdc++.h>

using namespace std;

vector<char> quiz_set_101 = {'A', 'B', 'B', 'A', 'D', 'C', 'C', 'A', 'B', 'D', 'C', 'C', 'A', 'B', 'D'};
vector<char> quiz_set_102 = {'A', 'C', 'C', 'A', 'B', 'C', 'D', 'D', 'B', 'B', 'C', 'D', 'D', 'B', 'B'};

double grade_submission(string submission) {
    char quiz_set_id = submission[0];
    vector<char> correct_answers;
    if (quiz_set_id == '1') {
        correct_answers = quiz_set_101;
    } else {
        correct_answers = quiz_set_102;
    }
    int num_correct = 0;
    for (int i = 2; i < submission.length(); i++) {
        if (submission[i] == correct_answers[i-2]) {
            num_correct++;
        }
    }
    double score = (double)num_correct / correct_answers.size() * 10;
    return round(score * 100) / 100; 
}

int main() {
    int t;
    cin >> t; 
    cin.ignore(); 

    for (int i = 0; i < t; i++) {
        string submission;
        getline(cin, submission); 
        double score = grade_submission(submission);
        cout << fixed << setprecision(2) << score << endl; 
    }
}
/*********************************************************************************************************/
#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;
    while(T--) {
        int quiz_set;
        string answers;
        cin >> quiz_set;
        getline(cin, answers);

        int score = 0;
        if(quiz_set == 101) { 
            if(answers == " A B B A D C C A B D C C A B D") { 
                score = 15; 
            }
        }
        else if(quiz_set == 102) { 
            if(answers == " A C C A B C D D B B C D D B B") { 
                score = 15;
            }
        }

        double result = (double) score / 15 * 10;
        cout << fixed << setprecision(2) << result << endl;
    }
}
/*********************************************************************************************************/

#include <bits/stdc++.h>

using namespace std;

const vector<string> ANSWERS_101 = {"A", "B", "B", "A", "D", "C", "C", "A", "B", "D", "C", "C", "A", "B", "D"};
const vector<string> ANSWERS_102 = {"A", "C", "C", "A", "B", "C", "D", "D", "B", "B", "C", "D", "D", "B", "B"};

double grade_submission(const string& quizset_id, const vector<string>& answers) {
    double score = 0;
    const vector<string>* correct_answers_ptr = nullptr;

    if (quizset_id == "101") {
        correct_answers_ptr = &ANSWERS_101;
    } else if (quizset_id == "102") {
        correct_answers_ptr = &ANSWERS_102;
    } else {
        return 0; 
    }

    const vector<string>& correct_answers = *correct_answers_ptr;
    const int num_questions = correct_answers.size();

    if (answers.size() != num_questions) {
        return 0; 
    }

    for (int i = 0; i < num_questions; i++) {
        if (answers[i] == correct_answers[i]) {
            score += 1.0;
        }
    }

    return score / num_questions * 10.0;
}

int main() {
    int num_submissions;
    cin >> num_submissions;

    for (int i = 0; i < num_submissions; i++) {
        string quizset_id;
        vector<string> answers(15);
        for (int j = 0; j < 15; j++) {
            cin >> answers[j];
        }
        cin >> quizset_id;

        double score = grade_submission(quizset_id, answers);
        cout << fixed << setprecision(2) << score << endl;
    }
}


/*********************************************************************************************************/
#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int quizset;
        cin >> quizset;

        int correct_answers[15];
        if (quizset == 101) {
            correct_answers[0] = 1;
            correct_answers[1] = 2;
            correct_answers[2] = 2;
            correct_answers[3] = 1;
            correct_answers[4] = 4;
            correct_answers[5] = 3;
            correct_answers[6] = 3;
            correct_answers[7] = 1;
            correct_answers[8] = 2;
            correct_answers[9] = 4;
            correct_answers[10] = 3;
            correct_answers[11] = 3;
            correct_answers[12] = 1;
            correct_answers[13] = 2;
            correct_answers[14] = 4;
        } else {
            correct_answers[0] = 1;
            correct_answers[1] = 3;
            correct_answers[2] = 3;
            correct_answers[3] = 1;
            correct_answers[4] = 2;
            correct_answers[5] = 3;
            correct_answers[6] = 4;
            correct_answers[7] = 4;
            correct_answers[8] = 2;
            correct_answers[9] = 2;
            correct_answers[10] = 3;
            correct_answers[11] = 4;
            correct_answers[12] = 4;
            correct_answers[13] = 2;
            correct_answers[14] = 2;
        }

        int num_correct = 0;
        for (int i = 0; i < 15; i++) {
            int answer;
            cin >> answer;

            if (answer == correct_answers[i]) {
                num_correct++;
            } else {
                num_correct -= 0.25;
            }
        }

        double score =  num_correct * 10 / 15;
        cout << fixed << setprecision(2) << score << endl;
    }
}
