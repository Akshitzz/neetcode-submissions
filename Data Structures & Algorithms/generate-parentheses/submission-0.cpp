class Solution {
public:
    vector<string>ans;
    void solve(int totalopen,int totalclosed,int n,string &st){
        if(totalclosed == totalopen && totalclosed ==n){
            ans.push_back(st);
            return;
        }
        if(totalopen<n){
            st+='(';
        solve(totalopen+1,totalclosed,n,st);
        st.pop_back();
        }

        if(totalclosed<totalopen){
            st+=')';
        solve(totalopen,totalclosed+1,n,st);
        st.pop_back();
        }
    }
    vector<string> generateParenthesis(int n) {
        string st;

        solve(0,0,n,st);
        return ans;
    }
};
