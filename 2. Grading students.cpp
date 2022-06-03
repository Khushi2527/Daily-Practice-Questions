vector<int> gradingStudents(vector<int> grades) {
    int n= grades.size();
    for(int i=0; i<n; i++){
        int rem = grades[i]%5;
        if(grades[i]>=38 && 5-rem <3){
            grades[i] += 5-rem;
            cout<<grades[i];
        }
        cout<<grades[i];
    }
    return grades;
}
