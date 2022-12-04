void swap(Person* a, Person* b) {
    Person t = *a;
    *a = *b;
    *b = t;
}

int partition (vector<Person> &arr, int low, int high, int choice) {
    
    double pivot = arr[high].Get_SalaryPerYear();
    string pivotStr = arr[high].Get_LastName();
    int i = (low - 1);
                            
    for (int j = low; j <= high - 1; j++) {
        switch (choice){
            case 1:{
                if ((arr[j].Get_LastName().compare(pivotStr)) > 0 ) {
                    i++; 
                    swap(&arr[i], &arr[j]);
                    
                }
                break;
            }
            case 2:{
                if (arr[j].Get_SalaryPerYear()  > pivot) {
                    i++; 
                    swap(&arr[i], &arr[j]);
                    
                }
                break;
            }
        }
    }
    swap(&arr[i + 1], &arr[high]);
    return (i + 1);
    
}

void quickSort(vector<Person> &arr, int low, int high, int choice) {
    if (low < high) {
        int pi = partition(arr, low, high, choice);
        quickSort(arr, low, pi - 1, choice);
        quickSort(arr, pi + 1, high, choice);
    }
}