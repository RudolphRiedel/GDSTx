#include <GDSTx.h>

void setup()
{
    GD.begin();
}

void loop()
{
    uint32_t current_millis;
    static uint32_t previous_millis = 0;
    current_millis = millis();

    if ((current_millis - previous_millis) > 19) /* execute the code every 20 milli-seconds */
    {
        previous_millis = current_millis;

        GD.ClearColorRGB(0x100020);
        GD.Clear();
        GD.cmd_text(GD.w / 2, GD.h / 2, 31, OPT_CENTER, "Hello world");
        GD.cmd_number(0, 0, 28, 0, current_millis);
        GD.swap();
    }
}
