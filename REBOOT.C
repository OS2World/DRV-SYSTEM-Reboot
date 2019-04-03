#define INCL_BASE
#define INCL_NOPM
#include <os2.h>

#include <stdio.h>


void main(void)
{
   HFILE hf;
   USHORT usAction,retcode;

   retcode = DosOpen("BOOT$",                /* open reboot device  */
       &hf,                                    /* address of device handle */
       &usAction,                              /* action taken */
       0L,                                     /* size of new file */
       0,                                      /* normal file attribute */
       1,                                      /* open existing file */
       0x0011,                                 /* write-only, exclusive */
       0L);                                    /* reserved */

   if (!retcode){
      DosShutdown(0L);
      DosDevIOCtl(0L,0L,0,0x80,hf);
      puts("BOOT$ not functioning");
   }
   else{
      puts("Failed to open BOOT$");
      puts("Please make sure that BOOT.SYS is installed in your CONFIG.SYS");
    }
}

