/*

    @author: lucrasn;
    @date: 21/08/2024;
    @problem: Animal;

*/

#include <stdio.h>
#include <string.h>
 
int main() {
 
    char grupo[50], classe[50], dieta[50];
    scanf("%s %s %s", grupo, classe, dieta);
    
    if (strcmp(grupo, "vertebrado") == 0) {
        
        if (strcmp(classe, "ave") == 0) {
            
            if (strcmp(dieta, "carnivoro") == 0) {
                printf("aguia\n");
                
            } else if (strcmp(dieta, "onivoro") == 0) {
                printf("pomba\n");
                
            } // condição sub sub
            
        } else if (strcmp(classe, "mamifero") == 0) {
            
            if (strcmp(dieta, "onivoro") == 0) {
                printf("homem\n");
                
            } else if (strcmp(dieta, "herbivoro") == 0) {
                printf("vaca\n");
                
            } // condição sub sub
        } // condição sub
        
    } else if (strcmp(grupo, "invertebrado") == 0) {
        
        if (strcmp(classe, "inseto") == 0) {
            
            if (strcmp(dieta, "hematofago") == 0) {
                printf("pulga\n");
                
            } else if (strcmp(dieta, "herbivoro") == 0) {
                printf("lagarta\n");
                
            } // condição sub sub
        } else if (strcmp(classe, "anelideo") == 0) {
            
            if (strcmp(dieta, "hematofago") == 0) {
                printf("sanguessuga\n");
                
            } else if (strcmp(dieta, "onivoro") == 0) {
                printf("minhoca\n");
                
            } // condição sub sub
        } // condição sub
    } // condição main
 
    return 0;
} // main
