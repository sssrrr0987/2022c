int lastStoneWeight(int* stones, int N){
    while(1){
        int a=stones[0],ai=0;
        for(int i=0;i<N;i++){
            if(a<stones[i]){
                a=stones[i];
                ai=i;
            }
        }
        stones[ai]=0;
        int b=stones[0],bi=0;
        for(int i=0;i<N;i++){
            if(b<stones[i]){
                b=stones[i];
                bi=i;
            }
        }
        stones[bi]=0;
        if(a==0 && b==0) return 0;
        if(a!=0 && b==0) return a;
        stones[ai]=a-b;
    }
    return 0;
}
