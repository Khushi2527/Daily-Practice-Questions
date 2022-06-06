int libraryFine(int d1, int m1, int y1, int d2, int m2, int y2) {
    int fine;
    if(d1==d2 && m1==m2 && y1<=y2){
        fine=0;
    }
    else if(d1>d2 && m1==m2 && y1==y2){
        fine= 15*(d1-d2);
    }
    else if(m1-m2>=1 && y1==y2){
        fine= 500*(m1-m2);
    }
    else if(y1>y2){
        fine=10000;
    }
return fine;
}
