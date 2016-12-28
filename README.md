# VulpineGE
Replacement for Unity and Unreal, built and designed specifically for Linux, aiming to support any which way combination of desktop environments and managers and whatever, and to fully take advantage of Vulkan. Be a bit clever with it too.


Formats are intentionally unique to this engine, because coming up with things on the spot is fun.

Some ideas and stuff I put together:
  game.elf (placeholder name, can really be anything) loads a file called 'data.fox' (or whatever else format + extension name I come up with and design in 25 minutes), which is the archive for (almost) everything in the game. game.elf is compiled for each specific project, and is the core of the engine itself + whatever developers add in. This means that if you use no extensions or anything to the engine, you can replace 'data.fox' and the game will run and execute that game without any problems, theoretically (assuming the game doesn't expect to have to do anything to the data there). Other stray files would be things like 'audio.fxa' or 'localization.fxl' or something.
  
  Scripting language either actually be Lua, or a new language like Lua (ideally fully object-oriented, and not with messes of tables all over the place.) Probably just Lua.
  
  Hybrid raycast/rasterizer, using raycast for things like shading and reflections. Implement in SPIR-V through Vulkan.
  (Is this feasible to do quickly???)
  
  
  TODO list:
    - Custom 3D modelling toolkit and animation set (we can't just use Blender unfortunately ):, want to keep everything consistant with rights + whatever.)
    - Custom image manipulation kit, (again can't just use GIMP)
    - Custom audio suite
    - Custom rendering engine (Don't want to use OGRE, takes all the fun out ): )
    - Custom abstraction toolkit... might actually just use SDL + GTK.
    - Everything!
    
    
Expected hardware to run games with this on, at bare minimum (aka hardware this is built on):
  - Intel i7 920 (yes this ancient thing from just under a decade ago), no overclock or anything special done.
  - NVIDIA GTX 980, (proprietary drivers) (pair an ancient cpu with a good gpu, why not)

   NOTICE:
 	 This project requires GTK+, which is licensed under the LGPL.
 	 Sources for that are here: https://github.com/GNOME/gtk
 	 For absolute clarity, I'm using libgtk-3-0: 3.22.5-1 (amd64), obtained from Ubuntu repositories.
 	 Since I don't distribute binaries, linking this will be your own problem. (Ideally you want to dynamically link)
 	 License for GTK is here: https://github.com/GNOME/gtk/blob/master/COPYING
 	 Do note that GTK is __only__ used for tools, NOT for the actual game-world stuff itself. (That is done via SDL)
 	 LGPL looks scary, please tell me if I'm doing something wrong.