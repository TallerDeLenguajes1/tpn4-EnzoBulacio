#include <stdio.h>
#include <stdlib.h>
#include <string.h>
typedef struct
{
    int TareaID;//Numerado en ciclo iterativo
    char *Descripcion;
    int Duracion;// entre 10 – 100
}T_tarea;
int aleatorio(int min,int max);
void cargar(T_tarea **tareas,int cant_tareas);
void mostrar(T_tarea ** tareas,int cant_tareas);
//void ord(T ** tareas,T ** tareas_reali,int cant_tareas);


int main()
{    
    int cant_tareas;
    printf("ingrese la cantidad de tareas");
    scanf("%d",&cant_tareas);
    T_tarea **pendientes=(T_tarea **)malloc(cant_tareas * sizeof(T_tarea*));   
    T_tarea **realizadas=(T_tarea **)malloc(cant_tareas * sizeof(T_tarea*));
    cargar(pendientes,cant_tareas);
    printf("TAREAS PENDIENTES");
    mostrar(pendientes,cant_tareas);
    printf("TAREAS REALIZADAS");
    mostrar(realizadas,cant_tareas);

}
void cargar(T_tarea ** tareas,int cant_tareas){
    for(int i=0;i<cant_tareas;i++){
        char aux[100];
        tareas[i]=(T_tarea*)malloc(sizeof(T_tarea));
        tareas[i]->TareaID=i+1;
        printf("ingrese: %d",i+1);
        scanf("%s",aux);
        tareas[i]->Descripcion=(char*)malloc(strlen(aux)+1 *sizeof(char));
        strcpy(tareas[i]->Descripcion,aux);
        //tareas[i]->Duracion=aleatorio(1,10);

    }
}
void mostrar(T_tarea** tareas,int cant_tareas){
    for (int i = 0; i < cant_tareas; i++)
    {
        if(tareas[i]!=NULL){
            printf("ID: \n",tareas[i]->TareaID);
            printf("descripcion: \n",tareas[i]->Descripcion);
            printf("duracion: \n",tareas[i]->Duracion);
        }
    }
    
}
