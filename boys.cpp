#include <stdio.h>
#include <stdlib.h>
#include <strings.h>
#include <time.h>


#define MAX 100
#define VMAX 5.0
#define AMAX 2.0
#define X_MAX 800
#define Y_MAX 600


struct Vector{
    double x;
    double y;
}

struct Personaje{
    struct Vector r;
    struct Vector v;
    struct Vector a;
   void (*p-mover)();

};
void mover_buenos();

void update_physics(struct Personaje *movil){
    movil ->v.x += movil->a.x;
    movil ->v.y += movil->a.y;
    movil ->r.x += movil->v.y;
    movil ->r.y += movil->v.y;
}

void init(struct Personaje *movil){
    bzero(movil, sizeof(struct Personaje));
   // movil->p_mover = mover_malos;

    movil->r.x = drand48() * X_MAX;
    movil->r.y = drand48() * Y_MAX;
    movil->v.y = drand48() * VMAX;
    movil->v.y = drand48() * VMAX;
    movil->a.y = drand48() * AMAX;
    movil->a.y = drand48() * AMAX;
_

}

int main(int argc, const char **argv){

    struct Personaje prota[MAX];

    srand48(time (NULL));
        for(int i=0; i<MAX; i++)
            init(&prota[i]);

    while(1){
        for(int i=0; i<MAX; i++)
            update_physics(&prota[i]);




    }


return EXIT_SUCCESS;
}
