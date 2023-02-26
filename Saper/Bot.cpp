//#include <iostream>
//#include <fstream>
//
//using namespace std;
//
//int main()
//{
//	ifstream fin("field.txt");
//	ofstream fout("comand.txt", ios_base::trunc);
//	if (!fin.is_open()) {
//		cout << "No field.txt file";
//		return 0;
//	}
//	if (!fout.is_open()) {
//		cout << "No comand.txt file";
//		return 0;
//	}
//	int n, m, k;
//	fin >> n >> m >> k;
//	for (int i = 0; i < n; i++) {
//		for (int j = 0; j < m; j++) {
//			int x;
//			fin >> x;
//			if (x == -2) {
//				fout << "\\o " << i + 1 << ' ' << j + 1;
//				fin.close();
//				fout.close();
//				return 0;
//			}
//		}
//	}
//}
