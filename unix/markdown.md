# Essential Markdown

## Overview

Markdown is a specialized markup language frequently used in online code 
documentation.  It is an easier and faster way to write stylised pages than
HTML and CSS.   It is designed so the source code can give hints about what
the final markup will look like.

To best understand this document, look at it in both preview and edit mode
in github.

## headings

Use the pound sign (\#) followed by a space at the beginning of a line to indicate
a heading level

# Heading level one
## Heading level two
### Heading level three

## emphasis

*italic*  
**bold**

## code formatting
Use this for preformatted text, especially code snippets or algorithms
where indentation and spacing are important


If you want to use I/O in c, you'll need to start with `#include <stdio.h>` as your first line
Note these are back ticks, often found at the top left corner of the keyboard.

Use triple backticks to mark a block of code
```
#include <stdio.h>
// classic 'hello world program

int main(){
    printf("Hello, world!");
    return(0);
} // end main

```

## lists

* one
* two
* three

1. one
1. two
1. three

* one
* two
  * two A
  * two B
* three

## task list
TO DO:

[x] learn basic unix  
[ ] take over the world

## html

if you know how to write HTML, you can simply embed html tags
<button type = "button" onclick = alert("Hi there")>click Me</button>
<a href = "https://docs.github.com/en/get-started/writing-on-github/getting-started-with-writing-and-formatting-on-github/basic-writing-and-formatting-syntax">official markdown docs</a> at github.com


