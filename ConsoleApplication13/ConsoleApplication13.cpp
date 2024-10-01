#include <iostream>

using namespace std;

//1-ci
//void menfi(int* arr, int size, int*& yeniArr, int& yeniSize) {
//    yeniSize = 0;
//    yeniArr = new int[size];
//    for (int i = 0; i < size; ++i) {
//        if (arr[i] >= 0) {
//            yeniArr[yeniSize++] = arr[i];
//        }
//    }
//    yeniArr = (int*)realloc(yeniArr, yeniSize * sizeof(int));
//}




//2-ci
//void massivleriBirlestir(int* A, int M, int* B, int N, int*& C, int& C_size) {
//    C_size = M + N;
//    C = new int[C_size];
//    for (int i = 0; i < M; ++i) {
//        C[i] = A[i];
//    }
//    for (int i = 0; i < N; ++i) {
//        C[M + i] = B[i];
//    }
//}






//3-cu
//void ortaqElementleriTap(int* A, int M, int* B, int N, int*& C, int& C_size)
//{
//    C_size = 0;
//    C = new int[M + N];
//    for (int i = 0; i < M; ++i)
//    {
//        for (int j = 0; j < N; ++j)
//        {
//            if (A[i] == B[j]) {
//                bool varMi = false;
//                for (int k = 0; k < C_size; ++k)
//                {
//                    if (C[k] == A[i])
//                    {
//                        varMi = true;
//                        break;
//                    }
//                }
//                if (!varMi) C[C_size++] = A[i];
//            }
//        }
//    }
//    int* temp = new int[C_size];
//    for (int i = 0; i < C_size; ++i) {
//        temp[i] = C[i];
//    }
//    delete[] C;
//    C = temp;
//}







//4-cu
//void A_daOlmayanElementleriTap(int* A, int M, int* B, int N, int*& C, int& C_size) {
//    C_size = 0;
//    C = new int[M];
//    for (int i = 0; i < M; ++i) {
//        bool varMi = false;
//        for (int j = 0; j < N; ++j) {
//            if (A[i] == B[j]) {
//                varMi = true;
//                break;
//            }
//        }
//        if (!varMi) {
//            bool tekrarVarMi = false;
//            for (int k = 0; k < C_size; ++k) {
//                if (C[k] == A[i]) {
//                    tekrarVarMi = true;
//                    break;
//                }
//            }
//            if (!tekrarVarMi) {
//                C[C_size++] = A[i];
//            }
//        }
//    }
//    int* temp = new int[C_size];
//    for (int i = 0; i < C_size; ++i) {
//        temp[i] = C[i];
//    }
//    delete[] C;
//    C = temp;
//}





//5-ci
//void ortaqOlmayanElementleriTap(int* A, int M, int* B, int N, int*& C, int& C_size) {
//    C_size = 0;
//    C = new int[M + N];
//    for (int i = 0; i < M; ++i) {
//        C[C_size++] = A[i];
//    }
//    for (int j = 0; j < N; ++j) {
//        bool varMi = false;
//        for (int i = 0; i < M; ++i) {
//            if (B[j] == A[i]) {
//                varMi = true;
//                break;
//            }
//        }
//        if (!varMi) {
//            bool tekrarVarMi = false;
//            for (int k = 0; k < C_size; ++k) {
//                if (C[k] == B[j]) {
//                    tekrarVarMi = true;
//                    break;
//                }
//            }
//            if (!tekrarVarMi) {
//                C[C_size++] = B[j];
//            }
//        }
//    }
//    int* temp = new int[C_size];
//    for (int i = 0; i < C_size; ++i) {
//        temp[i] = C[i];
//    }
//    delete[] C;
//    C = temp;
//}



