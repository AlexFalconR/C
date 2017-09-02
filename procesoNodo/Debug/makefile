################################################################################
# Automatically-generated file. Do not edit!
################################################################################

-include ../makefile.init

RM := rm -rf

# All of the sources participating in the build are defined here
-include sources.mk
-include src/subdir.mk
-include subdir.mk
-include objects.mk

ifneq ($(MAKECMDGOALS),clean)
ifneq ($(strip $(C_DEPS)),)
-include $(C_DEPS)
endif
endif

-include ../makefile.defs

# Add inputs and outputs from these tool invocations to the build variables 

# All Target
all: procesoNodo

dependents:
	-cd /home/utnso/Escritorio/git/tp-2015-1c-dalemartadale/utiles/Debug && $(MAKE) all
	-cd /home/utnso/Escritorio/git/tp-2015-1c-dalemartadale/ProcesoAlmacenamientoMarta/Debug && $(MAKE) all
	-cd /home/utnso/Escritorio/git/tp-2015-1c-dalemartadale/procesoFileSystem/Debug && $(MAKE) all
	-cd /home/utnso/Escritorio/git/tp-2015-1c-dalemartadale/procesoJob/Debug && $(MAKE) all
	-cd /home/utnso/Escritorio/git/tp-2015-1c-dalemartadale/procesoMaRTA/Debug && $(MAKE) all
	-cd /home/utnso/Escritorio/git/tp-2015-1c-dalemartadale/procesoNodo/Release && $(MAKE) all

# Tool invocations
procesoNodo: $(OBJS) $(USER_OBJS) /home/utnso/Escritorio/git/tp-2015-1c-dalemartadale/utiles/Debug/libutiles.so /home/utnso/Escritorio/git/tp-2015-1c-dalemartadale/ProcesoAlmacenamientoMarta/Debug/AlmacenamientoMaRTA /home/utnso/Escritorio/git/tp-2015-1c-dalemartadale/procesoFileSystem/Debug/procesoFileSystem /home/utnso/Escritorio/git/tp-2015-1c-dalemartadale/procesoJob/Debug/procesoJob /home/utnso/Escritorio/git/tp-2015-1c-dalemartadale/procesoMaRTA/Debug/procesoMaRTA /home/utnso/Escritorio/git/tp-2015-1c-dalemartadale/procesoNodo/Release/procesoNodo
	@echo 'Building target: $@'
	@echo 'Invoking: GCC C Linker'
	gcc -L"/home/utnso/Escritorio/git/tp-2015-1c-dalemartadale/utiles/Debug" -o "procesoNodo" $(OBJS) $(USER_OBJS) $(LIBS)
	@echo 'Finished building target: $@'
	@echo ' '

# Other Targets
clean:
	-$(RM) $(OBJS)$(C_DEPS)$(EXECUTABLES) procesoNodo
	-@echo ' '

.PHONY: all clean dependents
.SECONDARY:
/home/utnso/Escritorio/git/tp-2015-1c-dalemartadale/utiles/Debug/libutiles.so:
/home/utnso/Escritorio/git/tp-2015-1c-dalemartadale/ProcesoAlmacenamientoMarta/Debug/AlmacenamientoMaRTA:
/home/utnso/Escritorio/git/tp-2015-1c-dalemartadale/procesoFileSystem/Debug/procesoFileSystem:
/home/utnso/Escritorio/git/tp-2015-1c-dalemartadale/procesoJob/Debug/procesoJob:
/home/utnso/Escritorio/git/tp-2015-1c-dalemartadale/procesoMaRTA/Debug/procesoMaRTA:
/home/utnso/Escritorio/git/tp-2015-1c-dalemartadale/procesoNodo/Release/procesoNodo:

-include ../makefile.targets
