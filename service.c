#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "service.h"


static int ser_isValidGravedad(int altura);
static int ser_isValidServiceId(int serviceId);
static int ser_isValidMensaje(char* mensaje);

Service* ser_new(){
    return (Service*) malloc(sizeof(Service));
}
Service* ser_newParametros(int gravedad,char* mensaje,int serviceId){
    Service* this;
    this=ser_new();
    if( this== NULL ||
        ser_setGravedad(this,gravedad) ||
        ser_setMensaje(this,mensaje) ||
        ser_setServiceId(this,serviceId)){
            ser_delete(this);
            this= NULL;
    }
    return this;
}
void ser_delete(Service* this){
    free(this);
}
int ser_setGravedad(Service* this,int gravedad){
    int retorno=-1;
    if(this != NULL && ser_isValidGravedad(gravedad)){
        this->gravedad=gravedad;
        retorno=0;
    }
    return retorno;
}
int ser_getGravedad(Service* this,int* gravedad){
    int retorno=-1;
    if(this != NULL && gravedad != NULL){
        *gravedad=this->gravedad;
        retorno=0;
    }
    return retorno;
}
static int ser_isValidGravedad(int gravedad){
    return 1;
}
int ser_setServiceId(Service* this,int serviceId){
    int retorno=-1;
    if(this != NULL && ser_isValidServiceId(serviceId)){
        this->serviceId=serviceId;
        retorno=0;
    }
    return retorno;
}
int ser_getServiceId(Service* this,int* serviceId){
    int retorno=-1;
    if(this != NULL && serviceId != NULL){
        *serviceId=this->serviceId;
        retorno=0;
    }
    return retorno;
}
static int ser_isValidServiceId(int serviceId){
    return 1;
}
int ser_setMensaje(Service* this,char* mensaje){
    int retorno=-1;
    if(this != NULL && ser_isValidMensaje(mensaje)){
        strcpy(this->mensaje,mensaje);
        retorno=0;
    }
    return retorno;
}
int ser_getMensaje(Service* this,char* mensaje){
    int retorno=-1;
    if(this != NULL && mensaje != NULL){
        strcpy(mensaje,this->mensaje);
        retorno=0;
    }
    return retorno;
}
static int ser_isValidMensaje(char* mensaje){
    return 1;
}
void ser_print(Service* this){
    printf("\n%d  -%s  -%d  ",this->gravedad,this->mensaje,this->serviceId);
}
