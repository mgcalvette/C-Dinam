#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "clientes.h"

Cliente* cli_new(){
    return (Cliente*) malloc(sizeof(Cliente));
}
