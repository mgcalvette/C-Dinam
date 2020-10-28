#ifndef CLIENTES_H_INCLUDED
#define CLIENTES_H_INCLUDED
typedef struct {
    char nombre[50];
    char apellido[50];
    int idCliente;
}Cliente;

Cliente* cli_new();


#endif // CLIENTES_H_INCLUDED
