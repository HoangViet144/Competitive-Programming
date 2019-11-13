#include<iostream>
#include<fstream>
#include <stack>
#include<string>
using namespace std;

// Complete the isBalanced function below.
string isBalanced(string s) {
	stack<char> open_bracket;
	for (int i = 0; i < s.length(); i++)
	{
		if (s[i] == '(' || s[i] == '[' || s[i] == '{')
		{
			open_bracket.push(s[i]);
			continue;
		}
		if (open_bracket.empty())return "NO";
		
		{
			char open = open_bracket.top();

			open_bracket.pop();
			if (open == '(' && s[i] == ')')continue;
			else if (open == '[' && s[i] == ']')continue;
			else if (open == '{' && s[i] == '}')continue;
			else return "NO";
		}
	}
	cout << "hrehe" << endl;
	if (open_bracket.empty())return "YES";
	return "NO";

}

int main()
{
	///ofstream fout(getenv("OUTPUT_PATH"));

	int t;
	cin >> t;
	cin.ignore(numeric_limits<streamsize>::max(), '\n');

	for (int t_itr = 0; t_itr < t; t_itr++) {
		string s;
		getline(cin, s);

		string result = isBalanced(s);

		cout << result << "\n";
	}

	//fout.close();

	return 0;
}
