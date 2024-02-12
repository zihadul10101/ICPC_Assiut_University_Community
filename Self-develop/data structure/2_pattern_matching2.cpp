#include<bits/stdc++.h>
using namespace std;

char F(char S, char I, int state[][3]) {
    return state[S][I];
}

int main() {
    char T[] = "abcaabaca";
    char P[] = "acba";
    int N, K, S, I, INDEX;
    int state[4][3];

    // Define the transition table
	//1st row
    state[0][0] = 1;
    state[0][1] = 0;
    state[0][2] = 0;
    //2nd row
    state[1][0] = 2;
    state[1][1] = 0;
    state[1][2] = 0;
	//3rd row
    state[2][0] = 2;
    state[2][1] = 3;
    state[2][2] = 0;
		//4rd row
    state[3][0] = -1;
    state[3][1] = 0;
    state[3][2] = 0;


    N = strlen(T); // text length  N=T.length()
    K = 0;
    S = 0;

    while (K < N && S != -1) {// 0<9
        if (T[K] == 'a') {
            I = 0;
        } else if (T[K] == 'b') {
            I = 1;
        } else {
            // Handle the case when T[K] is not 'a' or 'b'
            I = 2;
        }

        S = F(S, I, state);
        K = K + 1;
    }
	

    if (S == -1) {
        INDEX = K - strlen(P);
    } else {
        INDEX = -1;
    }

    cout << "P" << "=" << P << endl;
    cout << "T" << "=" << T << endl;
   
    if (INDEX != -1) {
        cout << "Index of P in T is =" << INDEX << endl;
    } else {
        cout << "P does not exist in T" << endl;
    }

    return 0;
}
