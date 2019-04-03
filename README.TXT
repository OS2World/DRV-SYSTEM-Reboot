Tue  01-16-1990  22:57:06

boot.sys, reboot.exe :  A method to reboot os/2 1.20
----------------------------------------------------


1) Install boot.sys in your config.sys (DEVICE=C:\xxx\BOOT.SYS)
2) Reboot <grin> your computer manually (shutdown, then ctrl-alt-del).
3) Run REBOOT.EXE when you want to reboot.  REBOOT calls DosShutdown(), so
   that your disk cache is flushed, and any HPFS volumes you have are
   marked 'clean'.


This program is based on sample source code posted on Microsoft
Online.

P.Fitzsimmons (fido 1:250/628.1) (bbs:416-867-9663)
A:Ware Inc.
