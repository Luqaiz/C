typedef struct{
    int legajo;
    char nombre[20];
}eAlumno;

typedef struct{
    int id;
    char descripcion[20];
}eMateria;

typedef struct{
    int legajo;
    int idMateria;
}eInscripcion;

