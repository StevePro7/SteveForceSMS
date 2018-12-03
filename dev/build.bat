@echo off
cls

REM Banks conversion
REM cd Banks
REM folder2c bank2 bank2 2
REM folder2c bank3 bank3 3
REM folder2c bank4 bank4 4
REM folder2c bank5 bank5 5
REM folder2c bank6 bank6 6
REM folder2c bank7 bank7 7
REM folder2c bank8 bank8 8
REM folder2c bank9 bank9 9
REM folder2c bank10 bank10 10
REM folder2c bank11 bank11 11
REM folder2c bank12 bank12 12
REM folder2c bank13 bank13 13
REM folder2c bank14 bank14 14
REM folder2c bank15 bank15 15

REM Compile banks
REM sdcc -c --no-std-crt0 -mz80 --Werror --opt-code-speed --constseg BANK2 bank2.c
REM sdcc -c --no-std-crt0 -mz80 --Werror --opt-code-speed --constseg BANK3 bank3.c
REM sdcc -c --no-std-crt0 -mz80 --Werror --opt-code-speed --constseg BANK4 bank4.c
REM sdcc -c --no-std-crt0 -mz80 --Werror --opt-code-speed --constseg BANK5 bank5.c
REM sdcc -c --no-std-crt0 -mz80 --Werror --opt-code-speed --constseg BANK6 bank6.c
REM sdcc -c --no-std-crt0 -mz80 --Werror --opt-code-speed --constseg BANK7 bank7.c
REM sdcc -c --no-std-crt0 -mz80 --Werror --opt-code-speed --constseg BANK8 bank8.c
REM sdcc -c --no-std-crt0 -mz80 --Werror --opt-code-speed --constseg BANK9 bank9.c
REM sdcc -c --no-std-crt0 -mz80 --Werror --opt-code-speed --constseg BANK10 bank10.c
REM sdcc -c --no-std-crt0 -mz80 --Werror --opt-code-speed --constseg BANK11 bank11.c
REM sdcc -c --no-std-crt0 -mz80 --Werror --opt-code-speed --constseg BANK12 bank12.c
REM sdcc -c --no-std-crt0 -mz80 --Werror --opt-code-speed --constseg BANK13 bank13.c
REM sdcc -c --no-std-crt0 -mz80 --Werror --opt-code-speed --constseg BANK14 bank14.c
REM sdcc -c --no-std-crt0 -mz80 --Werror --opt-code-speed --constseg BANK15 fixedbank.c
REM cd ..

REM Build main
sdcc -c -mz80 --opt-code-speed --peep-file peep-rules.txt --std-c99 main.c

REM Link files
sdcc -o output.ihx --Werror --opt-code-speed -mz80 --no-std-crt0 --data-loc 0xC000 ^
..\crt0\crt0_sms.rel main.rel ^
..\lib\SMSlib.lib ^
..\lib\PSGlib.rel

REM Binary output
ihx2sms output.ihx output.sms


REM echo Copy output
copy output.sms ..\asm
REM copy output.sms ..\SteveForce.sms


REM echo Disassemble output
cd ..\asm
smsexamine output.sms
cd ..\dev


REM echo Delete
REM cd Banks
REM del *.asm > nul
REM del *.lst > nul
REM del *.rel > nul
REM del *.sym > nul
REM cd ..

del *.asm > nul
del *.ihx > nul
del *.lk > nul
del *.lst > nul
del *.map > nul
del *.noi > nul
del *.rel > nul
del *.sym > nul

output.sms