class Solution {
public:
    string convertToString(vector<char>a, int size)
{
    int i;
    string s = "";
    for (i = 0; i < size; i++) {
        s = s + a[i];
    }
    return s;
}
    string reverseParentheses(string s) {
        stack<char>A;
        vector<char>Q,result;
        for(auto p:s)
        {
            if(p==')')
            {
                while(A.top()!='(')
                {
                    Q.push_back(A.top());
                    A.pop();
                }
                A.pop();
                for(auto z:Q)
                {
                    A.push(z);
                }
                Q.clear();
            }
            else
            {
                A.push(p);
            }
        }
        while(!A.empty())
        {
            result.push_back(A.top());
            A.pop();
        }
        string result2=convertToString(result, result.size());
        reverse(result2.begin(),result2.end());
        return result2;
    }
};
