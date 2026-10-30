#include <iostream>
#include <vector>

using namespace std;


class Solution 
{
	public:
		bool wordBreak(string s, vector<string>& wordDict)
		{
			cout << s << endl;
			for (vector<string>::iterator *it = wordDict.begin(); it != wordDict.end(); ++it)
			{
				cout << it;
			}
			return (true);		
		}
};


int main()
{
	string s = "applepenapple";
	vector<string>  wordDict = {"apple","pen"};
	Solution a;
	a.wordBreak(s, wordDict);
}

