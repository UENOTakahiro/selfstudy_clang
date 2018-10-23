#define OPENr(f,fn) \
  f = fopen(fn, "r"); \
    if(f==NULL){ \
      printf("NG:%s\n", fn); exit(-1); \
    }
