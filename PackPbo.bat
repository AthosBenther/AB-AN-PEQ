set "mydir=P:\AB-AN-PEQ"
echo "%mydir%"
pause
AddonBuilder "%mydir%" "C:\Program Files (x86)\Steam\steamapps\common\DayZ\Mods\@AB-AN-PEQ\Addons" -temp=P:\Temp -sign=P:\Keys\AthosBenther.bikey -binarizeFullLogs
pause
exit