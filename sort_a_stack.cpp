#include<bits/stdc++.h>
using namespace std;

class SortedStack{
public:
	stack<int> s;
	void sort();
};

void printStack(stack<int> s)
{
    while (!s.empty())
    {
        printf("%d ", s.top());
       	s.pop();
    }
    printf("\n");
}

int main()
{
int t;
cin>>t;
while(t--)
{
	SortedStack *ss = new SortedStack();
	int n;
	cin>>n;
	for(int i=0;i<n;i++)
	{
	int k;
	cin>>k;
	ss->s.push(k);
	}
	ss->sort();
	printStack(ss->s);
}
}// } Driver Code Ends


/*The structure of the class is
class SortedStack{
public:
	stack<int> s;
	void sort();
};
*/

/* The below method sorts the stack s 
you are required to complete the below method */
void SortedStack :: sort()
{
    stack<int> f;
    while(!s.empty()) {
        stack<int> ss;
        int tmp = s.top();
        s.pop();
        while(!s.empty()) {
            int t = s.top();
            s.pop();
            if(tmp < t) ss.push(t);
            else {
                ss.push(tmp);
                tmp = t;
            }
        }
        f.push(tmp);
        s = ss;
    }
    s = f;
   //Your code here
}
