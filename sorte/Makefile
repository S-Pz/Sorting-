CC=gcc
CFLAGS=-g -Wall
LDLIBS=

MKDIR_P=mkdir -p

EXE=sorte

SRC=src
BIN=bin
OBJ=build

SRCS=$(wildcard $(SRC)/*.c) $(wildcard $(SRC)/*/*.c)
OBJS=$(patsubst $(SRC)/%.c, $(OBJ)/%.o, $(SRCS))



.PHONY: help
help: ## Show a help message
help:
	@echo -e 'Usage: make [\033[36mtarget\033[0m]\ntargets:'
	@grep -E '^[a-zA-Z_-]+:.*?## .*$$' $(MAKEFILE_LIST) | \
		sort | \
		sed \
			-e :a \
			-e 's/^\([^:]\{1,9\}\):/\1 :/;ta' \
			-e 's/^\([^:]*\): \+##/    \x1b[36m\1\x1b[0m/'
# sed -e :a \                                      Create a label "a"
# 	-e 's/^\([^:]\{1,9\}\):/\1 :/;ta' \            Loop through the string adding white space padding
# 	-e 's/^\([^:]*\): \+##/    \x1b[36m\1\x1b[0m/' Replace target with colored output

.PHONY: debug
debug: ## Build an executable to debug 
debug: $(BIN)/$(EXE)

.PHONY: release
release: ## Build a release executable
release: CFLAGS=-Wall -O2 -DNDEBUG
release: clean
release: $(BIN)/$(EXE)

.PHONY: clean
clean: ## Clean all builded files
	$(RM) -r $(BIN) $(OBJ) $(TESTBIN) $(TESTSCRIPTSOUT)




$(OBJ)/%.o: $(SRC)/%.c $(OBJ)
	@$(MKDIR_P) $(@D)
	$(CC) $(CFLAGS) $(LDLIBS) -c $< -o $@

$(BIN)/$(EXE): $(OBJS) | $(BIN)
	$(CC) $(CFLAGS) $(LDLIBS) $^ -o $@



# Directories
$(BIN):
	$(MKDIR_P) $@

$(OBJ):
	$(MKDIR_P) $@

