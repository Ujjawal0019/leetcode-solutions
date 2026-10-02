void fun(string tmp,vector<string>&v1,int n,int a,int b){

    if(a>n || b>n || b>a) return ;
    if(tmp.size()==2*n){
        v1.push_back(tmp);
        return ;
    }

    fun(tmp+"(",v1,n,a+1,b);
    fun(tmp+")",v1,n,a,b+1);
}


class Solution {
public:
    vector<string> generateParenthesis(int n) {
        vector<string>v1;
        fun("",v1,n,0,0);
        return v1;
    }
};