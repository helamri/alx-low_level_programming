#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <elf.h>

void display_error(char *message)
{
int i;
fprintf(stderr, "%s\n", message);
exit(98);
}

void display_elf_header(Elf64_Ehdr header) {
printf("ELF Header:\n");
printf("  Magic:   ");
for (i = 0; i < EI_NIDENT; i++)
{
printf("%02x ", header.e_ident[i]);
}
printf("\n");
printf("  Class:                             %s\n",
(header.e_ident[EI_CLASS] == ELFCLASS64) ? "ELF64" : "ELF32");
printf("  Data:                              %s\n",
(header.e_ident[EI_DATA] == ELFDATA2LSB) ? "2's complement, little endian" :
((header.e_ident[EI_DATA] == ELFDATA2MSB) ? "2's complement, big endian" : "Invalid data encoding"));
printf("  Version:                           %d (current)\n", header.e_ident[EI_VERSION]);
printf("  OS/ABI:                            ");
switch (header.e_ident[EI_OSABI])
{
case ELFOSABI_SYSV:
printf("UNIX - System V\n");
break;
case ELFOSABI_LINUX:
printf("UNIX - Linux\n");
break;
case ELFOSABI_NETBSD:
printf("UNIX - NetBSD\n");
break;
default:
printf("Unknown\n");
break;
}
printf("  ABI Version:                       %d\n", header.e_ident[EI_ABIVERSION]);
printf("  Type:                              ");
switch (header.e_type)
{
case ET_NONE:
printf("NONE (No file type)\n");
break;
case ET_REL:
printf("REL (Relocatable file)\n");
break;
case ET_EXEC:
printf("EXEC (Executable file)\n");
break;
case ET_DYN:
printf("DYN (Shared object file)\n");
break;
case ET_CORE:
printf("CORE (Core file)\n");
break;
default:
printf("Unknown\n");
break;
}
printf("  Entry point address:               %#lx\n", header.e_entry);
}

int main(int argc, char **argv)
{
int fd;
if (argc != 2)
{
display_error("Usage: elf_header elf_filename");
}
fd = open(argv[1], O_RDONLY);
if (fd < 0)
{
display_error("Error opening file");
}
Elf64_Ehdr header;
if (read(fd, &header, sizeof(header)) != sizeof(header))
{
display_error("Error reading ELF header");
}
if (header.e_ident[EI_MAG0] != ELFMAG0 || header.e_ident[EI_MAG1] != ELFMAG1 ||
header.e_ident[EI_MAG2] != ELFMAG2 || header.e_ident[EI_MAG3] != ELFMAG3)
{
display_error("File is not an ELF file");
}
display_elf_header(header);
return 0;
}
