__kernel void addition(__global int *a, __global int *b, __global int *c,  __global int *N){

int id = get_global_id(0);
c[id] = a[id]+b[id];


}