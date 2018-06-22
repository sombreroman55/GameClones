# Compiler
CC := gcc
SFLAGS := -Wall -Wextra -MMD
OFLAGS := -Wall -Wextra

# Project Name
PROJECT := tetris

# Directories
SRCDIR := src
OBJDIR := obj

# Libraries
LIBS := -L/usr/local/lib -lSDL2

# Files and Folders
SRCFILES := $(wildcard $(SRCDIR)/*.c)
OBJFILES := $(patsubst $(SRCDIR)/%.c, $(OBJDIR)/%.o, $(SRCFILES))

# Targets
$(PROJECT): $(OBJFILES)
	$(CC) $(LIBS) $(OFLAGS) $^ -o $@ 
	@echo "Linking complete"

$(OBJDIR)/%.o:	$(SRCDIR)/%.c
	$(CC) -I$(SRCDIR) $(LIBS) $(SFLAGS) -c $< -o $@
	@echo "Compilation complete"

notilde:
	rm -f *~
	rm -f $(OBJDIR)/*~
	rm -f $(SRCDIR)/*~

clean:
	rm -f $(PROJECT) *~
	rm -f $(OBJDIR)/* $(OBJDIR)/*~
	rm -f $(SRCDIR)/*~

-include $(OBJFILES:.o=.d)
