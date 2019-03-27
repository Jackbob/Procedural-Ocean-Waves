//
// Created by jakob on 2019-03-21.
//

#ifndef PROCEDURAL_SHADERS_H
#define PROCEDURAL_SHADERS_H

const char *vertexShaderSource = R"(#version 460 core
                                    layout (location = 0) in vec3 aPos;
                                    void main()
                                    {
                                        gl_Position = vec4(aPos.x, aPos.y, aPos.z, 1.0);
                                    }
                                 )";

const char *fragmentShaderSource = R"(#version 460 core
                                    out vec4 FragColor;

                                    void main()
                                    {
                                      FragColor = vec4(1.0f, 0.0f, 0.0f, 1.0f);
                                    }
                                   )";

#endif //PROCEDURAL_SHADERS_H
