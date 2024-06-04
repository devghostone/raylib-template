#include <iostream>
#include <raylib.h>

using namespace std;

int main(){
    InitWindow(500, 500, "Hello");
    while(!WindowShouldClose()){
        BeginDrawing();
        EndDrawing();
    }
    CloseWindow();
    cout << "Hello World" << endl;
    return 0;
}