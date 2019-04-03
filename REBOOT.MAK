

boot.obj: boot.asm reboot.mak
        masm /Mx /W2 boot;

boot.sys: boot.obj
        link boot,boot.sys,,os2.lib,boot.def/a:16;


reboot.exe: reboot.c reboot.mak
        cl /AS /Ox /W3 /Lp /G2 reboot.c os2.lib /link /a:16
