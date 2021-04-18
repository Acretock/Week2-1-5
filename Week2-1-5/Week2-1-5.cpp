#include <vector>
#include <string>
#include <iostream>

using namespace std;

void MoveStrings(vector<string>& sourse, vector<string>& destination) {
	for (auto t : sourse)
		destination.push_back(t);
	sourse.clear();
}

int main()
{
	vector <string> a = {"a","b","c"};
	vector <string> b = { "z" };
	MoveStrings(a, b);
	for (auto t:a)
		cout << t;
	cout << endl;
	for (auto t : b)
		cout << t;
	cout << endl;
}