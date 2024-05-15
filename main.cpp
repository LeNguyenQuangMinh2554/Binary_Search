#include <iostream>
using namespace std;

// thuật toán tìm kiếm nhị phân:
// áp dụng được cho các danh sách phần tử đã được sắp xếp từ bé đến lớn hoặc ngược lại
// Ưu điểm: rất  nhanh và mạnh mẽ
// Nhược: chỉ áp dụng cho các danh sách phần tử đã được sắp xếp.

// Nguyên lý: cho 3 biến right, left và middle, cắm ở đầu, giữa và cuối mảng,
// nếu phần tử không nằm ở bên trái, thì xóa bên trái, và tìm kiếm bên phải và ngược lại

int binSearch(int arr[], int k) { // truyền vào mảng và giá trị cần tìm
    int left = 0;
    int right = 9;
    while (left <= right) {
        int middle = (left + right) / 2;
        if(arr[middle] == k) {
            return middle;
        } else if (arr[middle] < k) {
            left = middle + 1;
        } else {
            right = middle - 1;
        }
     }
    return -1;
}


int main () {
    int arr[10] = {11, 23, 32, 44, 51, 69, 70, 86, 88, 94};
    int index;
    int k;
    while (true) {
        cout << "Nhap vao mot trong cac so duoi day de tim kiem vi tri cua chung: \n "
                "{11, 23, 32, 44, 51, 69, 70, 86, 88, 94} \n "
                "Vui long nhap so ban muon: ";
        cin >> k;
        index = binSearch(arr, k);
        cout << "Vi tri cua so " << k << " la: " << index << endl;
    }
}