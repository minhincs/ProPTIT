# Cấu trúc dữ liệu ngăn xếp - Stack

- Là kiểu cấu trúc dữ liệu hoạt động theo nguyên tắc Last In First Out (LIFO) hoặc First In Last Out (FILO). Có nghĩa là phần tử đầu tiên được thêm vào Stack sẽ là phần tử cuối cùng được lấy ra và ngược lại, phần tử cuối cùng được thêm vào sẽ là phần tử đầu tiên được lấy ra.
- Có thể tưởng tượng Stack như 1 cái hộp chữ nhật như sau:

```
+--------
|A B      <- C (add 'C' to the stack)
+--------

+--------
|A B C ---->   (last in (C) first out (also C))
+--------
```

## Khai báo Stack
- Để sử dụng được stack trong C++, ta cần trước hết khai báo thư viện stack:
```cpp
#include <stack>
```
- **Lưu ý:** Thư viện `stack` đã bao gồm trong thư viện `bits/stdc++.h>`
- Để khai báo một stack, ta sử dụng cú pháp:
```cpp
stack<data_type> stack_name;
```
- VD: khai báo một stack mang kiểu dữ liệu `int`
```cpp
stack<int> st;
```

## Các thao tác trên Stack
- **push**: Đẩy một phần tử vào stack
```cpp
stack<char> st;
st.push('A'); 
st.push('B'); 
st.push('C'); 

//    +--------
// st | A B C
//    +--------
```

- **pop**: Xóa phần tử trên cùng của stack
```cpp
st.pop();

//    +--------
// st | A B
//    +--------
```

- **top**: Lấy phần tử trên cùng của stack
```cpp
cout << st.top();

// Output:
// B
```

- **size**: Lấy độ dài của stack
```cpp
cout << st.size();

// Output:
// 2
```

- **empty**: Kiểm tra xem stack có rỗng không
```cpp
st.pop();
st.pop();

if(st.empty())
    cout << "Empty\n";
else
    cout << "Not empty\n";

// Output:
// Empty
```
