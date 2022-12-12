#ifndef STACK_H
#define STACK_H
#include<string>
struct sStack{
    char name[15];
    unsigned int age;
    sStack* next;
};

//zxl:第一次写的栈类
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


//zxl:新栈
class CNewStack
{
private:
    /* data */
    unsigned int nUid;
    std::string name;
public:
    CNewStack *pNext;
    CNewStack(unsigned int nInput,std::string sInput);
    ~CNewStack();
    void AddNode(unsigned int nInput,std::string sInput);
    std::string PopNode();
    void DeleteStack();
    void ShowName();
};



#endif