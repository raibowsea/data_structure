#include"stack.h"
#include<iostream>
#include<stdlib.h>
#include<string.h>
void CStack::InitStack(){
    //char name[4]={'H','e','a','d'}£»
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
int  main()
{

    CStack CEmploy;
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

}