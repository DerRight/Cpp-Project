#include <iostream>
#include <vector>
using namespace std;

struct Course {
	double CreditsPoints; // ���Z�n�I
	int Credits; // �Ǥ���
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
	int GPA = 0; // �C�Ǵ��������Z�n�I
	int num = 0; // �`�@���X�����
	vector<Course> courses;

	cout << "�п�J�`�@���X�����:" << endl;
	cin >> num;

	// �N���Z�@�@��J���Ʒ�
	for (int i = 0; i < num; i++) {
		Course course;
		cout << "�п�J���Z�n�I(CreditsPoints)�M�Ǥ���(Credits):" << endl;
		cin >> course.CreditsPoints >> course.Credits;
		courses.push_back(course);
	}

	double CGPA = calculateCGPA(courses);
	cout << "CGPA:" << CGPA << endl;
	return 0;
}