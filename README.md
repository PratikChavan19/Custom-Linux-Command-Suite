🐧 Custom Linux Command Suite (C) :

A collection of custom implementations of essential Linux/Unix commands built using C and system calls, designed to understand how core CLI utilities work internally.

This project focuses on low-level system programming, file handling, directory operations, and OS interaction.

----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

🚀 Features :
✔️ Reimplementation of core Linux commands
✔️ Uses system calls (open, read, write, stat, etc.)
✔️ Covers file, directory, and system-level operations
✔️ Beginner → Intermediate friendly
✔️ Strong focus on understanding internal working of commands

----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

📂 Commands Implemented :

📁 File & Directory Operations :
Command	                Description
ls / ls -a / ls -i	    List directory contents (with inode support)
pwd	                    Print current working directory
cd	                    Change directory
cat	                    Display file content
cp	                    Copy file content
mv	                    Move/Rename files
rm	                    Delete file
touch	                  Create file if not exists

📊 System & Metadata Commands :
Command	    Description
stat	      Display file metadata (size, inode)
stat        (extended)Displays file permissions as well
uname	      Display system information

----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

🔍 Implementation Highlights :

🔹 File Handling :
Uses open(), read(), write(), close()
Example: cat reads file in chunks and writes to stdout

🔹 Directory Handling :
Uses opendir(), readdir(), closedir()
Example: ls reads directory entries dynamically

🔹 File Manipulation :
cp → read/write loop for copying data
mv → uses rename() system call
rm → uses unlink() for deletion

🔹 File Metadata :
stat → fetch file info using stat()
Displays:
File size
Inode number
Permissions (custom logic)

🔹 System Information :
uname → retrieves OS details using uname()

----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

⚙️ Build & Run :

🔧 Compile :
gcc Command_ls.c -o lsx
gcc Command_cat.c -o catx
gcc Command_cp.c -o cpx
gcc Command_rm.c -o rmx
gcc Command_mv.c -o mvx
gcc Command_touch.c -o touchx
gcc Command_cd.c -o cdx
gcc Command_pwd.c -o pwdx
gcc Command_stat.c -o statx
gcc Command_uname.c -o unamex

▶️ Example Usage :
./lsx
./lsx -i
./pwdx
./cdx ..
./catx file.txt
./cpx file1.txt file2.txt
./mvx old.txt new.txt
./rmx file.txt
./touchx newfile.txt
./statx file.txt
./unamex

----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
 
🧠 Learning Outcomes :

Deep understanding of:
Linux system calls
File descriptors
Directory structures
Process interaction with OS

Practical exposure to:
CLI tool design
Error handling
Low-level programming

----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

🌍 Real-World Relevance :

These commands mimic behavior of actual Linux utilities like:

ls, cat, cp, mv, rm, stat, uname

Helping understand how tools in GNU Coreutils are implemented internally.

----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

⚠️ Limitations :
Basic implementations (not all flags supported)
No recursive operations (e.g., rm -r)
Minimal error handling in some commands
No permission checks beyond basics

----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

🔥 Future Improvements :
Add support for more flags (ls -l, cp -r)
Implement recursive directory operations
Add piping & redirection support
Combine into a mini shell project

----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

💼 Interview Value :

This project demonstrates:
Strong System Programming skills
Understanding of OS internals
Practical knowledge of Linux utilities

----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

👨‍💻 Author :

Pratik Chavan,
System Programming Enthusiast
Focused on C, C++, OS & Low-Level Design

----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
