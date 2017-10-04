typedef struct
{
    char operador[20];
    int equipo;
    int tiempo;
    int estado;
    int tiemporeal;
}eAlquiler;
typedef struct
{
    int id;
    int equipo;
    int estado;
}eAlquila;
typedef struct
{
    int id;
    int dni;
    char nombre[20];
    char apellido[20];
    int estado;
}eCliente;


int obtenerEspacioLibre(eCliente lista[],int tam);

void altaCliente (eCliente lista[], int tam);

int buscarPorId(eCliente lista[], int id,int tam);

void modificarCliente (eCliente lista[], int tam);

void mostrarCliente(eCliente lista);

void estructuraCero (eCliente lista[], int i);

void iniciarEstructura (eCliente lista[],int tam);

void bajaCliente (eCliente lista[], int tam);

int obtenerAlquilerLibre(eAlquiler lista[],int tam);

void nuevoAlquiler (eCliente listaCliente[], int tamCliente, eAlquiler listaAlquiler[],int tamAlquiler, eAlquila listaAlquila[], int tamAlquila);

void finalizarAlquiler (eCliente listaCliente[], int tamCliente, eAlquiler listaAlquiler[],int tamAlquiler, eAlquila listaAlquila[], int tamAlquila);

int buscarEquipo(eAlquila listaAlquila[],int equipo,int tam);

void estructuraCeroAlquiler (eAlquiler listaAlquiler[], int i);

void iniciarEstructuraAlquiler(eAlquiler listaAlquiler[],int tam);
