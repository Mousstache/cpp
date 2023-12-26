# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mgamil <mgamil@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/01/09 20:50:12 by mgamil            #+#    #+#              #
#    Updated: 2023/04/13 00:27:53 by mgamil           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#                          M A K E F I L E                                     #
################################################################################

.DELETE_ON_ERROR:
.DEFAULT_GOAL			:=	all
SHELL					:=	$(shell which zsh)
.SHELLFLAGS				:=	-eu -o pipefail -c

### A S C I I   A R T ##########################################################

ART_NAME_1				=	█▀▀ █▀█ █▀█ █▀█ █▀█ ▄▄ █▀▀ ▀▄▀ █▀█ █▀█\n
ART_NAME_2				=	█▄▄ █▀▀ █▀▀ █▄█ █▀█ ░░ ██▄ █░█ █▄█ █▄█\n

ART_CLN1				=   █▀▀ █░░ █▀▀ ▄▀█ █▄░█\n
ART_CLN2				=   █▄▄ █▄▄ ██▄ █▀█ █░▀█\n

### D I S P L A Y   F U N C T I O N ############################################

Progress	=	ProgressBar() {												\
	name=$$1 ;																\
	if [ $$name = $(lastword $(FILES)) ] ; then name="[DONE]" ; fi ;		\
	progress=`echo "($(COUNT)*100)/$(words $(FILES))" | bc`;				\
	done=`echo "($$progress*20)/100" | bc` ;									\
	left=`echo "20-$$done" | bc` ;											\
	fill=`printf "%*s" $$done | sed 's/ /▆/g'` ;				 			\
	empty=`printf "%*s" $$left | sed 's/ /▆/g'` ;							\
	if [ $(COUNT) = 1 ] ; then line=" $(CC_WHITE)Compiling source files		: \n\n" ; fi ;\
	line+="\r\e[0K $(CC_GREEN)$$fill$(CC_RED)$$empty$(RESET) $(CC_WHITE)$$progress%	\
	 $(CC_GREEN)$$name$(RESET)" ;											\
	echo -n $$line															\
	$(eval COUNT = $(shell echo $$(($(COUNT) + 1)))) }

define PRINT_ASCII_ART
	printf "\n $(1)$(2)$(RESET) $(3)$(4)$(RESET)\n"
endef

### C O L O R S ################################################################

COUNT					=	1
CC_GREEN				=	\e[38;5;46;1m
CC_RED					=	\e[31;1m
CC_WHITE				=	\e[38;5;15;1m
YELLOW					=	\e[38;5;3m
PURPLE1					=	\e[38;2;255;254;0m
PURPLE2					=	\e[38;2;245;242;3m
RED1					=	\e[38;5;196m
RED2					=	\e[38;5;160m
RESET					=	\e[0m

### D I R E C T O R Y ' S ######################################################

NAME					:=	easyfind

override FILES			:=	$(addsuffix .cpp,			\
							 main easyfind)

SRCDIR					:=	./srcs
INCDIR					:=	./incs
OBJDIR					:=	.obj
DEPDIR					:=	.dep

### C O M P I L E R   F L A G S ################################################

CXX						:=	c++
STD						:=	-std=c++98
CXXFLAGS				:=	-g3 -Wall -Wextra -Werror
IFLAGS					:=	-I$(INCDIR)
LDFLAGS					?=	-MMD -MF

override MKDIR			:=	mkdir -pv
override RM				:=	rm -rvf

### P A T T E R N   R U L E S ##################################################

override SUB			:=	$(shell find $(SRCDIR) -type d)
override OBJ			:=	$(FILES:%.cpp=$(OBJDIR)/%.o)
override DEP			:=	$(patsubst $(OBJDIR)/%.o, $(DEPDIR)/%.d, $(OBJ))

### C O M P I L A T I O N   F U N C T I O N ####################################

define COMPILE_RULE
$(OBJDIR)/%.o:	$(1)/%.cpp | $(OBJDIR) $(DEPDIR)
	@$$(CXX) $$(STD) $$(IFLAGS) $$(CXXFLAGS)	\
	-c $$< -o $$@								\
	-MMD -MF $$(DEPDIR)/$$(*F).d
	@$$(Progress) ; ProgressBar $$(shell basename $$<)
endef


### R E C I P E S ##############################################################

.PHONY:	all clean bclean fclean re

all: $(NAME)

$(NAME): $(OBJ)
	@$(CXX) $^ -o $@
	@printf "\n\n $(CC_WHITE)Creating binary	: $(CC_GREEN)%s$(RESET)\n" $(NAME)
	@$(call PRINT_ASCII_ART,$(PURPLE1),$(ART_NAME_1),$(PURPLE2),$(ART_NAME_2))

-include $(DEP)
$(foreach DIR, $(SUB), $(eval $(call COMPILE_RULE,$(DIR))))

$(OBJDIR) $(DEPDIR):
	@$(if $(findstring $@,$(OBJDIR)),$(eval MSG=object))
	@$(if $(findstring $@,$(DEPDIR)),$(eval MSG=dependency))
	@printf " $(CC_WHITE)Creating %s directory	: $(RESET)$(YELLOW)" $(MSG)
	@$(MKDIR) $@
	@printf "$(RESET)"

clean:	;
	@printf " $(CC_WHITE)Deleting object files	: $(CC_RED)\e[31;9m*.o *.d\n"	
	@$(RM) $(OBJDIR) $(DEPDIR)
	@printf "$(RESET)"

bclean:
	@printf " $(CC_WHITE)Deleting binary files	: $(CC_RED)\e[31;9m$(NAME)\n"
	@$(RM) $(NAME)
	@printf "$(RESET)"

fclean:	clean bclean
	@$(call PRINT_ASCII_ART,$(RED1),$(ART_CLN1),$(RED2),$(ART_CLN2))

re:		fclean all
