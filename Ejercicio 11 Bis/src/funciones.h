#ifndef FUNCIONES_H_
#define FUNCIONES_H_
typedef struct
{
	int idSector;
	char descripcionSector[51];
}eSector;
typedef struct
{
	int id;
	char name[51];
	char lastName[51];
	float salary;
	int sector;
	int isEmpty;
}eEmpleado;
int inicializarEmpleados(eEmpleado* empleados,int cantidad,int estado);
eEmpleado cargarEmpleado(int estado, int* id);
eSector cargarSector(eSector sectores[],int cantidad);
int buscarEspacioLibre(eEmpleado* empleados,int cantidad, int estado, int* id);
int buscarClientePorId(eEmpleado* empleados, int* id);
int inicializarId(eEmpleado* empleados,int cantidad);
int ingresarIdParaModificar(eEmpleado* empleados,int cantidad);
int mostrarEmpleados(eEmpleado* empleados,int cantidadUno,eSector* sectores);
int mostrarEmpleadosPorSector(eEmpleado* empleados,int cantidadUno,eSector* sectores);
int mostrarCantidadEmpleadosSector(eEmpleado* empleados,int cantidadUno,eSector* sectores,int sector,int contador);
int modificarEmpleado(eEmpleado* modificar, int opcion,int posicion,eSector* sector,eSector* sectores);
int darDeBajaEmpleado(eEmpleado* modificar,int posicion,int estado);
int ordenarPorSector(eEmpleado* ordenar,eEmpleado ordenador,int cantidad,eSector* ordenarUno,eSector ordenadorUno);
int contador(eEmpleado* empleados,int cantidad,int sector);
int contadorPorSector(eEmpleado* empleados,int cantidad,int* contador);
int ordenarPorApellido(eEmpleado* ordenar,eEmpleado ordenador,int cantidad,eSector* ordenarUno,eSector ordenadorUno);
int listarMayorSector(eEmpleado* empleados,int cantidad,eSector* sectores);
int sacarPromedioEstructuras(eEmpleado* calcular,int cantidad,float* resultado);
int calcularEmpleadosMejorPromedio(eEmpleado* calcular,int cantidad, float promedio);
int sacarPromedioEstructurasPorSector(eEmpleado* calcular,int cantidad,float* resultado);
#endif
