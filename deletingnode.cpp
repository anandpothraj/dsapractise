#include<iostream>
using namespace std;

class Solution {
public:
    void deleteNode(ListNode* node) {
        ListNode* nextNode = node->next;
        swap(nextNode->val, node->val);
        node->next = nextNode->next;
        delete nextNode;
    }
}

int main(){
    return 0;
}