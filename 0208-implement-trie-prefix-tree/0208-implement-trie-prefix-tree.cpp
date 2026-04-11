class Node{
    private:
        Node* links[26];
        int prefixCnt;
        int endCnt;
    
    public:
        Node(){
            prefixCnt = 0;
            endCnt = 0;
            for(int i = 0; i < 26; i++){
                links[i] = nullptr;
            }
        }

        void addNode(char ch, Node* next){
            links[ch - 'a'] = next;
        }

        bool containsKey(char ch){
            // cout<< links[idx]<< endl;
            return (links[ch - 'a'] != NULL);
        }

        void increasePrefix(){
            prefixCnt++;
        }

        void increaseEnd(){
            endCnt++;
        }

        Node* advanceToNext(char ch){
            return links[ch - 'a'];
        }

        bool isEnd(){
            return (this->endCnt > 0);
        }
};

class Trie {
private:
    Node* root;
public:
    Trie() {
        root = new Node();
    }
    
    void insert(string word) {
        int n = word.size();
        Node* curr = root;
        for(int i=0; i<n; i++){
            if(!curr->containsKey(word[i])){
                curr->addNode(word[i], new Node());
            }
            curr = curr->advanceToNext(word[i]);
            curr->increasePrefix();
        }
        curr->increaseEnd();
    }
    
    bool search(string word) {
        int n = word.size();
        Node* curr = root;
        for(int i=0; i<n; i++){
            if(!curr->containsKey(word[i])){
                return false;
            }
            curr = curr->advanceToNext(word[i]);
        }
        return curr->isEnd();
    }
    
    bool startsWith(string word) {
        int n = word.size();
        Node* curr = root;
        for(int i=0; i<n; i++){
            if(!curr->containsKey(word[i])){
                return false;
            }
            curr = curr->advanceToNext(word[i]);
        }
        return true;
    }
};

/**
 * Your Trie object will be instantiated and called as such:
 * Trie* obj = new Trie();
 * obj->insert(word);
 * bool param_2 = obj->search(word);
 * bool param_3 = obj->startsWith(prefix);
 */