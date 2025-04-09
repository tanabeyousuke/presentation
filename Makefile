target := presentation
source := src/main.cpp src/presen.cpp
object = $(source:.cpp=.o)

all: $(object)
	g++ -o $(target) $(object) -lsfml-graphics -lsfml-window -lsfml-system

.c.o:
	g++ -c $<

run:
	make all
	./$(target)

remove: $(object) $(target)
	rm $(object) $(target)

push:
	make remove
	git add .
	git commit -m "tekitou"
	git push origin main
