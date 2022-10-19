#include<bits/stdc++.h>
#define int long long
using namespace std;
struct TrieNode{
    TrieNode *data[26];
    bool isEnd=false;
    TrieNode()
    {
        for(int i=0;i<26;i++)
            data[i]=NULL;
    }
};
//checking substring in trieNode root
bool contains(string s,TrieNode * root)
{
	for(auto a:s)
	{
		if(root->data[a-'a'])
			root=root->data[a-'a'];
		else
		return false;
	}
	return root->isEnd;
}
//if substrings are present in the input or not
bool check(int i,string s,int cnt,TrieNode * root)
{
	if(i==s.size())
	return cnt>1;
	
	for(int k=1;k<=s.size()-i;k++)
	{
		if(contains(s.substr(i,k),root) && check(i+k,s,cnt+1,root))
		return true;	
	}	
	
	return false;
}
bool comp(string &a,string &b)
{
	return a.size()>b.size();
}
void solve(vector<string>&v)
{
	TrieNode * root=new TrieNode();
	for(auto a:v)
	{
		TrieNode * temp=root;
		for(auto x:a)
		{
			if(temp->data[x-'a'])
			{
				temp=temp->data[x-'a'];
			}
			else
			{
				temp->data[x-'a']=new TrieNode();
				temp=temp->data[x-'a'];
			}
		}
		temp->isEnd=true;
	}
	
	vector<string> ans;
	
	for(auto a:v)
	{
		if(check(0,a,0,root))
		ans.push_back(a);
	}
	
	sort(ans.begin(),ans.end(),comp);
    cout << "Your answer" << endl;
    cout<<ans[0]<<endl<<ans[1]<<endl;
		
	return;	
}

int32_t main()
{
    //for taking fast input output
	ios_base::sync_with_stdio(false);
	int n;
    cout << "input length of string" << endl;
    cin>>n;
	cout << "input Whole string" << endl;
	string s;
	vector<string> v;
//we are taking all inputs here
	while(n--)
	{
		cin>>s;
		v.push_back(s); 	
	}
	solve(v);
	return 0;
}