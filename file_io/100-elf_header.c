#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <elf.h>

#define ERROR_EXIT() do { \
	dprintf(STDERR_FILENO, "Error: Not a valid ELF file\n"); \
	exit(98); \
} while (0)

/**
 * print_elf_header - Prints key ELF header values
 * @header: pointer to the ELF header
 */
void print_elf_header(Elf64_Ehdr *header)
{
	int i;

	printf("ELF Header:\n");
	printf("  Magic:   ");
	for (i = 0; i < EI_NIDENT; i++)
		printf("%02x%c", header->e_ident[i], i < EI_NIDENT - 1 ? ' ' : '\n');

	/* Class */
	printf("  Class:                             ");
	switch (header->e_ident[EI_CLASS])
	{
	case ELFCLASS32: printf("ELF32\n"); break;
	case ELFCLASS64: printf("ELF64\n"); break;
	default: printf("<unknown: %x>\n", header->e_ident[EI_CLASS]); break;
	}

	/* Data */
	printf("  Data:                              ");
	switch (header->e_ident[EI_DATA])
	{
	case ELFDATA2LSB: printf("2's complement, little endian\n"); break;
	case ELFDATA2MSB: printf("2's complement, big endian\n"); break;
	default: printf("Invalid data encoding\n"); break;
	}

	/* Version */
	printf("  Version:                           ");
	if (header->e_ident[EI_VERSION] == EV_CURRENT)
		printf("%d (current)\n", EV_CURRENT);
	else
		printf("%d\n", header->e_ident[EI_VERSION]);

	/* OS/ABI */
	printf("  OS/ABI:                            ");
	switch (header->e_ident[EI_OSABI])
	{
	case ELFOSABI_SYSV: printf("UNIX - System V\n"); break;
	case ELFOSABI_NETBSD: printf("UNIX - NetBSD\n"); break;
	case ELFOSABI_SOLARIS: printf("UNIX - Solaris\n"); break;
	default: printf("<unknown: %x>\n", header->e_ident[EI_OSABI]); break;
	}

	/* ABI Version */
	printf("  ABI Version:                       %d\n", header->e_ident[EI_ABIVERSION]);

	/* Type */
	printf("  Type:                              ");
	switch (header->e_type)
	{
	case ET_NONE: printf("NONE (None)\n"); break;
	case ET_REL: printf("REL (Relocatable file)\n"); break;
	case ET_EXEC: printf("EXEC (Executable file)\n"); break;
	case ET_DYN: printf("DYN (Shared object file)\n"); break;
	case ET_CORE: printf("CORE (Core file)\n"); break;
	default: printf("<unknown: %x>\n", header->e_type); break;
	}

	/* Entry Point */
	printf("  Entry point address:               %#lx\n", (unsigned long)header->e_entry);
}

/**
 * main - Displays the ELF header info of a file
 * @argc: argument count
 * @argv: argument vector
 * Return: 0 on success, 98 on error
 */
int main(int argc, char **argv)
{
	int fd;
	ssize_t bytes_read;
	Elf64_Ehdr header;

	if (argc != 2)
	{
		dprintf(STDERR_FILENO, "Usage: %s elf_filename\n", argv[0]);
		exit(98);
	}

	fd = open(argv[1], O_RDONLY);
	if (fd == -1)
		ERROR_EXIT();

	bytes_read = read(fd, &header, sizeof(header));
	if (bytes_read != sizeof(header))
	{
		close(fd);
		ERROR_EXIT();
	}

	/* Check ELF magic number */
	if (header.e_ident[EI_MAG0] != ELFMAG0 ||
		header.e_ident[EI_MAG1] != ELFMAG1 ||
		header.e_ident[EI_MAG2] != ELFMAG2 ||
		header.e_ident[EI_MAG3] != ELFMAG3)
	{
		close(fd);
		ERROR_EXIT();
	}

	print_elf_header(&header);
	close(fd);
	return (0);
}
