//
// Created by Lorenzo Malatesta on 04/05/22.
//

#include "lib.h"

float max (float num[], int dim) {
    int i=0;
    float ris = num[i];
    for (i=1; i<dim; i++) {
        if (num[i] > ris) {
            ris = num[i];
        }
    }
    return ris;
}
