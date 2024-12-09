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
//    unordered_set<int> memory; // ���ڴ洢��ǰ�ڴ��еĵ���
//    queue<int> order;          // ���ڼ�¼���ʽ����ڴ��˳��
//    int dictionary_lookup_count = 0;
//
//    for (int i = 0; i < N; ++i) {
//        int word = words[i];
//        // ������ʲ����ڴ���
//        if (memory.find(word) == memory.end()) {
//            dictionary_lookup_count++; // ��Ҫ��ʵ�
//            if (memory.size() >= M) {
//                // �ڴ������������������ڴ�ĵ���
//                int oldest_word = order.front();
//                order.pop();
//                memory.erase(oldest_word);
//            }
//            // ����µ��ʵ��ڴ�
//            memory.insert(word);
//            order.push(word);
//        }
//    }
//
//    cout << dictionary_lookup_count << endl;
//    return 0;
//}
