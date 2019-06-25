//url
#include <bits/stdc++.h>
using namespace std;
struct Node
{
    int data;
    Node* next;
};
Node* getNewNode(int data);
Node* insertNodeAtStart(Node* head,int data);
Node* insertNodeAtEnd(Node* head,int data);
Node* removeDuplicate(Node* head);
int getNthNodeFromLast(Node *head, int n);
void printList(Node* head);
int main()
{
    int i,j,k,l,m,n,a,b,c,tc,x,y,z,prev,ans,lower,upper,mid,num[10000];
    while(cin>>tc)
    {
        //freopen("input.txt","r",stdin);
        for(x=1; x<=tc; x++)
        {
            cin>>n;
            Node* head = NULL;
            for(i=0; i<n; i++)
            {
                cin>>m;
                head = insertNodeAtEnd(head,m);
            }
            printList(head);
            head = removeDuplicate(head);
            printList(head);



        }
    }
    return 0;
}
Node* getNewNode(int data)
{
    Node* newNode = new Node();
    newNode->data = data;
    newNode->next = NULL;
    return newNode;
}
Node* insertNodeAtEnd(Node* head,int data)
{
    if(head==NULL)
    {
        head = getNewNode(data);
    }
    else
    {
        Node* tmp = head;
        while(tmp->next!=NULL)
            tmp = tmp->next;
        tmp->next = getNewNode(data);
    }
    return head;

}
Node* insertNodeAtStart(Node* head, int data)
{
    if(head==NULL)
    {
        head = getNewNode(data);
    }
    else
    {
        Node* tmp = head;
        Node* newNode = getNewNode(data);
        newNode->next = tmp;
        head = newNode;
    }
    return head;

}
Node* removeDuplicate(Node* head)
{
    Node* tmp = head;
    while(tmp->next!=NULL)
    {
        Node* next = tmp->next;
        if(next!=NULL && tmp->data == next->data)
        {
            while(next!=NULL && tmp->data==next->data)
            {
                next = next->next;
            }
            tmp->next = next;
        }
        else tmp=tmp->next;

    }
    return head;

}
int getNthNodeFromLast(Node *head, int n)
{
    int totalNode = 0;
    Node* tmp = head;
    while(tmp!=NULL)
    {
        totalNode++;
        tmp=tmp->next;
    }
    if(n>totalNode)
        return -1;
    else
    {
        int a = totalNode-n;
        int c=0;
        tmp = head;
        if(c==a)
            return tmp->data;
        while(tmp->next!=NULL)
        {
            tmp=tmp->next;
            c++;
            if(c==a)
                break;
        }
        return tmp->data;

    }
}


void printList(Node* head)
{
    while(head!=NULL)
    {
        cout<<head->data<<" ";
        head=head->next;
    }
    cout<<endl;
}
