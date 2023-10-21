<div id="top"></div>

<div align="center">
	<a href="https://github.com/Link-Wolf/ft_printf" title="Go to GitHub repo"><img src="https://img.shields.io/static/v1?label=Link-Wolf&message=ft_printf&color=blue&logo=github&style=for-the-badge" alt="Link-Wolf - ft_printf"></a>
	<a href="https://"><img src="https://img.shields.io/badge/42_grade-125_%2F_100-brightgreen?style=for-the-badge" alt="42 grade - 125 / 100"></a>
	<a href="https://"><img src="https://img.shields.io/badge/Year-2022-ffad9b?style=for-the-badge" alt="Year - 2022"></a>
	<a href="https://github.com/Link-Wolf/ft_printf/stargazers"><img src="https://img.shields.io/github/stars/Link-Wolf/ft_printf?style=for-the-badge&color=yellow" alt="stars - ft_printf"></a>
	<a href="https://github.com/Link-Wolf/ft_printf/network/members"><img src="https://img.shields.io/github/forks/Link-Wolf/ft_printf?style=for-the-badge&color=lightgray" alt="forks - ft_printf"></a>
	<a href="https://github.com/Link-Wolf/ft_printf/issues"><img src="https://img.shields.io/github/issues/Link-Wolf/ft_printf?style=for-the-badge&color=orange" alt="issues - ft_printf"></a>
	<a href="https://www.apple.com/macos/" title="Go to Apple homepage"><img src="https://img.shields.io/badge/OS-macOS-blue?logo=apple&logoColor=white&style=for-the-badge&color=9cf" alt="OS - macOS"></a>
</div>

<!-- PROJECT LOGO -->
<br />
<div align="center">
  <a>
    <img src="https://www.42mulhouse.fr/wp-content/uploads/2022/06/logo-42-Mulhouse-white.svg" alt="Logo" width="192" height="80">
  </a>

  <h3 align="center">ft_printf</h3>

  <p align="center">
	  <em>Because putnbr and putstr aren’t enough</em><br/>
    A C project to 'simply' recode printf
    <br />
    <br />
    <a href="https://github.com/Link-Wolf/ft_printf/issues">Report Bug</a>
    ·
    <a href="https://github.com/Link-Wolf/ft_printf/issues">Request Feature</a>
  </p>
</div>

<!-- TABLE OF CONTENTS -->
<details>
  <summary>Table of Contents</summary>
  <ol>
    <li>
      <a href="#about-the-project">About The Project</a>
    </li>
    <li>
      <a href="#getting-started">Getting Started</a>
      <ul>
        <li><a href="#prerequisites">Prerequisites</a></li>
        <li><a href="#installation">Installation</a></li>
      </ul>
    </li>
    <li><a href="#usage">Usage</a></li>
    <li><a href="#roadmap">Roadmap</a></li>
    <li><a href="#contributing">Contributing</a></li>
    <li><a href="#contact">Contact</a></li>
  </ol>
</details>



<!-- ABOUT THE PROJECT -->
## About The Project

<div align="center">
  <a>
    <img src="https://media.discordapp.net/attachments/453159761639112706/1050410682153181216/image.png" alt="ft_printf header">
  </a>
</div>

This project is focused on recode the libc's printf function and compile it as a C library<br />
### Mandatory part (conversions)
- `%c` -> print a single character.
- `%s` -> print a string of characters.
- `%p` -> The void * pointer argument is printed in hexadecimal.
- `%d` -> print a decimal (base 10) number.
- `%i` -> print an integer in base 10.
- `%u` -> print an unsigned decimal (base 10) number.
- `%x` -> print a number in hexadecimal (base 16), with lowercase.
- `%X` -> print a number in hexadecimal (base 16), with uppercase.
- `%%` -> print a percent sign.

### Bonus part

- Managing any combination of the following flags: ``-0.`` and minimum field width
with all conversions
- Managing all the following flags: `#+` + the space one

<p align="right">(<a href="#top">back to top</a>)</p>


<!-- GETTING STARTED -->
## Getting Started

Because it's a simple C library, there isn't much to say here

### Prerequisites

Having a C compiler like cc, gcc or clang

### Installation

1. Clone the repo
   ```sh
   git clone https://github.com/Link-Wolf/ft_printf.git
   ```
2. Compile the project
   ```sh
   cd ft_printf; make
   ```
3. Include ft_printf in your C project
   ```c
   #include "include/ft_printf.h
   ```
4. Compile your project with the ft_printf library
   ```sh
   gcc your_project.c -L. -lftprintf
   ```

<p align="right">(<a href="#top">back to top</a>)</p>



<!-- USAGE EXAMPLES -->
## Usage

Use the ft_printf function as you'd use the native printf (for the available conversions) </br>
As ft_printf doesn't include all printf features, it is way more fast than printf (for example for debugging purposes, when a segmentation fault occurs after a printf, it doesn't have enough time to be executed before the segfault)

```c
char c = 'a';
char *s = "wesome";
int d = 42;
int i = 69;
unsigned int u = 30903;
int x = 58;
int x_two = 424;

ft_printf("Char : %c\n", c);
ft_printf("String : %s\n", s);
ft_printf("Pointer : %p\n", s);
ft_printf("Decimal number : %d\n", d);
ft_printf("Integer : %i\n", i);
ft_printf("Unsigned decimal number : %u\n", u);
ft_printf("Hexadecimal in lowercase : %x\n", x);
ft_printf("Hexadecimal in uppercase : %X\n", x_two);
ft_printf("Percent : %%\n");
```
Output
```
Char : a$
String : wesome$
Pointer : 0x10a9aeeb4$
Decimal number : 42$
Integer : 69$
Unsigned decimal number : 30903$
Hexadecimal in lowercase : 3a$
Hexadecimal in uppercase : 1A8$
Percent : %$
```

<p align="right">(<a href="#top">back to top</a>)</p>



<!-- ROADMAP -->
## Roadmap

- [x] Add bonus features
- [x] Add back to top links

See the [open issues](https://github.com/Link-Wolf/ft_printf/issues) for a full list of proposed features (and known issues).

<p align="right">(<a href="#top">back to top</a>)</p>



<!-- CONTRIBUTING -->
## Contributing

If you have a suggestion that would make this better, please fork the repo and create a pull request. You can also simply open an issue with the tag "enhancement".
Don't forget to give the project a star! Thanks again!

1. Fork the Project
2. Create your Feature Branch (`git checkout -b feature/AmazingFeature`)
3. Commit your Changes (`git commit -m 'Add some AmazingFeature'`)
4. Push to the Branch (`git push origin feature/AmazingFeature`)
5. Open a Pull Request

<p align="right">(<a href="#top">back to top</a>)</p>

<!-- CONTACT -->
## Contact

Mail : xxxxxxx@student.42mulhouse.fr

Project Link: [https://github.com/Link-Wolf/ft_printf](https://github.com/Link-Wolf/ft_printf)

<p align="right">(<a href="#top">back to top</a>)</p>
