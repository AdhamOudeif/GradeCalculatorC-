#include <iostream> 
#include <string> 

using namespace std;
class Grade {
public:
	string firstName, lastName;
	char grade;
	double finalExam;
	double midtermExam;
	double quiz1, quiz2;
	double percent;
	double getPercentage();
	void getData();
	void setLetterGrade();
};
void Grade::getData() {
	cout << "Please enter the following information:" << endl;
	cout << "Student's First Name:" << endl;
	cin >> firstName;
	cout << "Student's Last Name:" << endl;
	cin >> lastName;
	cout << "Final Exam Grade: (out of 100)" << endl;
	cin >> finalExam;
	cout << "Midterm Exam Grade: (out of 100)" << endl;
	cin >> midtermExam;
	cout << "Quiz 1 Grade: (out of 10)" << endl;
	cin >> quiz1;
	cout << "Quiz 2 Grade: (out of 10)" << endl;
	cin >> quiz2;
}
double Grade::getPercentage() {
	double finalPercent = 50;
	double MidtermPercent = 30;
	double quizPercent = 10;
	int examScore = 100;
	int quizScore = 10;
	// Calc
	double finalExamScore = (finalExam / examScore) * finalPercent;
	double midtermExamScore = (midtermExam / examScore) * MidtermPercent;
	double quiz1Score = (quiz1 / quizScore) * quizPercent;
	double quiz2Score = (quiz2 / quizScore) * quizPercent;
	double studentGradeTotal = finalExamScore + midtermExamScore + quiz1Score + quiz2Score;
	percent = studentGradeTotal;
	return percent;

	

}
void Grade::setLetterGrade() {
	if (percent >= 90.0)
		grade = 'A';
	else if (percent >= 80.0)
		grade = 'B';
	else if (percent >= 70.0)
		grade = 'C';
	else if (percent >= 60.0)
		grade = 'D';
	else
		grade = 'F';

}
int main() {
	Grade student1;
	student1.getData();
	student1.getPercentage();
	student1.setLetterGrade();
	cout << student1.firstName << " " << student1.lastName << endl;
	cout << "Got a " << student1.percent << "%" << endl;
	cout << "Their letter grade is " << student1.grade << endl;
}