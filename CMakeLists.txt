add_executable(myDevice
        uart_advanced.c
        set_pwm.h
        set_pwm.c
        uart_handler.h
        uart_handler.c
        )

# pull in common dependencies and additional uart hardware support
target_link_libraries(myDevice pico_stdlib hardware_uart hardware_pwm)

# create map/bin/hex file etc.
pico_add_extra_outputs(myDevice)

# add url via pico_set_program_url
example_auto_set_url(myDevice)
