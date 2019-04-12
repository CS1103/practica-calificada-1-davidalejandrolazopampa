//
// Created by ruben on 4/12/19.
//

#include <string>
#include <iostream>
#include <fstream>
#include "TwoLinkedList.h"
#include <string>
using namespace std;

void UTEC::TwoLinkedList::push_back1(int value) {
    Node* temp=new Node(value);
    if(empty()){
    tail=temp;
    head1=temp;
    } else{
        if (head1 == nullptr && tail1 == nullptr) {
            tail1 = temp;
            head1 = temp;
        } else {
            tail1->next = temp;
            tail1 = temp;
        }
    }
}
void UTEC::TwoLinkedList::push_back2(int value) {
    Node* temp=new Node(value);
    if(empty()){
        tail=temp;
        head2=temp;
    } else {
        if (head2 == nullptr && tail2 == nullptr) {
            tail2 = temp;
            head2 = temp;
        } else {
            tail2->next = temp;
            tail2 = temp;

        }
}
void UTEC::TwoLinkedList::print1(){
    if ( head1 == tail1){
        std::cout << head1 << "  " << tail1 << std::endl;
    }
    else{

        node* temp = head1;
        while(temp->next != nullptr){
            std::cout << temp->value << std::endl;
            temp = temp->next;}
        std::cout << temp->value << std::endl;
    }
    if ( head2 == tail2){
        std::cout << head2 << "  " << tail2 << std::endl;
    }
    else{

        node* temp = head2;
        while(temp->next != nullptr){
            std::cout << temp->value << std::endl;
            temp = temp->next;}
        std::cout << temp->value << std::endl;
    }
}


void UTEC::TwoLinkedList::getlist(int value){
string merge="El numero es: "+to_string(value);
}
void UTEC::TwoLinkedList::search(int value){

}
void UTEC::TwoLinkedList::save(string contenido2){
    ofstream fs(contenido2.c_str());
    fs << head1 <<", "<< endl;
    fs.close();
    cout << "El archivo ha sido creado correctamente" << endl;
    system("pause");
}
void UTEC::TwoLinkedList::load(string contenido2){
    ifstream fs(contenido2.c_str(), ios:: in );
    char linea[128];
    long contador = 0L;
    if (fs.fail())
        cerr << "El fichero no existe" << endl;
    else
        while (!fs.eof()) {
            fs.getline(linea, sizeof(linea));
            cout << linea << endl;
            if ((++contador % 24) == 0) {
                cout << "continuar...";
                cin.get();
            }
        }
    fs.close();
    system("pause");
}