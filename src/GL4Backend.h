//
// Created by jakob on 2019-03-21.
//

#ifndef PROCEDURAL_GL4BACKEND_H
#define PROCEDURAL_GL4BACKEND_H

#include "../modules/glad/include/glad/glad.h"
#include "GLFW/glfw3.h"
#include "glm/glm.hpp"

#include <string>
#include <iostream>

class GL4Backend {
    GLFWwindow* window;
    int shaderProgram, vertexShader, fragmentShader;
    unsigned int VBO, VAO, EBO;

public:
    GL4Backend() = default;
    GLFWwindow* getWindow(){return window;};

    void setup460coreWindow(int height, int width, std::string name);
    void compileShaders(const char* vertexShaderSource, const char* fragmentShaderSource);
    void draw();
    void createSquare();


private:

};


#endif //PROCEDURAL_GL4BACKEND_H
