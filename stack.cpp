#include"stack.h"
#include<iostream>
#include<stdlib.h>
#include<string.h>
void CStack::InitStack(){
    //char name[4]={'H','e','a','d'}��
    strcpy(sEmployee.name,"head");
    //sEmployee.name=;
    //sEmployee.name[]={'h','a','e','d'};
    sEmployee.age=999;
    sEmployee.next=nullptr;
}
void CStack::AddNode(sStack *sStack_employ)
{
    sStack *tmp;//=new sStack;
    tmp=&sEmployee;
    while(tmp->next!=nullptr)
    {
        tmp=tmp->next;
    }
   
    tmp->next=sStack_employ;
    sStack_employ->next=nullptr;
    sStack_employ=sStack_employ->next;
   
}
void CStack::ShowStack()
{
    sStack *tmp;
    tmp=&sEmployee;
    while(tmp->next!=nullptr)
    {
        tmp=tmp->next;
        std::cout<<tmp->name<<tmp->age<<std::endl;
    }
}


CNewStack::CNewStack(unsigned int nInput,std::string sInput)
{
    nUid=nInput;
    name=sInput;
    pNext=nullptr;
}
CNewStack::~CNewStack()
{
    //默认清楚节点
}
std::string CNewStack::PopNode()
{
    std::string sRet;
    if(pNext)
    { 
        CNewStack* ptemStack;
        ptemStack=pNext;
        sRet=pNext->name;
        pNext=pNext->pNext;
        delete ptemStack;
    }
    else
    {
        std::cout<<"no member error";
        sRet="no member error";
    }
    return sRet;
}
void CNewStack::AddNode(unsigned int nInput,std::string sInput)
{
    CNewStack* pTemStack;
    pTemStack=pNext;
    pNext=new CNewStack(nInput,sInput);
    pNext->pNext=pTemStack;
}
int  main()
{

    //第一次栈2022.12.03
 /*  CStack CEmploy;
    CEmploy.InitStack();
   for(int i=0;i<2;i++)
    {
        //employee=(sStack*)malloc(sizeof(sStack));
        sStack *employee=new sStack();
        //char name[15];
        //int age;
        std::cout<<"name and age:";
        std::cin>>employee->name>>employee->age;
        //employee->age=age;
        //*(employee->name)=*name;
        CEmploy.AddNode(employee);
        std::cout<<std::endl;

        //CEmploy.ShowStack();
    }
    CEmploy.ShowStack();
    return 0;
*/ 

    //second stack test 2022.12.03
    unsigned int nTem=0;
    std::string sTem="Head";
    CNewStack * MemberHead=new  CNewStack(nTem,sTem);
    MemberHead->AddNode(1,"Sdragon1 ");
    MemberHead->AddNode(2,"Sdragon2 ");
    std::cout<<MemberHead->PopNode();
    std::cout<<MemberHead->PopNode();
    std::cout<<MemberHead->PopNode();
}