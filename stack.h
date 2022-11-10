#ifndef STACK_H
#define STACK_H
struct sStack{
    char name[8];
    unsigned int age;
    sStack* next;
};

class CStack
{   
    protected:
    sStack sEmployee;
    public:
    void InitStack();
    void AddNode(sStack *sStack_employ);
   // void DelNode();
   // void FindNode();
   // void RewriteNode();
   void ShowStack();

};

#endif