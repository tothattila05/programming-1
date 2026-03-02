@echo off

:: A kimeneti fajl neve
set OUTPUT_FILE=FELADATOK.md

:: Fajl fejlec kiirasa
echo # Megoldott feladatok listaja > %OUTPUT_FILE%
echo. >> %OUTPUT_FILE%

:: Vegig megyunk a solutions mappa alkonyvtarain
:: A %%~nxD csak a mappa nevet adja vissza (pl. 20200213c)
for /d %%D in (solutions\*) do (
    set "folderName=%%~nxD"
    
    :: Itt egy trukkot alkalmazunk: meghivunk egy al-rutint (label), 
    :: hogy a specialis karakterek ne zavarjanak be a linkben
    call :WriteLink "%%~nxD"
)

echo A %OUTPUT_FILE% fajl sikeresen legeneraltatott!
pause
goto :eof

:WriteLink
:: Az %~1 az elso parameter, amit a hivasnal kaptunk (a mappa neve)
echo ### [%~1](https://arato.inf.unideb.hu/szathmary.laszlo/pmwiki/index.php?n=Prog1.%~1) [[GitHub Goto]](https://github.com/tothattila05/programming-1/tree/main/solutions/%~1) >> %OUTPUT_FILE%
goto :eof