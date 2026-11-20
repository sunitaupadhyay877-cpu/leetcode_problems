class MyLinkedList {
public:
struct node{
    int data;
    struct node *next;
}*p=NULL;
int count=0;
    MyLinkedList() {
        p=NULL;
        count=0;

      
    }
    
    int get(int index) {
        struct node *r;
        r=p;
        if(index<0 || index>=count)
        return -1;
        for(int i=0;i<index;i++){
            r=r->next;
        }
        return r->data;
        
    }

    
    void addAtHead(int val) {
        struct node *temp;
        temp=new node;
        temp->data=val;
        temp->next=p;
        p=temp;
        count++;
    }

    
    void addAtTail(int val) {
        struct node *temp,*r;
        temp=new node;
        temp->data=val;
        temp->next=NULL;

        if(p==NULL){
            p=temp;
        }
        else{
            r=p;
            while(r->next!=NULL){
                r=r->next;
            }
            r->next=temp;
        }
        count++;
    }
    
    void addAtIndex(int index, int val) {
     if(index<0 || index>count)
        return;
    
    if(index==0){
        addAtHead(val);
        return;
    }
    struct node *temp,*r;
    temp=new node;
    temp->data=val;
    r=p;
    for(int i=0;i<index-1;i++){
        r=r->next;
    }
    temp->next=r->next;
    r->next=temp;
    count++;
    }
    
    void deleteAtIndex(int index) {
       if(index<0 || index>=count)
       return;

       struct node *r, *temp;

       if(index==0){
        temp=p;
        p=p->next;
        delete temp;
       } 
       else{
        r=p;
        for(int i=0;i<index-1;i++){
            r=r->next;
        }
        temp=r->next;
        r->next=temp->next;
        delete temp;
       }
       count--;
    }
};

/**
 * Your MyLinkedList object will be instantiated and called as such:
 * MyLinkedList* obj = new MyLinkedList();
 * int param_1 = obj->get(index);
 * obj->addAtHead(val);
 * obj->addAtTail(val);
 * obj->addAtIndex(index,val);
 * obj->deleteAtIndex(index);
 */