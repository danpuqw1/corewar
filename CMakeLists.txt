cmake_minimum_required(VERSION 3.15)
project(corewar C)

set(CMAKE_C_STANDARD 11)

include_directories(libft, includes)

add_executable(corewar libft/ft_atoi.c
        libft/ft_base16_decoder.c
        libft/ft_base16_encoder.c
        libft/ft_bzero.c
        libft/ft_isalnum.c
        libft/ft_isalpha.c
        libft/ft_isascii.c
        libft/ft_isdigit.c
        libft/ft_isprint.c
        libft/ft_itoa.c
        libft/ft_lstadd.c
        libft/ft_lstdel.c
        libft/ft_lstdelone.c
        libft/ft_lstiter.c
        libft/ft_lstmap.c
        libft/ft_lstnew.c
        libft/ft_memalloc.c
        libft/ft_memccpy.c
        libft/ft_memchr.c
        libft/ft_memcmp.c
        libft/ft_memcpy.c
        libft/ft_memdel.c
        libft/ft_memmove.c
        libft/ft_memset.c
        libft/ft_pow.c
        libft/ft_putchar.c
        libft/ft_putchar_fd.c
        libft/ft_putendl.c
        libft/ft_putendl_fd.c
        libft/ft_putnbr.c
        libft/ft_putnbr_fd.c
        libft/ft_putstr.c
        libft/ft_putstr_fd.c
        libft/ft_rot_n.c
        libft/ft_sqrt.c
        libft/ft_strcat.c
        libft/ft_strchr.c
        libft/ft_strclr.c
        libft/ft_strcmp.c
        libft/ft_strcpy.c
        libft/ft_strdel.c
        libft/ft_strdup.c
        libft/ft_strequ.c
        libft/ft_striter.c
        libft/ft_striteri.c
        libft/ft_strjoin.c
        libft/ft_strlcat.c
        libft/ft_strlen.c
        libft/ft_strmap.c
        libft/ft_strmapi.c
        libft/ft_strncat.c
        libft/ft_strncmp.c
        libft/ft_strncpy.c
        libft/ft_strnequ.c
        libft/ft_strnew.c
        libft/ft_strnstr.c
        libft/ft_strrchr.c
        libft/ft_strsplit.c
        libft/ft_strstr.c
        libft/ft_strsub.c
        libft/ft_strtrim.c
        libft/ft_tolower.c
        libft/ft_toupper.c
        libft/get_next_line.c
        libft/libft.h
        libft/ft_free_str.c
        includes/lemin.h
        includes/libft.h
        includes/op.h
        includes/corewar.h
        main.c
        functions.c
        flag_d.c
        op.c
        visio_put_data.c
        visio_cells.c
        functions2.c
        functions3.c
        functions4.c
        op_addr_ld_st.c
        op_and_or_xor.c
        op_add_sub_zjmp_ldi_sti.c
        op_fork_lld_lldi.c
        op_lfork_aff_live.c
        validation.c
        validation2.c
        read_champ.c
        main_functions.c
        main_functions2.c
        visio.c
        visio_update_attrs.c
        visio_update_data.c
        visio_put_attrs.c)

target_link_libraries(${PROJECT_NAME} ncurses)
