#include <iostream>
#include <iostream>
#include <string>
#include "List.h"
#include"stdio.h"

using namespace std;

int main() {
    List orders;
    cout<<"list of orders"<<endl;
    //insert
    orders.orderInsert('a', 100);
    orders.orderInsert('b', 200);
    orders.orderInsert('c', 300);
    orders.orderInsert('d', 400);

    orders.traverse();
    //delete first order
    orders.deleteFirst();
    cout<<"after deleting first order"<<endl;
    orders.traverse();
    orders.insertEnd(500,'e');
    cout<<"after inserting"<<endl;
    orders.traverse();

    return 0;


}