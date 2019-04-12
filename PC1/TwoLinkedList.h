//
// Created by ruben on 4/12/19.
//

#ifndef PC1_TWOLINKEDLIST_H
#define PC1_TWOLINKEDLIST_H

using namespace std;
namespace UTEC{

    struct Node{
        int value;
        Node* next;
        Node(int value):value{value},next{ nullptr}{}
    };
    class TwoLinkedList {
        Node* head1;
        Node* head2;
        Node* tail;
        Node* tail1;
        Node* tail2;
    public:
        TwoLinkedList(): head1(nullptr), head2(nullptr),tail(nullptr),tail1(nullptr),tail2(nullptr){}
        void push_back1(int value);
        void push_back2(int value);
        bool empty();
        string merge(int value);
        bool is_merge();
        void getlist(int value);
        int size();
        void print1();
        void print2();
        void search(int value);
        void save(string contenido2);
        void load(string contenido2);
        ~TwoLinkedList();
    };
}


#endif //PC1_TWOLINKEDLIST_H
