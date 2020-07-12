#include <stdio.h>
#include <stdlib.h>
#include <string.h>
typedef struct
{
    int TareaID;//Numerado en ciclo iterativo
    char *Descripcion;
    int Duracion;// entre 10 â€“ 100
}Tar;
int aleatorio(int min,int max);
void cargar(Tar **tareas,int canTars);
void mostrar(Tar ** tareas,int canTars);
void ord(Tar ** tareas,Tar ** tareas_reali,int canTars);


int main()
{    
    int canTars;
    printf("ingrese la cantidad de tareas");
    scanf("%d",&canTars);
    Tar **pendientes=(Tar **)malloc(canTars * sizeof(Tar*));   
    Tar **realizadas=(Tar **)malloc(canTars * sizeof(Tar*));
    cargar(pendientes,canTars);
    printf("Tareas Pendientes");
    mostrar(pendientes,canTars);
    printf("Tareas Realizadas");
    mostrar(realizadas,canTars);

}
void cargar(Tar ** tareas,int canTars){
    for(int i=0;i<canTars;i++){
        char aux[100];
        tareas[i]=(Tar*)malloc(sizeof(Tar));
        tareas[i]->TareaID=i+1;
        printf("ingrese: %d: ",i+1);
        scanf("%s",aux);
        tareas[i]->Descripcion=(char*)malloc(strlen(aux)+1 *sizeof(char));
        strcpy(tareas[i]->Descripcion,aux);
        //tareas[i]->Duracion=aleatorio(1,10);

    }
}
void mostrar(Tar** tareas,int canTars){
    for (int i = 0; i < canTars; i++)
    {
        if(tareas[i]!=NULL){
            printf("ID: %d\n",tareas[i]->TareaID);
            printf("descripcion: %s\n",tareas[i]->Descripcion);
            printf("duracion: %d\n",tareas[i]->Duracion);
        }
    }
    
}
void ord(Tar ** tareas,Tar ** tareas_reali,int canTars)
{
    for (int i = 0; i < canTars; i++)
    {
        char aux[3];
        /* printf("completo? tarea: %s (eSI/NO)\n",i+1,tareas[i]->Descripcion); scanf("%s",aux);
        if (strcmp(aux,"SI") == 0 || strcmp(aux,"si") == 0 || strcmp(aux,"Si") == 0)
        {
            tareas_reali[i]= (Tar*)malloc(sizeof(Tar));
            tareas_reali[i]= tareas[i];
            tareas[i]=NULL;
        }
        else
        {
            tareas_reali[i]=NULL;
        }  
		*/ 
    }
}