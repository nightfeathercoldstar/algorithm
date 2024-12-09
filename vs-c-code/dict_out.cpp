//#include <iostream>
//#include <vector>
//#include <unordered_set>
//#include <queue>
//
//using namespace std;
//
//int main() {
//    int M, N;
//    cin >> M >> N;
//
//    vector<int> words(N);
//    for (int i = 0; i < N; ++i) {
//        cin >> words[i];
//    }
//
//    unordered_set<int> memory; // 用于存储当前内存中的单词
//    queue<int> order;          // 用于记录单词进入内存的顺序
//    int dictionary_lookup_count = 0;
//
//    for (int i = 0; i < N; ++i) {
//        int word = words[i];
//        // 如果单词不在内存中
//        if (memory.find(word) == memory.end()) {
//            dictionary_lookup_count++; // 需要查词典
//            if (memory.size() >= M) {
//                // 内存已满，清除最早进入内存的单词
//                int oldest_word = order.front();
//                order.pop();
//                memory.erase(oldest_word);
//            }
//            // 添加新单词到内存
//            memory.insert(word);
//            order.push(word);
//        }
//    }
//
//    cout << dictionary_lookup_count << endl;
//    return 0;
//}
