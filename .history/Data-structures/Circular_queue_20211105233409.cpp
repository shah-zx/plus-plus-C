#include <iostream>
using namespace std;

class Circular_queue
{
private:        // Here will be the basic requirements for the queue //
    int front;  // This is for the front of the queue
    int rear;   // This is  for the rear of the queue
    int arr[5]; // This is the size of the Queue

    //  Here will be the operations releated to the Queue //
public:
    Circular_queue()
    {
        front = -1;
        rear = -1;
        for (int i = 0; i < 5; i++)
        {
            arr[i] = 0;
        }
    }
    bool isEmpty()
    {
        if (front == -1 && rear == -1)
            return true; //  The queue is empty
        else
            return false; // The queue is full
    }
    bool isFull()
    {
        if (rear == 4)
            return true; // The queue is full
        else
            return false; // The queue is empty
    }

    void enqueue(int val)
    {
        if (isFull())
        {
            cout << "Queue is full";
            return;
        }
        else if (isEmpty())
        {
            rear = 0;  //
            front = 0; //
            arr[rear] = val;
        }
        else
        {
            rear == (rear + 1) % 4; //
            arr[rear] = val;
        }
    }
    int dequeue()
    {

        int x;
        if (isEmpty())
        {
            cout << "Queue is empty" << endl;
            return 0;
        }
        else if (front == rear)
        {
            x = arr[front];
            arr[front] = 0;   // This is an execptional case in which we are checking wether their is only one element //
            rear = -1;  // This is for the rear case where index is -1 //
            front = -1; // This is for the front case wher the index is -1 //
            return x;
        }

        else
        {

            x = arr[front];
            arr[front] = 0;
            front++;
            return x;
        }
    }
    int count()
    {
        return (rear - front + 1);
    }
    int display()
    {
        for (int i = 0; i < arr[i]; i++)
        {
            cout << arr[i];
        }
    }
};

int main()
{
    int option, value;
    class Circular_queue q1;
    do
    {
        cout << "\n\nWhat operation do you want to perform ? Please select an option. Enter 0 to exit." << endl;
        cout << "1.Enqueue()" << endl;
        cout << "2.Dequeue()" << endl;
        cout << "3.isEmpty()" << endl;
        cout << "4.isFull()" << endl;
        cout << "5.count()" << endl;
        cout << "6.clear screen()" << endl;
        cout << "7.Display()" << endl;

        cin >> option;

        switch (option)
        {
        case 0:
            break;

        case 1:
            cout << "Enqueue operation \n Enter an item to Enqueue in the Queue" << endl;
            cin >> value;
            break;

        case 2:
            cout << "Dequeue operation \n Dequeued value : " << q1.dequeue() << endl;
            break;

        case 3:
            if (q1.isEmpty())
                cout << "Queue is empty" << endl;
            else
                cout << "Queue is not empty" << endl;

            break;

        case 4:
            if (q1.isEmpty())
                cout << "Queue is empty" << endl;
            else
                cout << "Queue is not empty" << endl;

            break;

        case 5:
            cout << "Count operation \n Count of item is : " << q1.count() << endl;
            break;

        case 6:
            system("cls");
            break;

        case 7:
            cout << " The values are : " << q1.display() << endl;

        default:
            cout << "You have entered the wrong operation" << endl;
            break;
        }

    } while (option != 0);

    return 0;
}