
#include <jo/jo.h>

void load_background(const char *sub_dir, const char *fn)
{
    jo_img      bg;
    bg.data = NULL;
    jo_tga_loader(&bg, sub_dir, fn, JO_COLOR_Transparent);
    jo_set_background_sprite(&bg, 0, 0);
    jo_free_img(&bg);
}

void init_background()
{
    jo_core_set_screens_order(JO_NBG2_SCREEN, JO_SPRITE_SCREEN, JO_NBG0_SCREEN, JO_RBG0_SCREEN, JO_NBG1_SCREEN);
    jo_nbg2_clear();
    //jo_clear_background(JO_COLOR_White);
}