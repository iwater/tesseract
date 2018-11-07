Tesseract.js
============

This folder contains files for tesseract.js.

### tesseract.idl

This WebIDL file base on following files:

- src/api/baseapi.h
- src/ccmain/pageiterator.h
- src/ccmain/resultiterator.h
- src/ccstruct/publictypes.h

Basic guidance for converting C/C++ types to WebIDL types:

| C/C++ | WebIDL |
| ----- | ------ |
| void | void |
| const | [Const] |
| char\* | DOMString |
| int | long |
| bool | boolean |
| const unsigned char\* | Uint8Array |
| Pix\* | Pix |
| Pixa\*\* | PixaPtr |
| int\*\* | LongStarPtr |
| ETEXT\_DESC\* | ETEXT\_DESC |
| const & | [Const, Ref] |
| int\* | IntPtr |
| float\* | FloatPtr |
| bool\* | BoolPtr |

> IDL = Interface Description Language, describing APIs implemented in web.

### glue.cpp & glue.js

File generated from tesseract.idl, you can execute following command to generate:

```sh
$ sh gen-glue-code.sh
```
