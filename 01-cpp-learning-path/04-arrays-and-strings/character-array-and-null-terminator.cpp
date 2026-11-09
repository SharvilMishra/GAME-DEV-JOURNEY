# include <iostream>
using namespace std;
int main(){
    char name[]={'S','h','a','r','v','i','l','\0'}; // null character is added to mark end of string
    cout << name << endl;
    return 0;

}
/*


---

## 🧠 1. How your original array looks in memory

Your code:

```cpp
char name[7] = {'S','h','a','r','v','i','l'};
```

### 📦 Memory representation:

| Index | Value |
| ----- | ----- |
| 0     | 'S'   |
| 1     | 'h'   |
| 2     | 'a'   |
| 3     | 'r'   |
| 4     | 'v'   |
| 5     | 'i'   |
| 6     | 'l'   |

👉 Notice: **No `'\0'` (null character)**

---

## ⚠️ What happens when you do:

```cpp
cout << name;
```

`cout` treats `name` as a **C-string**, so it:

➡️ Starts printing from index 0
➡️ Keeps going until it finds `'\0'`

But your array **doesn’t have `'\0'`**, so it will:

* Print: `Sharvil`
* Then continue reading **random memory** after it 😬
* Until it *accidentally* finds `'\0'`

👉 This is called **undefined behavior**

---

## ✅ 2. Correct memory with null terminator

```cpp
char name[8] = {'S','h','a','r','v','i','l','\0'};
```

### 📦 Memory:

| Index | Value |
| ----- | ----- |
| 0     | 'S'   |
| 1     | 'h'   |
| 2     | 'a'   |
| 3     | 'r'   |
| 4     | 'v'   |
| 5     | 'i'   |
| 6     | 'l'   |
| 7     | '\0'  |

👉 Now `cout` stops correctly after printing `Sharvil`

---

## 🔥 3. What string literal does automatically

```cpp
char name[] = "Sharvil";
```

Compiler actually stores:

```cpp
{'S','h','a','r','v','i','l','\0'}
```

👉 So you don’t need to worry about `'\0'`

---

## 🧪 4. Visualizing how cout reads memory

Think of it like this:

```
Memory:
[S][h][a][r][v][i][l][?][?][\0]

cout prints →
 S → h → a → r → v → i → l → ? → ? → stops at \0
```

---

## 🚀 5. Why `'\0'` is important

* Marks **end of string**
* Used by:

  * `cout`
  * `strlen()`
  * `strcpy()`
  * many C functions

---

## 💡 Final takeaway

👉 In C-style strings:

* Always ensure **null termination**
* Otherwise → **garbage output / crashes**

---

*/