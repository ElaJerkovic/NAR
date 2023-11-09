#include <iostream>
#include <string>

#include "Window.h"
#include "Renderer.h"
#include "Model.h"
#include "Shader.h"
#include "Texture.h"

#include "glm/glm.hpp"

const unsigned int SCR_WIDTH = 800;
const unsigned int SCR_HEIGHT = 600;

int main()
{
    Window window("Vjezba3", SCR_WIDTH, SCR_HEIGHT);
  
    Model model("res/models/rectangle.obj");
    Shader shader("res/shaders/vShader.glsl", "res/shaders/fShader.glsl");
    Texture tex("res/textures/container.jpg");
    Texture texture("res/textures/slika.jpg");

    Renderer render;
    while (!window.isClosed())
    {
        window.ProcessInput();
        render.Clear();

        //prvi zadatak:
        /*int uniform_location = glGetUniformLocation(shader.GetID(), "offset");
        glUniform4f(uniform_location, 0.7f, -0.9f, 0.0f, 1.0f);*/


        //drugi zadatak:
        /*int uniform_location = glGetUniformLocation(shader.GetID(), "color");
        glUniform4f(uniform_location, 0.129f, 0.643f, 0.459f, 1.0f);*/

        //treci zadatak


        //cetvrti zadatak
        //model.Draw(shader, tex);
       
        //peti zadaak
        

        //zad6
        model.Draw(shader, texture);


        window.SwapAndPoll();
    }

    window.CloseWindow();

    return 0;
}