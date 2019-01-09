#ifndef DLNODE_H
#define DLNODE_H

template <typename T>
class DLNode {
    
public:
    DLNode(const T & = T());
    void setObject(const T &);
    T &getObject();
    void setNextPtr(DLNode<T> *);
    DLNode<T> *getNextPtr() const;
    void setPrevPtr(DLNode<T> *);
    DLNode<T> *getPrevPtr() const;
    
private:
    T object;
    DLNode<T> *nextPtr;
    DLNode<T> *prevPtr;
    
}; // DLNode<T> class

template <typename T>
DLNode<T>::DLNode(const T &object){
    this->object = object;
    this->nextPtr = 0;
    this->prevPtr = 0;
} // DLNode<T>::DLNode

template <typename T>
void DLNode<T>::setObject(const T &object){
    this->object = object;
} // DLNode<T>::setObject

template <typename T>
T &DLNode<T>::getObject(){
    return object;
} // DLNode<T>::getObject

template <typename T>
void DLNode<T>::setNextPtr(DLNode<T> *nextPtr){
    this->nextPtr = nextPtr;
} // DLNode<T>::setNextPtr

template <typename T>
DLNode<T> *DLNode<T>::getNextPtr() const{
    return nextPtr;
} // DLNode<T>::getNextPtr

template <typename T> // bad access??
void DLNode<T>::setPrevPtr(DLNode<T> *prevPtr){
    this->prevPtr = prevPtr;
} // DLNode<T>::setPrevPtr

template <typename T>
DLNode<T> *DLNode<T>::getPrevPtr() const{
    return prevPtr;
} //DLNode<T>::getPrevPtr

#endif // DLNODE_H

