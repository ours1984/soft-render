#include <softrender/glSoft.h>

bool initRender()
{
    glewExperimental = GL_TRUE;
    auto ret = glewInit() ;
    if (ret != GLEW_OK)
    {
        return false;
    }
    return true;
}
