<p align="center">
	<br>
	<img src="https://upload.wikimedia.org/wikipedia/commons/c/cc/Merge-sort-example-300px.gif">
	<br>
	<br>
	<b>mergesort.c</b>: Merge Sort algorithm library in C
	<br>
</p>

<p align="center">
	<a href="https://travis-ci.org/abranhe/mergesort.c"><img src="https://img.shields.io/travis/abranhe/mergesort.c.svg?logo=travis" /></a>
	<a href="https://github.com/abranhe"><img src="https://abranhe.com/badge.svg"></a>
	<a href="https://cash.me/$abranhe"><img src="https://cdn.abranhe.com/badges/cash-me.svg"></a>
	<a href="https://patreon.com/abranhe"><img src="https://cdn.abranhe.com/badges/patreon.svg" /></a>
	<a href="https://github.com/abranhe/mergesort.c/blob/master/license"><img src="https://img.shields.io/github/license/abranhe/mergesort.c.svg" /></a>

  <br>
  <br>
</p>
In computer science, merge sort is an efficient, general-purpose, comparison-based sorting algorithm. Most implementations produce a stable sort, which means that the implementation preserves the input order of equal elements in the sorted output.


## Installation

*Installing using [Clib](https://github.com/clibs/clib)*

```sh
$ clib install abranhe/mergesort.c
```

## Usage

```c
#include "mergesort.h"

int main()
{
	int arr[] = {10, 7, 12, 27, 30};

	mergeSort(arr, 0, 5);
	// 7 10 12 27 30
}
```

See a real [example][example].

## API

#### `void mergeSort(arr, first, last);`

*Implement merge sort.*

###### Params:

- `array`: unsorted Array
- `first`: first element of the array to start sorting
- `last`: last element of the array to finish sorting

## Team

|[![Carlos Abraham Logo][abranhe-img]][abranhe]|
| :-: |
| [Carlos Abraham][abranhe] |

## License

[MIT][license] License © [Carlos Abraham][abranhe]

<!-------------------- Links ------------------------>
[abranhe]: https://github.com/abranhe
[abranhe-img]: https://avatars3.githubusercontent.com/u/21347264?s=50
[license]: https://github.com/abranhe/mergesort.c/blob/master/license
[example]: https://github.com/abranhe/mergesort.c/blob/master/example.c
[travis-badge]: https://img.shields.io/travis/abranhe/mergesort.c.svg
[travis-status]: https://travis-ci.org/abranhe/mergesort.c
[coverage-badge]: https://img.shields.io/coveralls/abranhe/mergesort.c.svg
[coverage-status]: https://coveralls.io/r/abranhe/mergesort.c?branch=master
