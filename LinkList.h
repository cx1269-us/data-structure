//#ifndef CH2_H_INCLUDED
//#define CH2_H_INCLUDED
//#endif // CH2_H_INCLUDED
template<typename  T>
struct LinkList
{
    T data;
    LinkList<T> *next;
};
template <typename T>
class LinkList
{
   LinkList<T> *head;
   public:
       LinkListClass<T>();
       ~LinkListClass<T>();
       void CreateListF(T a[],int n);
       void CreateListR(T a[],int n);
       void DispList();
       int ListLength();
       bool GetElem(int i,T &e);
       int LoacteElem(int i,T e);
       bool ListInsert(int i,T e);
       bool ListDelete(int i);
       void Sort();
};
