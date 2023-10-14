#include<iostream>
#include<glad/glad.h>
#define GLFW_INCLUDE_NONE
#include<GLFW/glfw3.h>





int main()
{
    GLFWwindow* window;

    if (!glfwInit()) {
        return -1;
    }
    //创建window和OpenGL上下文
    window = glfwCreateWindow(960, 640, "hello world", NULL, NULL);
    if (!window) {
        glfwTerminate();
        return -1;
    }

    glfwMakeContextCurrent(window);
    gladLoadGL();  

    while (!glfwWindowShouldClose(window)) {
        glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
        glClearColor(49.f / 255, 77.f / 255,  121.f / 255, 1.f);
        glfwSwapBuffers(window);
        glfwPollEvents();

    }

    glfwTerminate();
    return 0;


    std::cout << "Hello World!\n";
}
