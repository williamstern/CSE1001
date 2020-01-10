/*
* Author: William Stern, wstern2019@my.fit.edu
* Course: CSE 1001, Section 03 Fall 2019
* Project: pressure.c
*/

#include <stdio.h>
#include <math.h>

int main(void) {

    const double p_0 = 101325;
    const double L = 0.00976;
    const double t_0 = 288.16;
    const double g = 9.80665;
    const double M = 0.02896968;
    const double r_0 = 8.314462618;

    // The three inputs for height
    double h1;
    double h2;
    double h3;

    double p1;
    double p2; 
    double p3;
    

    printf("Enter the first altitude in meters: ");
    scanf("%lf", &h1);
    p1 = p_0 * pow(1-((L*h1)/(t_0)), ((g*M)/(r_0*L)));
    
    printf("Enter the second altitude in meters: ");
    scanf("%lf", &h2);
    p2 = p_0 * pow(1-((L*h2)/(t_0)), ((g*M)/(r_0*L)));

    printf("Enter the third altitude in meters: ");
    scanf("%lf", &h3);
    p3 = p_0 * pow(1-((L*h3)/(t_0)), ((g*M)/(r_0*L)));

    printf("%17s%17s%17s%17s\n", "Altitude (m)", "Pressure (Pa)", "Pressure (mbar)", "Pressure (atm)");
    printf("%17.2lf%17.2lf%17.2lf%17.2lf\n", h1, p1, (p1 * 0.01), (p1/(1.01325*pow(10,5))));
    printf("%17.2lf%17.2lf%17.2lf%17.2lf\n", h2, p2, (p2 * 0.01), (p2/(1.01325*pow(10,5))));
    printf("%17.2lf%17.2lf%17.2lf%17.2lf\n", h3, p3, (p3 * 0.01), (p3/(1.01325*pow(10,5))));
    return 0;
}



