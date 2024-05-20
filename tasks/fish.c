#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int tot_fish[10] = {60, 70, 80, 90, 100, 110, 120, 130, 140, 150}; // i + 1 = pie number
    int freq_fish[10] = {9, 11, 11, 12, 11, 15, 10, 8, 9, 5};

    // int abs_frequence = 0;
    // for(int i = 0; i < sizeof(pie) / sizeof(pie[0]); i++) {
    //     abs_frequence += pie[i];
    // }

    // float rel_frequence[6];
    // for(int i = 0; i < sizeof(pie) / sizeof(pie[0]); i++){
    //     rel_frequence[i] = (float)pie[i] / abs_frequence;
    // }

    // float ac_rel_frequence[6];
    // for(int i = 0; i < sizeof(pie) / sizeof(pie[0]); i++){
    //     ac_rel_frequence[i] = 0;
    //     for(int j = 0; j <= i; j++){
    //         ac_rel_frequence[i] += rel_frequence[j];
    //     }
    // }

    printf("Initial Parameters\nFish\t\tFreq\n");
    for(int i = 0; i < sizeof(tot_fish) / sizeof(tot_fish[0]); i++) {
        printf("%d\t\t%d\n", tot_fish[i], freq_fish[i]);
    }

    // printf("Initial Parameters\nPie\t\tAbsolut\t\tRelative\t\tAc\n");
    // for(int i = 0; i < sizeof(pie) / sizeof(pie[0]); i++) {
    //     printf("%d\t\t%d\t\t%f\t\t%.3f\n", i + 1, pie[i], rel_frequence[i], ac_rel_frequence[i]);
    // }

    // printf("\nSimulating pie...\n");

    // // simulator
    // srand(time(NULL));
    // int sim_pie[6] = {0};
    // int n = 100000000;
    // for(int i = 0; i < n; i++){
    //     float random = (float)rand() / (float)(RAND_MAX);
    //     for(int j = 0; j < sizeof(ac_rel_frequence) / sizeof(ac_rel_frequence[0]); j++) {
    //         if((j == 5) | random < ac_rel_frequence[j]) {
    //             sim_pie[j]++;
    //             break;
    //         }
    //     }
    // }

    // float sim_rel_frequence[6];
    // for(int i = 0; i < sizeof(sim_pie) / sizeof(sim_pie[0]); i++){
    //     sim_rel_frequence[i] = (float)sim_pie[i] / n;
    // }

    // printf("Pie\t\tAbsolut\t\tRelative\n");
    // for(int i = 0; i < sizeof(pie) / sizeof(pie[0]); i++) {
    //     printf("%d\t\t%d\t\t%f\n", i + 1, sim_pie[i], sim_rel_frequence[i]);
    // }

    // return 0;
}