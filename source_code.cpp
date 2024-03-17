
#include<iostream>
#include<fstream>
using namespace std;

void input() {
	char name[20], status[5], disease[30];
	int age, limit;

	ofstream file("Patients.txt");
	cout << "Input number of patients you want to add (1-20): ";
	cin >> limit;
	file << "Name Age Status Disease" << endl;
	for (int a = 0; a < limit; a++) {
		cout << "Input Name, Age, Status, Disease (separated by space): ";
		cin >> name >> age >> status >> disease;

		file << "\n" << name << " " << age << " " << status << " " << disease;
	}
	cout << endl;
	file.close();
}

void in_out_patient() {
	ifstream file("Patients.txt");
	ofstream in("In.txt");
	ofstream out("Out.txt");
	in << "Name Age Status Disease" << endl;
	out << "Name Age Status Disease" << endl;
	if (!file.is_open()) {
		cout << "File is Not Founded!...." << endl;
	}
	else {
		char name[20], status[5], disease[30], extra[20];
		int age;

		for (int a = 0; file.eof() == 0; a++) {
			if (a == 0) {
				file >> extra >> extra >> extra >> extra;
			}
			else {
				file >> name >> age >> status >> disease;
				if (status[0] == 'I' || status[0] == 'i') {
					if (status[1] == 'N' || status[1] == 'n') {
						in << name << " " << age << " " << status << " " << disease << endl;
					}
				}
				else {
					out << name << " " << age << " " << status << " " << disease << endl;
				}
			}
		}
		file.close();
		in.close();
		out.close();
	}
	cout << endl;
}

int find_disease(char find[]) {
	int counting = 0;
	ifstream file("Patients.txt");
	if (!file.is_open()) {
		cout << "File is Not Founded!...." << endl;
	}
	else {
		char disease[30], extra[20];
		int in_size = 0;
		cout << "Input disease name: ";
		cin >> find;
		for (int a = 0; find[a] != '\0'; a++) {
			in_size++;
		}
		for (int a = 0; !file.eof(); a++) {
			if (a == 0) {
				file >> extra >> extra >> extra >> extra;
			}
			else {
				file >> extra >> extra >> extra >> disease;

				int temp = 0;
				for (int b = 0; b < in_size; b++) {
					if (find[b] == disease[b]) {
						temp++;
					}
				}
				if (temp == in_size) {
					counting++;
				}
			}
		}
		file.close();
	}
	return counting;

}

int main()
{
	int menu = 0;
	while (menu != 4) {
		cout << "1. Input Patients Data." << endl;
		cout << "2. Separate Records of all In and Out patients." << endl;
		cout << "3. Find Count of Input Disease." << endl;
		cout << "4. Exit." << endl;
		cout << "Enter the No. : ";
		cin >> menu;

		if (menu == 1) {
			cout << endl;
			input();
		}
		else if (menu == 2) {
			cout << endl;
			in_out_patient();
		}
		else if (menu == 3) {
			cout << endl;
			char find[30];
			int count = find_disease(find);
			if (count > 0) {
				cout << "Total " << find << " patients are: " << count << endl << endl;
			}
			else {
				cout << "Sorry No Record Found." << endl << endl;
			}
		}
	}
	return 0;
}
