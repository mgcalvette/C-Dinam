#ifndef SERVICE_H_INCLUDED
#define SERVICE_H_INCLUDED
typedef struct{
    int gravedad;
    char mensaje[65];
    int serviceId;
}Service;

Service* ser_new();
Service* ser_newParametros(int gravedad,char* mensaje,int serviceId);
void ser_delete(Service* this);
int ser_setGravedad(Service* this,int gravedad);
int ser_getGravedad(Service* this,int* gravedad);
int ser_setServiceId(Service* this,int serviceId);
int ser_getServiceId(Service* this,int* serviceId);
int ser_setMensaje(Service* this,char* mensaje);
int ser_getMensaje(Service* this,char* mensaje);
void ser_print(Service* this);

#endif // SERVICE_H_INCLUDED