int main()
{
    //1-ci
    //int size;
    //cout << "Massivin olcusu: ";
    //cin >> size;
    //int* arr = new int[size];
    //cout << "Massivi daxil edin: ";
    //for (int i = 0; i < size; ++i) {
    //    cin >> arr[i];
    //}
    //int* yeniArr = nullptr;
    //int yeniSize;
    //menfi(arr, size, yeniArr, yeniSize);
    //cout << "Musbet ededler: ";
    //for (int i = 0; i < yeniSize; ++i) {
    //    cout << yeniArr[i] << " ";
    //}
    //cout << endl;




    //2-ci
    //int M, N;
    //cout << "A massivinin olcusunu daxil edin (M): ";
    //cin >> M;
    //cout << "B massivinin olcusunu daxil edin (N): ";
    //cin >> N;
    //int* A = new int[M];
    //int* B = new int[N];
    //cout << "A massivini daxil edin: ";
    //for (int i = 0; i < M; ++i) {
    //    cin >> A[i];
    //}
    //cout << "B massivini daxil edin: ";
    //for (int i = 0; i < N; ++i) {
    //    cin >> B[i];
    //}
    //int* C = nullptr;
    //int C_size;
    //massivleriBirlestir(A, M, B, N, C, C_size);
    //cout << "Yeni C massivi: ";
    //for (int i = 0; i < C_size; ++i) {
    //    cout << C[i] << " ";
    //}
    //cout << endl;



    //3-cu
    //int M, N;
    //cout << "A massivinin olcusunu daxil edin (M): ";
    //cin >> M;
    //cout << "B massivinin olcusunu daxil edin (N): ";
    //cin >> N;
    //int* A = new int[M];
    //int* B = new int[N];
    //cout << "A massivini daxil edin: ";
    //for (int i = 0; i < M; ++i) {
    //    cin >> A[i];
    //}
    //cout << "B massivini daxil edin: ";
    //for (int i = 0; i < N; ++i) {
    //    cin >> B[i];
    //}
    //int* C = nullptr;
    //int C_size;
    //ortaqElementleriTap(A, M, B, N, C, C_size);
    //cout << "Ortak elementler: ";
    //for (int i = 0; i < C_size; ++i) {
    //    cout << C[i] << " ";
    //}
    //cout << endl;





    //4-cu
    //int M, N;
    //cout << "A massivinin olcusunu daxil edin (M): ";
    //cin >> M;
    //cout << "B massivinin olcusunu daxil edin (N): ";
    //cin >> N;
    //int* A = new int[M];
    //int* B = new int[N];
    //cout << "A massivini daxil edin: ";
    //for (int i = 0; i < M; ++i) {
    //    cin >> A[i];
    //}
    //cout << "B massivini daxil edin: ";
    //for (int i = 0; i < N; ++i) {
    //    cin >> B[i];
    //}
    //int* C = nullptr;
    //int C_size;
    //A_daOlmayanElementleriTap(A, M, B, N, C, C_size);
    //cout << "A-da olub B-da olmayan elementler: ";
    //for (int i = 0; i < C_size; ++i) {
    //    cout << C[i] << " ";
    //}
    //cout << endl;







    //5-ci
    //int M, N;
    //cout << "A massivinin olcusunu daxil edin (M): ";
    //cin >> M;
    //cout << "B massivinin olcusunu daxil edin (N): ";
    //cin >> N;
    //int* A = new int[M];
    //int* B = new int[N];
    //cout << "A massivini daxil edin: ";
    //for (int i = 0; i < M; ++i) {
    //    cin >> A[i];
    //}
    //cout << "B massivini daxil edin: ";
    //for (int i = 0; i < N; ++i) {
    //    cin >> B[i];
    //}
    //int* C = nullptr;
    //int C_size;
    //ortaqOlmayanElementleriTap(A, M, B, N, C, C_size);
    //cout << "A və B-nin ortaq olmayan elementleri: ";
    //for (int i = 0; i < C_size; ++i) {
    //    cout << C[i] << " ";
    //}
    //cout << endl;
}

