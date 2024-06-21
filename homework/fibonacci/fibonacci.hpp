#pragma once

int fibonacci_iterative (int sequence) {
    int t1 = 0,t2 = 1,t3;
    if (sequence == 0) {return t1;}
    else if (sequence == 1 || sequence == 2) {return t2;}
    else {
        for (int j = 2; j <= sequence; ++j) {
            t3 = t1+t2;
            t1=t2;
            t2=t3;
        }
        return t2;
    }
}

int fibonacci_recursive(int sequence) {
    if (sequence==0) return 0;
    else if (sequence==1) return 1;
    else {
        return fibonacci_recursive(sequence-1)+ fibonacci_recursive(sequence-2);
    }
}
