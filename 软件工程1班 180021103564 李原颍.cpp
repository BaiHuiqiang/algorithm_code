 #include <iostream>  
  
using namespace std;

//��������
int BinarySearch(int *array, int aSize, int n)//�������顢�����ѧ������ֵ
{

    if ( array == NULL || aSize == 0 )//�������Ϊ���򷵻�-1
        return -1;

    int left = 0;
    int right = aSize - 1;
    int mid = 0;

    while ( left <= right )
    {
        mid = (left + right )/2;

        if ( array[mid] < n)//���n����mid������Ҳಿ�� 
            left = mid + 1;
        else if ( array[mid] > n )//���nС��mid�������ಿ�� 
            right = mid - 1;
        else
            return mid;
    }
    return -1;
}

int main()
{
    int array[10];
    for (int i=0; i<10; i++)
        array[i] = i;

    cout<<"λ����:"<<BinarySearch(array, 10, 6)<<endl;

    return 0;
}
