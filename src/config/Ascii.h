// Copyright (c) 2019, The CRYGCoin Developers
//
// Please see the included LICENSE file for more information

#pragma once

const std::string windowsAsciiArt =
"\n                                               \n"
"   _____ _____  ______ _____  _____      _       \n"
"  / ____|  __ \|  ____/ ____|/ ____|    (_)      \n"
" | |    | |__) | |__ | |  __| |     ___  _ _ __  \n"
" | |    |  _  /|  __|| | |_ | |    / _ \| | '_ \ \n"
" | |____| | \ \| |___| |__| | |___| (_) | | | | |\n"
"  \_____|_|  \_\______\_____|\_____\___/|_|_| |_|\n"
"                                                 \n";

const std::string nonWindowsAsciiArt = 
"\n                                                             \n"
" ██████╗██████╗ ███████╗ ██████╗  ██████╗ ██████╗ ██╗███╗   ██╗\n"
"██╔════╝██╔══██╗██╔════╝██╔════╝ ██╔════╝██╔═══██╗██║████╗  ██║\n"
"██║     ██████╔╝█████╗  ██║  ███╗██║     ██║   ██║██║██╔██╗ ██║\n"
"██║     ██╔══██╗██╔══╝  ██║   ██║██║     ██║   ██║██║██║╚██╗██║\n"
"╚██████╗██║  ██║███████╗╚██████╔╝╚██████╗╚██████╔╝██║██║ ╚████║\n"
" ╚═════╝╚═╝  ╚═╝╚══════╝ ╚═════╝  ╚═════╝ ╚═════╝ ╚═╝╚═╝  ╚═══╝\n";

/* Windows has some characters it won't display in a terminal. If your ascii
   art works fine on Windows and Linux terminals, just replace 'asciiArt' with
   the art itself, and remove these two #ifdefs and above ascii arts */
#ifdef _WIN32
const std::string asciiArt = windowsAsciiArt;
#else
const std::string asciiArt = nonWindowsAsciiArt;
#endif
