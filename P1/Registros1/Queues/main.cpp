#include <iostream>
#include <queue>

using namespace std;

//queue<type> name;

void show(queue<int> aq)
{
    while(!aq.empty())
    { cout << aq.front() << " "; aq.pop(); }
    cout << endl;
}

void check_empty(const queue<int>& aq)
{
    if(aq.empty())
        cout << "Empty" << endl;
    else
        cout << "Not empty" << endl;
}

void lib(){
    queue<int> ints;

    cout << "ENQUEUE"<<endl;
    ints.push(1); ints.push(2); ints.push(3);
    cout << "Queue: ";
    show(ints);

    cout << "DEQUEUE"<<endl;
    ints.pop();
    cout << "Queue: ";
    show(ints);

    cout << "FRONT & BACK"<<endl;
    cout << "Front: " << ints.front() << endl;
    cout << "Back: " << ints.back() << endl;

    cout << "SIZE"<<endl;
    cout << "Size: " << ints.size() << endl;

    cout << "EMPTY"<<endl;
    check_empty(ints);
}

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

struct node {
    int data;
    struct node *next;
};
struct node* front = nullptr;
struct node* rear = nullptr;
struct node* temp;

void Enqueue() {
    int val;
    cout<<"Insert element: ";
    cin>>val;
    if (rear == nullptr) {
        rear = (struct node *)malloc(sizeof(struct node));
        rear->next = nullptr;
        rear->data = val;
        front = rear;
    } else {
        temp=(struct node *)malloc(sizeof(struct node));
        rear->next = temp;
        temp->data = val;
        temp->next = nullptr;
        rear = temp;
    }
}

void Dequeue() {
    temp = front;
    if (front == nullptr) {
        cout<<"Underflow"<<endl;
        return;
    }
    else
    if (temp->next != nullptr) {
        temp = temp->next;
        cout<<"Deleted "<<front->data<<endl;
        free(front);
        front = temp;
    } else {
        cout<<"Deleted: "<<front->data<<endl;
        free(front);
        front = nullptr;
        rear = nullptr;
    }
}

void View() {
    temp = front;
    if ((front == nullptr) && (rear == nullptr)) {
        cout<<"Empty"<<endl;
        return;
    }
    cout<<"Queue elements:";
    while (temp != nullptr) {
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    cout<<endl;
}

int size() {
    int count = 0;
    temp = front;
    while (temp != nullptr) {
        count++;
        temp = temp->next;
    }
    return count;
}

int Front() {
    if (front == nullptr) {
        cout<<"Null"<<endl;
        return -1;
    }
    return front->data;
}

int Rear() {
    if (rear == nullptr) {
        cout<<"Null"<<endl;
        return -1;
    }
    return rear->data;
}

void check_empty2() {
    if (front == nullptr) {
        cout<<"Empty"<<endl;
    } else {
        cout<<"Not empty"<<endl;
    }
}

int lib2() {
    int ch;
    cout<<"1) Insert"<<endl;
    cout<<"2) Delete"<<endl;
    cout<<"3) View elements"<<endl;
    cout<<"4) Size"<<endl;
    cout<<"5) Front"<<endl;
    cout<<"6) Rear"<<endl;
    cout<<"7) Is Empty?"<<endl;

    cout<<"0) Finish"<<endl;
    do {
        cout<<"Option: ";
        cin>>ch;
        switch (ch) {
            case 1: Enqueue();
                break;
            case 2: Dequeue();
                break;
            case 3: View();
                break;
            case 4: cout<<"Size: "<<size()<<endl;
                break;
            case 5: cout<<"Front: "<<Front()<<endl;
                break;
            case 6: cout<<"Rear: "<<Rear()<<endl;
                break;
            case 7: check_empty2();
                break;
            case 0: cout<<"Finished"<<endl;
                break;
            default: cout<<"Invalid choice"<<endl;
        }
    } while(ch!=0);
    return 0;
}

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

int main() {
    lib();
    lib2();
    return 0;
}