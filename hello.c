/*#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    int n;
    scanf("%d",&n);
    int* array = (int*)malloc(n * sizeof(int));
    srand(time(NULL));
    for (int i=0; i < n; i++){
        array[i]=rand() % 16257;
    }
    int min = array[0];
    int max = array[0];
    double sum=0;
     for (int i = 0; i < n; i++) {
        sum+=array[i];
        if (array[i] < min) {
            min = array[i];
        }
        if (array[i] > max) {
            max = array[i];
        
        }
    }
    sum/=n;
    printf("max значение = %d\n", max);
    printf("min значение = %d\n",min);
    printf("average значение = %f\n",sum);
    free(array);
    return 0;
}

#include <stdio.h>
#include <math.h>

typedef struct Point{
    double x;
    double y; 
} Point;

double calculatedistance(Point p1, Point p2){
    double dx = p2.x - p1.x;
    double dy = p2.y - p1.y;
    return sqrt(dx * dx + dy * dy);
}

double calculatearea(struct Point bottomleft,struct Point topright){
    return (topright.x - bottomleft.x) * (topright.y - bottomleft.y);
}
int main() {
    struct Point A,B;
    scanf("%lf %lf",&A.x,&A.y);
    scanf("%lf %lf",&B.x,&B.y);
    printf("%lf\n",calculatedistance(A,B));
    printf("%lf\n",calculatearea(A,B));
    
    return 0;
}
#include <stdio.h>
int task3(int* arr, int size, int start_index){
    if (start_index < 0 || start_index >= size){
    return -1;
    }
    int* start_ptr = arr + start_index;
    int* end_ptr = arr + size;
    int max_count = 0;
    int samy_chasty = *start_ptr;
    for (int* podh = start_ptr; podh < end_ptr; podh++) {
        int podh_count = 0;
        for (int* checker = start_ptr; checker < end_ptr; checker++) {
            if (*checker == *podh) {
                podh_count+=1;
            }
        }
        if (podh_count > max_count) {
        max_count = podh_count;
        samy_chasty = *podh;
        }
    }
    return samy_chasty;

}
int main() {
    int arr[] = {1, 2, 3, 2, 4, 2, 5};
    int size = sizeof(arr) / sizeof(arr[0]);
    
    printf("%d\n", task3(arr, size, 2));
    
    return 0;
}
*/
#include<stdio.h>
void task4( int* arr1, int* arr2,int size){
    for (int i=0;i<size;i++){
        *(arr2 + i) = *(arr1 + i);
    }
}
int main(){
    int arr1[]={6,5,4,3,7,5,455,54,5};
    int arr2[sizeof(arr1)];
    int size=sizeof(arr1)/sizeof(int);
    task4(arr1, arr2,size);
    for (int i=0;i<size;i++){

        printf("%d ",arr2[i]);
    }
}



