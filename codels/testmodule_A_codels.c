#include "actestmodule.h"

#include "testmodule_c_types.h"

#include <stdio.h>

//#include <calc_mean.h>

/* --- Task A ----------------------------------------------------------- */


/** Codel InitModule of task A.
 *
 * Triggered by testmodule_start.
 * Yields to testmodule_ether.
 */
genom_event
InitModule(genom_context self)
{
    double a=10, b=4, m;

    //m = mean(a,b);

    printf("MEAN: %f\n", m);

    return testmodule_ether;
}
