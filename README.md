# mp2-lab6-ANTLR

# Как запустить?

1) Запускаем build.bat, выполняется команда:
	java -jar antlr-4.13.2-complete.jar -Dlanguage=Cpp -visitor -o generated -package mylang grammar/mygr.g4

	Получаем файлы (в директорию generated), созданные на основе грамматики (из директории grammar)

2) Создаем директорию build
3) Открываем cmd из директории и выполняем команду: cmake ..
4) Открываем mygrProject.sln и назначаем mygrApp в качестве запускаемого проекта
