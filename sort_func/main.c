#include <stdio.h>
void bubble_sort (int *nums, int length) {
    for(int i=length-1; i>=0;i--) {
        for(int j=0;j<i;j++) {
            if(nums[j] > nums[j+1]) {
                int temp = nums[j];
                nums[j]=nums[j+1];
                nums[j+1] = temp;
            }
        }
    }
}

void insert_sort(int *nums, int length) {
    for(int i=0;i<length;i++) {
        int position = i;
        int pivot = nums[i];
        for (int j=i-1;j>=0;j--) {
            if(pivot < nums[j]) {
                nums[j+1] = nums[j];
                position=position-1;
            } else {break;}
        nums[position] = pivot;
        }
    }
}

int partition(int *nums, int left, int right) {
    int pivot = nums[left];
    int flag =0;
    while (left < right) {
        if(flag==0) {
            if (nums[right] < pivot) {
                nums[left] = nums[right];
                left = left + 1;
                flag = 1;
            } else {
                right = right -1;
            }
        } else {
            if(nums[left] > pivot) {
                nums[right] = nums[left];
                right = right -1;
                flag = 0;
            } else {
                left = left + 1;
            }
        }
    }
    nums[right] = pivot;
    return right;
}

void quick_sort (int *nums, int left, int right) {
    if (left == right) {return;}
    int idx = partition(nums, left, right);
    if (idx-1 > left) {
        quick_sort(nums, left, idx-1);
    }
    if (idx+1 < right) {
        quick_sort(nums, idx+1, right);
    }

}

void merge(int *nums, int l, int mid, int r) {
    int left_length = mid-l+1;
    int right_length = r -mid ;
    printf("left length=%d, right length=%d\n", left_length, right_length);
    int left[left_length];
    int right[right_length];
    for (int i=0;i<left_length;i++) {
        left[i] = nums[i];
        printf("%d", nums[i]);
    }
    for (int j=0; j < right_length;j++) {
        right[j] = nums[j+mid];
        printf("%d", right[j]);
    }
    printf("l=%d, mid=%d, r=%d\n", l,mid,r);
    int k =0;
    int i =0;
    int j = 0;
    while (i< left_length && j < right_length) {
        if(left[i] < right[j]) {
            nums[k] = left[i];
            i++;
            k++;
        } else {
            nums[k] = right[j];
            j++;
            k++;
        }
    }
    while(i < left_length) {
        nums[k] = left[i];
         i = i + 1;
         k = k + 1;
    }
    while(j< right_length) {
        nums[k] = right[j];
        j = j + 1;
        k = k + 1;
    }
}
void merge_sort(int *nums, int l, int r) {
    if(l == r ) {return;}
    int mid = (r+l)/2;

    merge_sort(nums, l, mid);
    for (int i =l; i <=mid; i++) {
        printf("%d\n", nums[i]);
    }
    merge_sort(nums, mid+1, r);
    for (int i =mid+1; i <=r; i++) {
        printf("%d\n", nums[i]);
    }
    //printf("merge stort  l = %d,  mid=%d, r=%d\n", l, mid, r);
    merge(nums, l, mid, r);
}

int main() {

    int nums1[5] = {5,4,3,2,1};
    bubble_sort(nums1, 5);
    printf("bubble sort result is \n");
    for(int i=0; i < 5; i++) {
        printf("%d\n", nums1[i]);
    }

    int nums2[4] = {8,7,9,6};
    insert_sort(nums2, 4);
    printf("insert sort result is \n");
    for(int i=0; i < 4; i++) {
        printf("%d\n", nums2[i]);
    }

    int nums3[6] = {8,1,0,5,6,7};
    quick_sort(nums3, 0,5);
    printf("quick sort result is \n");
    for(int i=0; i < 6; i++) {
        printf("%d\n", nums3[i]);
    }

    int nums4[] = {10,5,7,6};
    int n = sizeof(nums4)/sizeof(nums4[0]);
    merge_sort(nums4, 0, n-1);
    printf("merge sort result is \n");
    for(int i=0; i < n; i++) {
        printf("%d\n", nums4[i]);
    }

    return 0;
}
