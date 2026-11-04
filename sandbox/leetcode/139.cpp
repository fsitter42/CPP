#include <iostream>
#include <vector>

using namespace std;


class Solution 
{
	public:
		bool wordBreak(string s, vector<string>& wordDict)
		{
			bool ret = true;
			string cs = s;
			int i = 0;
			while (cs[i])
			{	
				for (vector<string>::iterator it = wordDict.begin(); it != wordDict.end(); ++it)
				{
					string ss = *it;
					for (int j = 0; ss[j] != '\0'; j++)
					{
						if (cs[i] == ss[j])
						{
							cs[i] = '*';
							i++;
						}
					}
				}
			}
			cout << cs << endl;
			return (ret);
		}
};


int main()
{
	string s = "applepenapple";
	vector<string>  wordDict = {"apple","pen"};
	Solution a;
	bool b = a.wordBreak(s, wordDict);
	if (b == true)
		cout << "true" << endl;
	else
		cout << "false" << endl;
	vector<string> ordDict = {"cats","dog","sand","and","cat"};
	string ss = "catsandog";
	b = a.wordBreak(ss, ordDict);
	if (b == true)
		cout << "true" << endl;
	else
		cout << "false" << endl;
	
}

