#include <iostream>
using namespace std;

class Shape
{
    private :
        std::string name ;
    public:
        Shape(): name("hhhhhhhh"){}
        virtual void    func(void)
        {
            std::cout << "hello from the base class" << std::endl;
        }
    void setname(std::string name);
};


void Shape::setname(std::string name)
{
        this name = name;
        std::cout << "the name is " << name << std::endl;
}

// class child:virtual public Shape
// {
//     public :
//         void func(void)
//         {
//             std::cout << "hello from child class" << std::endl;
//         }
// };

// class child1:virtual  public Shape {
//     public :
//         void func(void)
//         {
//             std::cout << "hello from child1 class" << std::endl;
//         }
// };

// class diamond: public child1, public child
// {
//     public :
//         void func(void)
//         {
//             std::cout << "hello from diamond class" << std::endl;
//         }
// };
int main()
{
    
    Shape a;
    a.setname("oussama");

    return 0;
}