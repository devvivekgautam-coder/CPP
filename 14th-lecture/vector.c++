// ### 🔥 C++ `vector` ke **saare important functions** (Easy Hinglish + Examples)

// Header:

// ```cpp
// #include <vector>
// ```

// ---

// ## 🔹 1. `push_back()`

// 👉 Vector ke **end me element add** karta hai

// ```cpp
// v.push_back(10);
// ```

// ---

// ## 🔹 2. `pop_back()`

// 👉 **Last element remove** karta hai

// ```cpp
// v.pop_back();
// ```

// ---

// ## 🔹 3. `size()`

// 👉 Vector me **total elements** batata hai

// ```cpp
// cout << v.size();
// ```

// ---

// ## 🔹 4. `capacity()`

// 👉 Vector ki **memory capacity** batata hai

// ```cpp
// cout << v.capacity();
// ```

// ---

// ## 🔹 5. `clear()`

// 👉 Vector ke **saare elements delete** karta hai

// ```cpp
// v.clear();
// ```

// ---

// ## 🔹 6. `empty()`

// 👉 Check karta hai vector empty hai ya nahi

// ```cpp
// if(v.empty())
//     cout << "Vector empty hai";
// ```

// ---

// ## 🔹 7. `front()`

// 👉 **First element** return karta hai

// ```cpp
// cout << v.front();
// ```

// ---

// ## 🔹 8. `back()`

// 👉 **Last element** return karta hai

// ```cpp
// cout << v.back();
// ```

// ---

// ## 🔹 9. `at(index)`

// 👉 Index par value deta hai (safe method)

// ```cpp
// cout << v.at(2);
// ```

// ---

// ## 🔹 10. `insert()`

// 👉 Kisi specific position par element add karta hai

// ```cpp
// v.insert(v.begin() + 1, 50);
// ```

// ---

// ## 🔹 11. `erase()`

// 👉 Specific position ka element delete karta hai

// ```cpp
// v.erase(v.begin() + 2);
// ```

// Range delete:

// ```cpp
// v.erase(v.begin(), v.begin() + 2);
// ```

// ---

// ## 🔹 12. `resize()`

// 👉 Vector ka size change karta hai

// ```cpp
// v.resize(5);
// ```

// ---

// ## 🔹 13. `reserve()`

// 👉 Pehle se memory allocate karta hai

// ```cpp
// v.reserve(100);
// ```

// ---

// ## 🔹 14. `shrink_to_fit()`

// 👉 Extra memory free karta hai

// ```cpp
// v.shrink_to_fit();
// ```

// ---

// ## 🔹 15. `swap()`

// 👉 Do vectors ka data exchange karta hai

// ```cpp
// v1.swap(v2);
// ```

// ---

// ## 🔹 16. `assign()`

// 👉 Vector me naya data assign karta hai

// ```cpp
// v.assign(3, 100);
// ```

// Output: `100 100 100`

// ---

// ## 🔹 17. `begin()` & `end()`

// 👉 Iterator ke liye use hota hai

// ```cpp
// for(auto it = v.begin(); it != v.end(); it++)
//     cout << *it << " ";
// ```

// ---

// ## 🔹 18. `emplace_back()` ⭐

// 👉 `push_back` se fast (direct constructor call)

// ```cpp
// v.emplace_back(20);
// ```

// ---

// ## 🔹 19. `emplace()`

// 👉 Specific position par fast insert

// ```cpp
// v.emplace(v.begin()+1, 30);
// ```

// ---

// ## 🔹 20. `data()`

// 👉 Underlying array ka pointer deta hai

// ```cpp
// int* ptr = v.data();
// ```

// ---

// ## 🧠 **Exam / Viva Super Short Lines**

// * `push_back()` → add element at end
// * `pop_back()` → remove last element
// * `clear()` → remove all elements
// * `size()` → number of elements
// * `capacity()` → allocated memory
// * `at()` → safe access
// * `insert()` → insert at position
// * `erase()` → delete element

// ---

// ## ✅ Full Mini Example (Lab Ready)

// ```cpp
// #include <iostream>
// #include <vector>
// using namespace std;

// int main() {
//     vector<int> v;

//     v.push_back(10);
//     v.push_back(20);
//     v.push_back(30);

//     v.insert(v.begin()+1, 15);
//     v.pop_back();

//     for(int x : v)
//         cout << x << " ";

//     v.clear();
//     cout << "\nSize: " << v.size();

//     return 0;
// }
// ```

// ---

// Agar chaho to mai:

// * **MCQs**
// * **Hospital / Student project me vector ka use**
// * **Viva answers (1–2 line)**

// bhi bana deta hoon 😄
