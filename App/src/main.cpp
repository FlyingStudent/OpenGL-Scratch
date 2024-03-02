#include<GL\glew.h>
#include<GLFW\glfw3.h>
#include<iostream>
int main()
{
	GLFWwindow* window;
	if (!glfwInit())
		return 0;
	window = glfwCreateWindow(640, 480, "Hello,Trig!", nullptr, nullptr);
	if (!window)
	{
		glfwTerminate();
		return 0;
	}
	glfwMakeContextCurrent(window);
	//glew init
	if (glewInit())
	{
		std::cout << "Error: Failed to initialize glew library!" << ",line: " << __LINE__ - 2 << ",file: " << __FILE__ << std::endl;
		glfwTerminate();
		return 0;
	}
	while (!glfwWindowShouldClose(window))
	{
		glClear(GL_COLOR_BUFFER_BIT);
		//render
		glColor4f(1.0f, 0.0f, 0.0f, 1.0f);
		glBegin(GL_TRIANGLES);
		glVertex2f(0.5f, -0.5f);
		glVertex2f(0.0f, 0.5f);
		glVertex2f(-0.5f, -0.5f);
		glEnd();
		glfwSwapBuffers(window);
		glfwPollEvents();
	}
	glfwTerminate();
	return 0;

	return 0;
}