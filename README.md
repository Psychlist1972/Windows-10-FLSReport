# Windows-10-FLSReport

In Windows 10 (Spring 2019 update) 18312+ we increased the long-standing limitation of 128 FLS slots per process to over 4000 per process.

This is important for applications that dynamically load a large number of DLLs. The most common examples are DAWs (Digital Audio Workstations) and video software.

In earlier versions of Windows, going back to Windows Vista, the process could not load any more DLLs once the FLS slots hit 128. It's important to note that most DAWs use 20-40 slots themselves, and many plugin DLLs use 5-50 per DLL. The limitation is not 128 unique DLLs, but as many unique DLLs as you can load while staying under the 128 count.


How to use: simply run the program and it will try to allocate FLS slots until it errors out. Try it on a pre-18312 machine, and you should get to some number under 128. Try it on a PC with 18312 or higher build of Windows, and it should get to around 4076.

