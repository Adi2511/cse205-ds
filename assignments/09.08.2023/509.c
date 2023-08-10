int fib(int n){
    int x=0, y=1;
    if (n==0){
        return 0;
    }
    else if(n==1){
        return 1;
    }
    else{
        return(fib(n-1) + fib(n-2));
    }
}