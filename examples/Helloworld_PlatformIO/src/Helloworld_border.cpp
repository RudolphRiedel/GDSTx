#include <GDSTx.h>

void setup()
{
    GD.begin();

    GD.ClearColorRGB(0x100020);
    GD.Clear();
    GD.cmd_text(GD.w / 2, GD.h / 2, 31, OPT_CENTER, "Hello world");
    GD.swap();
}

void loop()
{

}
