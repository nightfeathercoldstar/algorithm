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
////        num += 1; // ���������������Ҫ��һ��
////    }
////
////    // ��̬�����ά����
////    char** score = new char* [num];
////    for (int i = 0; i < num; i++) {
////        score[i] = new char[11]; // ÿ��11���ַ�
////    }
////
////    // �� vector �е��ַ����浽��ά������
////    for (int i = 0; i < num; i++) {
////        for (int j = 0; j < 11; j++) {
////            int index = i * 11 + j; // ������ vector �е�����
////            if (index < si) {
////                score[i][j] = pp[index]; // �� vector ��ȡֵ
////            }
////            else {
////                score[i][j] = '\0'; // ���ʣ��Ĳ���Ϊ '\0'
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
////        num += 1; // ���������������Ҫ��һ��
////    }
////
////    // ��̬�����ά����
////    char** score = new char* [num];
////    for (int i = 0; i < num; i++) {
////        score[i] = new char[21]; // ÿ��21���ַ�
////    }
////
////    // �� vector �е��ַ����浽��ά������
////    for (int i = 0; i < num; i++) {
////        for (int j = 0; j < 21; j++) {
////            int index = i * 21 + j; // ������ vector �е�����
////            if (index < si) {
////                score[i][j] = pp[index]; // �� vector ��ȡֵ
////            }
////            else {
////                score[i][j] = '\0'; // ���ʣ��Ĳ���Ϊ '\0'
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
//        // ����Ƿ����һ��
//        if ((w_score >= winScore && w_score - l_score >= 2) || (l_score >= loseScore && l_score - w_score >= 2)) {
//            w_scores.push_back(w_score);
//            l_scores.push_back(l_score);
//            w_score = 0; // ���÷���
//            l_score = 0; // ���÷���
//        }
//    }
//
//    // �������һ��δ���������
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
//    // ��ӡ 11 ���ƵĽ��
//    calculateScores(pp, 11, 11);
//    printf("\n"); // ���зָ�
//    // ��ӡ 21 ���ƵĽ��
//    calculateScores(pp, 21, 21);
//
//    return 0;
//}
