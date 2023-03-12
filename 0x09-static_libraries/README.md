## 0x09. C - Static libraries ##

# What Is A "C" Library? What Is It Good For? #

 A library is a file containing several object files, that can be used as a single entity in a linking phase of a program. Normally the library is indexed, so it is easy to find symbols (functions, variables and so on) in them. For this reason, linking a program whose object files are ordered in libraries is faster than linking a program whose object files are separate on the disk. Also, when using a library, we have fewer files to look for and open, which even further speeds up linking.

# Creating A Static "C" Library Using "ar" and "ranlib" #

The basic tool used to create static libraries is a program called 'ar', for 'archiver'. This program can be used to create static libraries (which are actually archive files), modify object files in the static library, list the names of object files in the library, and so on. In order to create a static library, we can use a command like this:

 # ar rc libutil.a util_file.o util_net.o util_math.o #

This command creates a static library named 'libutil.a' and puts copies of the object files "util_file.o", "util_net.o" and "util_math.o" in it. If the library file already exists, it has the object files added to it, or replaced, if they are newer than those inside the library. The 'c' flag tells ar to create the library if it doesn't already exist. The 'r' flag tells it to replace older object files in the library, with the new object files.

After an archive is created, or modified, there is a need to index it. This index is later used by the compiler to speed up symbol-lookup inside the library, and to make sure that the order of the symbols in the library won't matter during compilation (this will be better understood when we take a deeper look at the link process at the end of this tutorial). The command used to create or update the index is called 'ranlib', and is invoked as follows:

# ranlib libutil.a #

- Use 'ranlib' to re-generate the index.
- When copying the archive file to another location, use 'cp -p', instead of only 'cp'. The '-p' flag tells 'cp' to keep all attributes of the file, including its access permissions, owner (if "cp" is invoked by a superuser) and its last modification date. This will cause the compiler to think the index inside the file is still updated. This method is useful for makefiles that need to copy the library to another directory for some reason.

## Using A "C" Library In A Program ##

After we created our archive, we want to use it in a program. This is done by adding the library's name to the list of object file names given to the linker, using a special flag, normally '-l'. Here is an example:

 ~ cc main.o -L. -lutil -o prog ~

This will create a program using object file "main.o", and any symbols it requires from the "util" static library. Note that we omitted the "lib" prefix and the ".a" suffix when mentioning the library on the link command. The linker attaches these parts back to the name of the library to create a name of a file to look for. Note also the usage of the '-L' flag - this flag tells the linker that libraries might be found in the given directory ('.', refering to the current directory), in addition to the standard locations where the compiler looks for system libraries.

# man or help:#

- ar
- ranlib
- nm

C - Static libraries


TASKS


[0. A library is not a luxury but one of the necessities of life](libmy.a)


Create the static library libmy.a containing all the functions listed below:


If you haven’t coded all of the above functions create empty ones with the right prototype.


Don’t forget to push your main.h file to your repository. It should at least contain all the prototypes of the above functions.


[1. Without libraries what have we? We have no past and no future](create_static_lib.sh)


Create a script called create_static_lib.sh that creates a static library called liball.a from all the .c files that are in the current directory.
