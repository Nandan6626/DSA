#include <iostream>
using namespace std;

// Definition for singly-linked list.
struct ListNode {
    int val;
    ListNode* next;

    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode* next) : val(x), next(next) {}
};

class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {

        ListNode* dummy = new ListNode(0);
        ListNode* current = dummy;
        int carry = 0;

        while (l1 || l2 || carry) {

            int v1 = l1 ? l1->val : 0;
            int v2 = l2 ? l2->val : 0;

            int sum = v1 + v2 + carry;
            carry = sum / 10;

            current->next = new ListNode(sum % 10);
            current = current->next;

            if (l1) l1 = l1->next;
            if (l2) l2 = l2->next;
        }

        return dummy->next;
    }
};

// Helper function to print list
void printList(ListNode* head) {
    while (head) {
        cout << head->val;
        if (head->next) cout << " -> ";
        head = head->next;
    }
    cout << endl;
}

int main() {

    // Example: l1 = [2,4,3]
    ListNode* l1 = new ListNode(2, new ListNode(4, new ListNode(3)));

    // Example: l2 = [5,6,4]
    ListNode* l2 = new ListNode(5, new ListNode(6, new ListNode(4)));

    Solution sol;
    ListNode* result = sol.addTwoNumbers(l1, l2);

    cout << "Result: ";
    printList(result);   // Expected: 7 -> 0 -> 8

    return 0;
}

