typedef struct{
    char nombre[30];
    int materiasAprobadas;
    float notas;
    float promedio;
}eAlumnos;
eAlumnos cargarAlumno();
int mostrarAlumnos(eAlumnos mostrar[],int cantidad);
int calcularPromedio(eAlumnos* calculo,int cantidad);
