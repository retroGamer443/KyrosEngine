#include <iostream>
#include <engine.h>

int main() 
{
    std::cout << "Testing Modules: KyroEngine" << std::endl;
    KEngine* engine = new KEngine();
    engine->Print();
    std::cout << "Loaded Modules: KyroEngine Core" << std::endl;
    delete engine;
    std::cout << "Unloading Modules: KyroEngine" << std::endl;
}