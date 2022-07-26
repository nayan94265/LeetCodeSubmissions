class Solution {
public:
    int largestInteger(int n) {
        
        vector<int>a;
        vector<int>b;
        string res;
        string str=to_string(n);
        for(int i=0;i<str.length();i++){
            int v=int(str[i]-48);
            if(v%2==0)
                a.push_back(v);
            else
                b.push_back(v);
        }
        sort(a.begin(),a.end());
         sort(b.begin(),b.end());
        int a_i=a.size()-1;
        int b_i=b.size()-1;
        int i=0;
        while(i<str.length()){
              int v=int(str[i]-48);
              if(v%2==0){
                  res+=a[a_i]+48;
                  a_i--;
              }
            else{
                 res+=b[b_i]+48;
                b_i--;
            }
            i++;
               
            
        }
       int out=stoi(res);
        return out;
        
        
    }
};