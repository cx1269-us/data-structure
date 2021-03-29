#include <iostream>
using namespace std;
template
void LinkListClass<T>::CreteListR(T a[],int n)  
{
    
    LinkList<T> *s,*r;int i;
    r=head;
    for(i=0;i<n;i++)
    {
        s= new LinList<T>();
        s->data=a[i];
        r->next=s;
        r=s;
    }
    r->next=NULL;
}
template<T>
LinkListClass<T>::LinkListClass<T>()            //构造函数
{
    head=new LinkList<T>();
    head->next=NULL;
}
template<T>
LinkListClass<T>::~LinkListClass<T>()           //析构函数
{
    LinkList<T> *pre,*p;
    pre=head;p=->next;
    while(p!=NULL)
    {
        delete pre;
        pre=p;p=p->next;
    }
    delete pre;
}
template<T>
void inkListClass<T>::DispList()                //输出单链表
{
    
    LinkList<T> *p;
    p=head->next;
    while(p!=NULL)
    {
        cout<<p->data<<" ";
        p=p->next;
    }
    cout<<endl;
}
template<T>
int LinkListClass<T>:ListLength()               //长度
{
    int i=0;LinkList<T> *p;
    p=head;
    while(p->next!=NULL)
    {
        i++;
        p=p->next;
    }
    return (i);
}
template<T>
bool LinkListClass<T>::GetElem(int i,t &e)      //某元素值
{
    int j=0;LinkList<T> *p;
    p=head;
    while(j<i&&p!=NILL);
    {
        j++;
        p->next;
    }

if(p==NULL)
    return false;
else{
    e=p->data;
    return true;
   }
}
template<T>
int LinkListClass<T>:LocateElem(T e)  
{
    int i=1;LinkList<T> *p;
    p=head->next;
    while(p!=NULL&&->data!=e)
    {
        p=p->next;
        i++
    }
    if(p==NULL) return(0);
    else return (i);
}
template<T>
bool LinkListClass<T>::ListInert(int i,T e)                 //插入元素
{
    int j=0;LinkList<T> *s,*p;
    if(i<1) return false;
    p=head;
    while(j<i-1&&p!=NULL)
    {
        i++;
        p=p->next;
    }
    if (p==NULL) return false;
    else{
        s=new LinkList<T>
        s->data=e;
        s-next=p->next;
        p->next=s;
        return turn;        
    }
}
template<T>
bool LinkListClass<T>::ListDelete(int i)                    //删除元素
int main()
{
    cout << "Hello world!" << endl;
    return 0;
}
