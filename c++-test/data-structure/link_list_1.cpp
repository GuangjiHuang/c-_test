#include<stdio.h>
#include<stdlib.h>
struct Node
{
    int data;
    struct Node* next;
};
struct Node * head; // global variable
// the declaration of the function
void print();
void push_front(int x);
size_t count_size();
int access_element(size_t index, Node** node_ptr=NULL);
void insert(int val, size_t pos);
int main()
{
    head = NULL; //  empty list
    printf("Please input the 3 number\n");
    int n, i, x;
    //scanf("%d", &n);
    n = 3;
    for (i=0; i<n; i++)
    {
        //printf("Enter the number \n");
        scanf("%d", &x);
        push_front(x);
        //print();
    }
    //printf("\n");
    printf("use the function to acess the element\n");
    for (int i=0; i<n; i++)
    {
        printf("%d ", access_element(i));
    } 
    printf("\n");
    // use the insert function
    printf("Please input the value and the pos you want to insert\n");
    insert(888, 0);
    print();
    return 0;
}
void push_front(int x)
{/*{{{*/
    // push_front the data in the head
    Node* temp = (Node*)malloc(sizeof(struct Node));
    // renew the data and the next node's adress
    temp->data = x;
    temp->next = head;
    head = temp;
}/*}}}*/
void print()
{/*{{{*/
     Node* temp1 = head;
     while(temp1 != NULL)
     {
         // output the data
         printf("%d ", temp1->data);
         // move the pointer to the next node
         temp1 = temp1->next;
     }
     printf("\n");
}/*}}}*/
size_t count_size()
{/*{{{*/
    // create the Node pointer
    Node* temp = head;
    size_t count_num = 0;
    while(temp->next != NULL)
    {
        count_num++;
        temp = temp->next;
    }
    return count_num+1;
}/*}}}*/
//template <class T>
int access_element(size_t index, Node** node_ptr)
{/*{{{*/
    // the var to store the element
    int element;
    // get the size
    size_t size = count_size();
    if (index < size && size > 0)
    {
        // get the element
        Node* temp = head;
        for(int i=0; i!=index; i++)
        {
            temp = temp->next;
        }
        element = temp->data;
        // assign the node_ptr
        if (node_ptr != NULL)
            *node_ptr = temp;
    }
    else if(size == 0)
        printf("the list is empty!\n");
    else
        // the error
        printf("You index is wrong! Not over than %lld\n", (long long)size);
    return element;
}/*}}}*/
void insert(int val, size_t pos)
{/*{{{*/
    // compare the pos to the size
    size_t size = count_size();
    // the var
    Node* insert_node = (Node*)malloc(sizeof(Node));
    Node* left = NULL;
    // the left and the right
    if (pos == 0)
    {
        insert_node->data = val;
        insert_node->next = head->next;
        head = insert_node;
    }
    else if(pos>0 && pos<size)
    {
        access_element(pos-1, &left);
        // renew the left, you, and the right' next
        insert_node->data = val;
        insert_node->next = left->next;
        left->next = insert_node;
    }
    else
    {
        access_element(size-1, &left);
        insert_node->data = val;
        insert_node->next = NULL;
        left->next = insert_node;
    }
}/*}}}*/
