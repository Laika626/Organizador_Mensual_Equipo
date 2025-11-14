#include <iostream>
#include <string>

class Empleado {
    public:
        std::string nombre;
        std::string telefono;
        std::string direccion;
        std::string rol;
        int salario;
        std::string departamento;
        int horasAsignadas;

        Empleado(std::string nmbr, std::string tlfn, std::string drccn, std::string rl, int slr, std::string dprtmnt, int hrs) {
            nombre = nmbr;
            telefono = tlfn;
            direccion = drccn;
            rol = rl;
            salario = slr;
            departamento = dprtmnt;
            horasAsignadas = hrs;
        }

        std::string getNombre(){
            return nombre;
        }

        std::string getTelefono(){
            return telefono;
        }

        std::string getDireccion(){
            return direccion;
        }

        int getSalario(){
            return salario;
        }

        std::string getDepartamento(){
            return departamento;
        }

        int getHorasAsignadas(){
            return horasAsignadas;
        }

        void setNombre(std::string nmbr){
            nombre = nmbr;
        }

        void setTelefono(std::string tlfn){
            telefono = tlfn;
        }

        void setDireccion(std::string drccn){
            direccion = drccn;
        }

        void setSalario(int slr){
            salario = slr;
        }

        void setDepartamento(std::string dprtmnt){
            departamento = dprtmnt;
        }

        void setHorasAsignadas(int hrs){
            horasAsignadas = hrs;
        }
};

class Voluntario {
    public:
        std::string nombre;
        std::string telefono;
        std::string direccion;
        std::string rol;
        std::string departamento;
        std::string sede;

        Voluntario(std::string nmbr, std::string tlfn, std::string drccn, std::string rl, std::string dprtmnt, std::string sd){
            nombre = nmbr;
            telefono = tlfn;
            direccion = drccn;
            rol = rl;
            departamento = dprtmnt;
            sede = sd;
        }
        
        std::string getNombre(){
            return nombre;
        }

        std::string getTelefono(){
            return telefono;
        }

        std::string getDireccion(){
            return direccion;
        }

        std::string getRol(){
            return rol;
        }

        std::string getDepartamento(){
            return departamento;
        }

        std::string getSede(){
            return sede;
        }

        void setNombre(std::string nmbr){
            nombre = nmbr;
        }

        void setTelefono(std::string tlfn){
            telefono = tlfn;
        }

        void setDireccion(std::string drccn){
            direccion = drccn;
        }


        void setDepartamento(std::string dprtmnt){
            departamento = dprtmnt;
        }

        void setSede(std::string sd){
            sede = sd;
        }

};

class ResponsableEsterilizacion {
    public:
        std::string nombre;
        std::string telefono;
        std::string direccion;
        std::string sede;

        ResponsableEsterilizacion(std::string nmbr, std::string tlfn, std::string drccn, std::string sd){
            nombre = nmbr;
            telefono = tlfn;
            direccion = drccn;
            sede = sd;
        }

        std::string getNombre(){
            return nombre;
        }

        std::string getTelefono(){
            return telefono;
        }

        std::string getDireccion(){
            return direccion;
        }

        std::string getSede(){
            return sede;
        } 

        void setNombre(std::string nmbr){
            nombre = nmbr;
        }

        void setTelefono(std::string tlfn){
            telefono = tlfn;
        }

        void setDireccion(std::string drccn){
            direccion = drccn;
        }

        void setSede(std::string sd){
            sede = sd;
        }
};

int main(void){
    std::string nombreAuxiliar;
    Empleado empleado1("Mariana", "3338513787", "Cerro del Acantilado 166", "Veterinaria Jefe", 160000, "Medicina", 40);
    Voluntario voluntario1("Fernanda", "3338514889", "Cerro de las campanas 666", "Ayudante de Veterinaria", "Medicina", "Zapopan");
    ResponsableEsterilizacion responsable1("Ericka", "3338512324", "Indistrial norte 1234", "Tlajomulco");

    std::cout << "Nombre empleado 1: " << empleado1.getNombre() << std::endl;
    std::cout << "A que nombre le quieres cambiar al empleado: ";
    std::cin >> nombreAuxiliar;
    empleado1.setNombre(nombreAuxiliar);
    std::cout << "Nombre empleado 1: " << empleado1.getNombre() << std::endl;


    std::cout << "Nombre voluntario 1: " << voluntario1.getNombre() << std::endl;
    std::cout << "A que nombre le quieres cambiar al voluntario: ";
    std::cin >> nombreAuxiliar;
    voluntario1.setNombre(nombreAuxiliar);
    std::cout << "Nombre voluntario 1: " << voluntario1.getNombre() << std::endl;


    std::cout << "Nombre responsable de esterilizacion 1: " << responsable1.getNombre() << std::endl;
    std::cout << "A que nombre le quieres cambiar al responsable 1: ";
    std::cin >> nombreAuxiliar;
    responsable1.setNombre(nombreAuxiliar);
    std::cout << "Nombre responsable 1: " << responsable1.getNombre() << std::endl;
    
    return 0;
}




