////#include<iostream>
////#include<cstdio>
////#include<cmath>
////#include<vector>
////
////using namespace std;
////
////void EO(const std::vector<char>& pp, int si) {
////    int num = si / 11;
////    if (si % 11 != 0) {
////        num += 1; // 如果有余数，则需要多一行
////    }
////
////    // 动态分配二维数组
////    char** score = new char* [num];
////    for (int i = 0; i < num; i++) {
////        score[i] = new char[11]; // 每行11个字符
////    }
////
////    // 将 vector 中的字符保存到二维数组中
////    for (int i = 0; i < num; i++) {
////        for (int j = 0; j < 11; j++) {
////            int index = i * 11 + j; // 计算在 vector 中的索引
////            if (index < si) {
////                score[i][j] = pp[index]; // 从 vector 中取值
////            }
////            else {
////                score[i][j] = '\0'; // 填充剩余的部分为 '\0'
////            }
////        }
////    }
////    int w_score=0, l_score=0;
////    for (int i = 0; i < num; i++) {
////        for (int j = 0; j < 11; j++) {
////            if (score[i][j] == 'W')w_score++;
////            if (score[i][j] == 'L')l_score++;
////        }
////        printf("%d:%d\n", w_score, l_score);
////        w_score = 0;
////        l_score = 0;
////    }
////}
////
////void TO(const std::vector<char>& pp, int si) {
////    int num = si / 21;
////    if (si % 21 != 0) {
////        num += 1; // 如果有余数，则需要多一行
////    }
////
////    // 动态分配二维数组
////    char** score = new char* [num];
////    for (int i = 0; i < num; i++) {
////        score[i] = new char[21]; // 每行21个字符
////    }
////
////    // 将 vector 中的字符保存到二维数组中
////    for (int i = 0; i < num; i++) {
////        for (int j = 0; j < 21; j++) {
////            int index = i * 21 + j; // 计算在 vector 中的索引
////            if (index < si) {
////                score[i][j] = pp[index]; // 从 vector 中取值
////            }
////            else {
////                score[i][j] = '\0'; // 填充剩余的部分为 '\0'
////            }
////        }
////    }
////    int w_score = 0, l_score = 0;
////    for (int i = 0; i < num; i++) {
////        for (int j = 0; j < 21; j++) {
////            if (score[i][j] == 'W')w_score++;
////            if (score[i][j] == 'L')l_score++;
////        }
////        printf("%d:%d\n", w_score, l_score);
////        w_score = 0;
////        l_score = 0;
////    }
////}
////
////int main() {
////	vector<char>pp;
////	char input;
////	while (true) {
////		cin >> input;
////		if (input == 'E') break;
////		pp.push_back(input);
////	}
////	int si = pp.size();
////	/*printf("%d", si);*/
////    EO(pp, si);
////    printf("\n");
////    TO(pp, si);
////	return 0;
////}	  
//#include<iostream>
//#include<vector>
//
//using namespace std;
//
//void printResults(const vector<int>& w_scores, const vector<int>& l_scores) {
//    for (size_t i = 0; i < w_scores.size(); i++) {
//        printf("%d:%d\n", w_scores[i], l_scores[i]);
//    }
//}
//
//void calculateScores(const vector<char>& pp, int winScore, int loseScore) {
//    int w_score = 0, l_score = 0;
//    vector<int> w_scores, l_scores;
//    if (pp.empty()) {
//        printf("0:0\n");
//        return;
//    }
//
//    for (char result : pp) {
//        if (result == 'W') {
//            w_score++;
//        }
//        else if (result == 'L') {
//            l_score++;
//        }
//
//        // 检查是否结束一局
//        if ((w_score >= winScore && w_score - l_score >= 2) || (l_score >= loseScore && l_score - w_score >= 2)) {
//            w_scores.push_back(w_score);
//            l_scores.push_back(l_score);
//            w_score = 0; // 重置分数
//            l_score = 0; // 重置分数
//        }
//    }
//
//    // 处理最后一局未结束的情况
//    if (w_score > 0 || l_score > 0) {
//        w_scores.push_back(w_score);
//        l_scores.push_back(l_score);
//    }
//
//    printResults(w_scores, l_scores);
//    if (pp.size() == winScore)printf("0:0\n");
//}
//
//int main_3() {
//    vector<char> pp;
//    char input;
//    while (true) {
//        cin >> input;
//        if (input == 'E') break;
//        pp.push_back(input);
//    }
//
//    // 打印 11 分制的结果
//    calculateScores(pp, 11, 11);
//    printf("\n"); // 空行分隔
//    // 打印 21 分制的结果
//    calculateScores(pp, 21, 21);
//
//    return 0;
//}
