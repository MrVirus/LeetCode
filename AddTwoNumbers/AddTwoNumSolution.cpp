//
// Created by seventh on 2019/4/2.
//

#include "AddTwoNumSolution.h"

using namespace std;

ListNode* AddTwoNumSolution::addTwoNumbers(ListNode *l1, ListNode *l2) {
    ListNode* ret = new ListNode(-1);
    ListNode* cur = ret;

    int val1 = 0;
    int val2 = 0;
    int sum = 0;
    int addOne = 0;

    while (l1 || l2){
        val1 = l1 ? l1->val : 0;
        val2 = l2 ? l2->val : 0;
        sum = val1 + val2;
        addOne = sum / 10;
        ret->val += sum % 10;

        // new
        ListNode* newNode = new ListNode(addOne);
        newNode->next = ret;
        cur = newNode;

        // 前进
        if (l1) l1 = l1->next;
        if (l2) l2 = l2->next;
    }

    if (addOne > 0){
        ListNode* newNode = new ListNode(addOne);
        newNode->next = ret;
        cur = newNode;
    }

    return cur;
}

ListNode* AddTwoNumSolution::makeList(std::vector<int> v) {
    if (v.size() == 0){
        return NULL;
    }

    ListNode* p = new ListNode(v[0]);
    ListNode* head = p;
    for (int i = 1; i < v.size(); ++i) {
        p->next = new ListNode(v[i]);
        p = p->next;
    }

    return head;
}

void AddTwoNumSolution::printList(ListNode *p, char* name) {
    cout << "printList  " << name << "  .Begin." << endl;
    while (p){
        cout << "Value=" << p->val << endl;
        p = p->next;
    }
    cout << "printList  " << name << "  .End." << endl;
}

void AddTwoNumSolution::runTest() {
    ListNode* l1 = makeList({2,4,3});
    ListNode* l2 = makeList({5,6,4});

    printList(l1, "l1");
    printList(l2, "l2");

    printList(addTwoNumbers(l1,l2), "ret");
}