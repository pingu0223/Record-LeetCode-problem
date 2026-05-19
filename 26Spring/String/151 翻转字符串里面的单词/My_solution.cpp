class Solution {
public:
    string reverseWords(string s) {
        vector<string>list;//记录单词
        string t="";
        int i=0;
        for(i=0;i<s.size();i++){
            if(s[i]==' '){//处理空格
                if(t.size()!=0)list.push_back(t);
                i++;
                while(s[i]==' '&&i<s.size()){
                    i++;
                }
                if(i<s.size()){t="";t+=s[i];}
                else{
                    t="";
                }
            }
            else{//添加
                t+=s[i];
            }          
        }
        if(t.size()!=0){//处理最后一个单词
            list.push_back(t);
        }
        string result;
        for(i=list.size()-1;i>=0;i--){//组装
            result+=list[i];
            if(i!=0) result+=" ";
        }
        return result;
    }
};
