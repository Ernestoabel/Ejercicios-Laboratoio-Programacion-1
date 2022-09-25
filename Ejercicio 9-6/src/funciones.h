#ifndef FUNCIONES_H_
#define FUNCIONES_H_
typedef struct{
	int id;
	char name[51];
	char lastName[51];
	float salary;
	int sector;
	int isEmpty;
}eEmpleado;
int menu(char* mensajeUno,char* mensajeDos,char* mensajeTres,char* mensajeCuatro,char* mensajeCinco,char* mensajeSeis);
int menuListado(char* mensajeUno,char* mensajeDos,char* mensajeTres);
int inicializarEmpleados(eEmpleado* empleados,int cantidad,int estado);
eEmpleado cargarEmpleado(int estado, int* id);
int buscarEspacioLibre(eEmpleado* empleados,int cantidad, int estado, int* id);
int continuarCarga(char mensaje[], char mensajeOpcion[]);
int buscarClientePorId(eEmpleado* empleados, int* id);
int inicializarId(eEmpleado* empleados,int cantidad);
int ingresarIdParaModificar(eEmpleado* empleados,int cantidad);
int subMenu(char* mensajeUno,char* mensajeDos,char* mensajeTres,char* mensajeCuatro,char* mensajeCinco);
int mostrarEmpleados(eEmpleado* empleados,int cantidad);
int modificarEmpleado(eEmpleado* modificar, int opcion,int posicion);
int darDeBajaEmpleado(eEmpleado* modificar,int posicion,int estado);
int ordenarPorApellido(eEmpleado* ordenar,eEmpleado ordenador,int cantidad);
int ordenarPorSector(eEmpleado* ordenar,eEmpleado ordenador,int cantidad);
int sacarPromedioEstructuras(eEmpleado* calcular,int cantidad,float* resultado);
int calcularEmpleadosMejorPromedio(eEmpleado* calcular,int cantidad, float promedio);
#endif
