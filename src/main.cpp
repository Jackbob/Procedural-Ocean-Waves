
#include "GL4Backend.h"

#include "shaders.h"

int main() {

    GL4Backend gl4Backend;
    gl4Backend.setup460coreWindow(2000, 1000, "Water");
    gl4Backend.compileShaders(vertexShaderSource, fragmentShaderSource);

    gl4Backend.createSquare();

    while(!glfwWindowShouldClose(gl4Backend.getWindow())){
        gl4Backend.draw();
    }

    return 0;
}