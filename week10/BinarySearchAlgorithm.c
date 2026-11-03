#include <stdio.h>

int binarySearch(int arr[], int size, int target)
{
    int start = 0;  //시작 위치를 0으로 설정한다.
    int end = size-1;   //끝 위치를 배열크기 -1로 설정한다. 

    while(start <= end) //시작 위치가 끝과 작거나 같은 경우에 반복한다. 
    {
        int mid = (start+end)/2;    //중간 위치를 계산한다.

        if (arr[mid] == target) //만약 중간 위치의 값이 찾을 값과 같다면 
        {
            return mid; //중간 위치를 반환하고 탐색을 종료한다. 
        }
        else if(arr[mid] < target)  //그렇지 않고 중간 위치의 값이 찾을 값보다 작다면
        {
            start = mid + 1;    //시작 위치를 중간+1로 변경한다.
        }
        else                    //그렇지 않다면
        {
            end = mid - 1;      //끝위치를 mid - 1 로 변경한다. 
        }
    }
    return - 1;                 //반복이 종료될 때까지 값을 찾지 못했다면 -1을 반환한다.
}

int main()
{
    int arr[] = {2,5,8,12,16,23,38,56,72,91};   //이분탐색(이진탐색)은 정렬된 배열에서만 작동한다.
    int size = sizeof(arr) / sizeof(arr[0]);
    int target = 23;

    int result = binarySearch(arr,size,target);

    if (result != -1)
    {
        printf("원소 %d는 인덱스 %d에 존재합니다.\n",target,result);
    }
    else
    {
        printf("원소 %d를 찾지 못했습니다.",target);
    }
    return 0;
}