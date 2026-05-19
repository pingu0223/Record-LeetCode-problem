class Solution {
public:
    int* get_next(string t){
        int n=t.size();
        if(n==0) return nullptr;
        int* next=new int[n];
        next[0]=-1;if(n==1) return next;
        next[1]=0;
        int i=1,j=0;
        while(i<n-1){
            if(j==-1||t[i]==t[j]){
                i++;j++;
                next[i]=j;
            }
            else{
                j=next[j];
            }
        }
        return next;
    }
    int strStr(string haystack, string needle) {
        int i,j;i=0;j=0;
        int* next=get_next(needle);
        while(i<(int)haystack.size()&&j<(int)needle.size()){
            cout<<"Begin"<<endl;
            if(j==-1||haystack[i]==needle[j]){
                i++;
                j++;
                cout<<"Match"<<endl;
            }
            else{
                cout<<"j"<<j<<" next[j]"<<next[j]<<"i:"<<i<<endl;
                j=next[j];
            }
        }
        if(j==needle.size())return i-needle.size();
        else return -1;
    }
};
