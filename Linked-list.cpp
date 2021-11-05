// Here we will be making the linked list using cpp //

class Node
{
    public:
    int data;
    Node *next;

    Node(int data)
    {
        this->data = data;
        next = nullptr;
    }
};


class Linkedlist
{
    private:
    Node *header;
    Node *tail;
    int size;
    public:
    Linkedlist()
    {
        header = nullptr;
        tail = nullptr;
        size = 0;

    }
    int getsize()
    {
        return size;
    }
};

int main()
{

}