#include <iostream>
#include <string>

class Mascota {
	private:
		std::string nombre;
		std::string sexo;
		std::string tipoMascota;
		int edadMeses;
		std::string size;
		bool conviveConNinos;
		bool conviveConOtrasMascotas;

	public:
		std::string getNombre() {
			return nombre;
		}

		std::string getSexo() {
			return sexo;
		}

		std::string getTipoMascota() {
			return tipoMascota;
		}

		int getEdadMeses() {
			return edadMeses;
		}

		std::string getSize() {
			return size;
		}

		bool getConviveConNinos() {
			return conviveConNinos;
		}

		bool getConviveConOtrasMascotas() {
			return conviveConOtrasMascotas;
		}

		void setNombre(std::string newName) {
			nombre = newName;
		}

		void setSexo(std::string newSexo) {
			sexo = newSexo;
		}

		void setTipoMascota(std::string newTipoMascota) {
			tipoMascota = newTipoMascota;
		}

		void setEdadMeses(int newEdadMeses) {
			edadMeses = newEdadMeses;
		}

		void setSize(int newSize) {
			size = newSize;
		}

		void setConviveConNinos(bool newConviveConNinos) {
			conviveConNinos = newConviveConNinos;
		}

		void setConviveConOtrasMascotas(bool newConviveConOtrasMascotas) {
			conviveConOtrasMascotas = newConviveConOtrasMascotas;
		}

};

class Persona {
	private:
		std::string nombre;
		std::string telefono;
		std::string correoElectronico;
		std::string direccion;

	public:
		Persona(){
			std::string auxNombre;
			std::cout << "Dame el nombre de la persona: ";
			std::cin >> auxNombre;
			nombre = auxNombre;

			std::string auxTelefono;
			std::cout << "Dame el Telefono de la persona: ";
			std::cin >> auxTelefono;
			telefono = auxTelefono;

			std::string auxCorreoElectronico;
			std::cout << "Dame el correo electronico de la persona: ";
			std::cin >> auxCorreoElectronico;
			correoElectronico = auxCorreoElectronico;

			std::string auxDireccion;
			std::cout << "Dame la direccion de la persona: ";
			std::cin >> auxDireccion;
			direccion = auxDireccion;
		}
	
		std::string getNombre() {
			return nombre;
		} 

		std::string getTelefono() {
			return telefono;
		} 

		std::string getCorreoElectronico() {
			return correoElectronico;
		} 

		std::string getDireccion() {
			return direccion;
		} 

		void setNombre(std::string newName) {
			nombre = newName;
		} 

		void setTelefono(std::string newTelefono) {
			telefono = newTelefono;
		} 

		void setCorreoElectronico(std::string newCorreoElectronico) {
			correoElectronico = newCorreoElectronico;
		} 

		void setDireccion(std::string newDireccion) {
			direccion = newDireccion;
		} 

};

class Rescatista : public Persona {
	private:
		double cuotaRecuperacion;

	public:
		Rescatista(){
			double auxCuotaDeRecuperacion;
			std::cout << "Dame la cuota de recuperacion de la persona: ";
			std::cin >> auxCuotaDeRecuperacion;
			cuotaRecuperacion = auxCuotaDeRecuperacion;
		}	

		double getCuotaRecuperacion(){
			return cuotaRecuperacion;
		}

		void setCuotaRecuperacion(double newCuotaRecuperacion){
			cuotaRecuperacion = newCuotaRecuperacion;
		}
};

class Adoptante : public Persona {
	private:
		std::string ocupacion;
		std::string tipoVivienda;

	public:
		std::string getOcupacion(){
			return ocupacion;
		}

		std::string getTipoVivienda(){
			return tipoVivienda;
		}

		void setOcupacion(std::string newOcupacion){
			ocupacion = newOcupacion;
		}

		void setTipoVivienda(std::string newTipoVivienda){
			tipoVivienda = newTipoVivienda;
		}
};

class EstudioAdopcion {
	private:
		 std::string fecha;
		 std::string lugar;
		 int hijos;
		 int mascotasExistentes;
		 int tiempoParaMascota;
		 std::string actividadFisica;

	public:
		std::string getFecha() {
			return fecha;
		} 
		std::string getLugar() {
			return lugar;
		} 
		int getHijos () {
			return hijos;
		}
		int getMascotasExistentes() {
			return mascotasExistentes;
		}
		int getTiempoParaMascota() {
			return tiempoParaMascota;
		}
		std::string getActividadFisica() {
			return actividadFisica;
		} 

		void setFecha(std::string newFecha) {
			fecha = newFecha;
		} 
		void setLugar(std::string newLugar) {
			lugar = newLugar;
		} 
		void setHijos(int newHijos) {
			hijos = newHijos;
		} 
		void setMascotasExistentes(int newMascotasExistentes) {
			mascotasExistentes = newMascotasExistentes;
		} 
		void setTiempoParaMascotas(int newTiempoParaMascotas) {
			tiempoParaMascota = newTiempoParaMascotas;
		} 
		void setActividadFisica(std::string newActividadFisica) {
			actividadFisica = newActividadFisica;
		} 

};

int main() {
	int opcion = -1;
	std::vector<Rescatista> rescatistas;

	do
	{
		do
		{
			std::cout << "1) Dar de alta Rescatista" << std::endl;
			std::cout << "2) Listar Rescatistas" << std::endl;
			std::cout << "20) Salir" << std::endl;
			std::cin >> opcion;
		} while (opcion < 1 || opcion > 20);

		switch (opcion)
		{
		case 1:
		{
			Rescatista auxRescatista = Rescatista();
			rescatistas.push_back(auxRescatista);
			break;
		}
		case 2:
		{
			std::cout << "Seleccionaste opcion 2" << std::endl;
			for(int i = 0; i < rescatistas.size(); i++){
				std::cout << rescatistas[i].getNombre() << std::endl;
				std::cout << rescatistas[i].getCuotaRecuperacion() << std::endl;
			}
			break;
		}
		case 20:
			break;
		default:
			break;
		}
	} while (opcion != 20);

	return 0;
}