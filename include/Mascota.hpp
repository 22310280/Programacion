#include <iostream>
#include <string>

class Mascota
{
private:
    std::string nombre;
public:
    Mascota(/* args */) {
    std::cout<< "Ha nacido una mascota"<< std::endl; 
    this-> nombre = "Mi lolo";
    }
    void Inicializar(){
     std::cout<< "Ha nacido una mascota"<< std::endl; 
     this-> nombre = "Mi lolo";   
    }
    
    ~Mascota() 
    {
    std::cout<< "Adios perras!!"<< this-> nombre <<std::endl;
       
    }
    
    void Destruir()
    {
      std::cout<< "Adios perras!!"<<std::endl;    
    }
    void DecirNombre(){
        std::cout<< "Mi nombre es:"<< this-> nombre <<std::endl;
    }

};
