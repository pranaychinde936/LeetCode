/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    int getDecimalValue(ListNode* head) {
        string s = "";

        while(head){
            char ch;
            if(head->val)                ch = '1';
            else                         ch = '0';
            s.push_back(ch);
            head = head->next;
        }

        int n = s.length()-1;
        int start = 1, ans = 0;
        while(n >= 0){
            if(s[n] == '1'){
                ans += start;
            }
            start *= 2;
            n--;
        }

        cout<< s;
        return ans;
    }
};