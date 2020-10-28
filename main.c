#include <stdio.h>
#include <stdlib.h>
#include "empleado.h"
#include "service.h"
#include "user.h"
#include "clientes.h"
#define CLIENTES 100

int main(){
    Cliente* arrayClientes[CLIENTES];
    int i;
    for (i=0;i<CLIENTES;i++){
        arrayClientes[i]=NULL;
    }
    arrayClientes[0]=cli_new();

    return 0;
}
