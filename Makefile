target := presentation
source := src/main.cpp
object := $(source:.cpp=.o)

all: $(source) $(object)
	g++ -c -o $(object) $(source) 
	g++ -o $(target) $(object) -lsfml-graphics -lsfml-window -lsfml-system

remove: $(object) $(target)
	rm $(object) $(target)

push:
	make remove
	git add .
	git commit -m "tekitou"
	git push origin main
