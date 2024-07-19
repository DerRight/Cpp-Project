#include <iostream>
#include <vector>
using namespace std;

struct Course {
	double CreditsPoints; // 成績積點
	int Credits; // 學分數
};

double calculateCGPA(vector<Course>& courses) {
	double totalCreditsPoints = 0;
	int totalCredits = 0;

	for (const auto& course : courses) {
		totalCreditsPoints += course.CreditsPoints * course.Credits;
		totalCredits += course.Credits;
	}

	return totalCreditsPoints / totalCredits;
}

int main() {
	int GPA = 0; // 每學期平均成績積點
	int num = 0; // 總共有幾筆資料
	vector<Course> courses;

	cout << "請輸入總共有幾筆資料:" << endl;
	cin >> num;

	// 將成績一一輸入到資料當中
	for (int i = 0; i < num; i++) {
		Course course;
		cout << "請輸入成績積點(CreditsPoints)和學分數(Credits):" << endl;
		cin >> course.CreditsPoints >> course.Credits;
		courses.push_back(course);
	}

	double CGPA = calculateCGPA(courses);
	cout << "CGPA:" << CGPA << endl;
	return 0;
}