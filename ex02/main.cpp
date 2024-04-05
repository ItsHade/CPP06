#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

Base * generate(void)
{
    Base * base;
    int n = rand() % 3;
    switch (n)
    {
        case 0:
            base = new A();
            std::cout << "Base A randomly created!" << std::endl;
            break;
        case 1:
            base = new B();
            std::cout << "Base B randomly created!" << std::endl;
            break;
        case 2:
            base = new C();
            std::cout << "Base C randomly created!" << std::endl;
            break;
    }
    return (base);
}

void identify(Base* p)
{
    std::cout << "Identify from pointer: ";
    if (dynamic_cast<A *>(p))
        std::cout << "A" << std::endl;
    else if (dynamic_cast<B *>(p))
        std::cout << "B" << std::endl;
    else if (dynamic_cast<C *>(p))
        std::cout << "C" << std::endl;
    return ;
}

void identify(Base& p)
{
    std::cout << "Identify from reference: ";
    try
    {
        A& baseA = dynamic_cast<A &>(p);
        std::cout << "A" << std::endl;
        (void)baseA;
    }
    catch (std::exception & e) {}
    try
    {
        B& baseB = dynamic_cast<B &>(p);
        std::cout << "B" << std::endl;
        (void)baseB;
    }
    catch (std::exception & e) {}
    try
    {
        C& baseC = dynamic_cast<C &>(p);
        std::cout << "C" << std::endl;
        (void)baseC;
    }
    catch (std::exception & e) {}
    return ;
}

int main(void)
{
    std::srand(time(NULL));
    Base * base;

    base = generate();
    identify(base); // pointer
    identify(*base); // reference
    delete base;

    std::cout << std::endl;

    base = generate();
    identify(base); // pointer
    identify(*base); // reference
    delete base;

    std::cout << std::endl;

    base = generate();
    identify(base); // pointer
    identify(*base); // reference
    delete base;

    return (0);
}
