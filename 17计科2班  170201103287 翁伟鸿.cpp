#include<stdio.h>
int BinarySearch(int a[], int n, int key){
    int left = 0;
    int right = n - 1;
    while(left<= right){
        int mid = (left + right)/2;
        int midVal = a[mid];
        if(midVal<key)
            left = mid + 1;
        else if(midVal>key)
            right = mid - 1;
        else
            return mid;
    }
    return -1;
}
int main(){
    int i, tar,res;
    int a[8]={-10,0,3,9,12,24,65,99};
    for(i=0; i<8; i++)
        printf("%d\t", a[i]);
    printf("\n��������Ҫ���ҵ�Ԫ�أ�");
    scanf("%d",&tar);
    res = BinarySearch(a,8,tar);
    if(res == -1)
        printf("����ʧ�� \n");
    else
        printf ("���ҳɹ� \n");
    return 0;
}
