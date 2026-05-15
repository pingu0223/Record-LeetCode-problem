void reverseString(vector<char>& s) {
        int n=s.size()-1;
        int boundary=n/2;
        int i=0;
        for(i=0;i<=boundary;i++){
            char temp=s[i];
            s[i]=s[n-i];
            s[n-i]=temp;
        }
    }
void reverseString(vector<char>& s) {
        int n=s.size();
        int boundary=n/2;
        int i=0;
        for(i=0;i<boundary;i++){
            char temp=s[i];
            s[i]=s[n-1-i];
            s[n-i-1]=temp;
        }
    }
