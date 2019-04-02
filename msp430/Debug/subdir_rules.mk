################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Each subdirectory must supply rules for building sources it contributes
%.obj: ../%.c $(GEN_OPTS) | $(GEN_FILES)
	@echo 'Building file: "$<"'
	@echo 'Invoking: MSP430 Compiler'
	"/home/sfshaw/ti/ccs900/ccs/tools/compiler/ti-cgt-msp430_18.12.1.LTS/bin/cl430" -vmsp --use_hw_mpy=none --include_path="/home/sfshaw/ti/ccs900/ccs/ccs_base/msp430/include" --include_path="/home/sfshaw/git/cpe329/blink" --include_path="/home/sfshaw/ti/ccs900/ccs/tools/compiler/ti-cgt-msp430_18.12.1.LTS/include" --advice:power=all --define=__MSP430G2553__ -g --printf_support=minimal --diag_warning=225 --diag_wrap=off --display_error_number --preproc_with_compile --preproc_dependency="$(basename $(<F)).d_raw" $(GEN_OPTS__FLAG) "$(shell echo $<)"
	@echo 'Finished building: "$<"'
	@echo ' '


