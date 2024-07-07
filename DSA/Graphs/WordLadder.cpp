//https://leetcode.com/problems/word-ladder/description/
class Solution {
public:
    int ladderLength(string beginWord, string endWord, vector<string>& wordList) {
        queue<pair<string,int>>q;
        q.push({beginWord,1});
         unordered_set<string> s(wordList.begin(), wordList.end());
        s.erase(beginWord);
        while(!q.empty()){
            string word=q.front().first;
            int dis=q.front().second;
            if(word==endWord)return dis;
            q.pop();
            for(int i=0;i<word.size();i++){
                for(char x='a';x<='z';x++){
                    string temp=word;
                    temp[i]=x;
                    if(temp!=word&&s.find(temp)!=s.end()){
                        q.push({temp,dis+1});
                        s.erase(temp);
                    }
                 }
            }
            
        }
        return 0;
    }
};