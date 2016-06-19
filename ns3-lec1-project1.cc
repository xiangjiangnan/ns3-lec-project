#include"ns3/core-module.h"
#include<iostream>
using namespace ns3;
NS_LOG_COMPONENT_DEFINE ("ns3-lec1-project1");
struct Stu
{
std::string name;
int id;
int frequency;
};
static void printHello(Stu stu){
std::cout << stu.name << " "<< stu.id << std::endl;
Simulator::Schedule(Seconds(stu.frequency),&printHello,stu);
}
int main(int argc,char *argv[]){
Stu stu;
std::cin >> stu.name >> stu.id >> stu.frequency;
printHello(stu);

Simulator::Stop(Seconds(5));
Simulator::Run();
Simulator::Destroy();
}
