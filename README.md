<!DOCTYPE html>
<html lang="en">
<head>
  <meta charset="UTF-8">
  <meta name="viewport" content="width=device-width, initial-scale=1.0">
</head>
<body>

<header>
  <h1>Split Two-Word String</h1>
  <p>This C program splits a two-word string into two separate words, handling any extra spaces between them.</p>
</header>

<hr>

<details>
  <summary>Table of Contents 📖</summary>
  <ul>
    <li><a href="#task">Task</a></li>
    <li><a href="#input-and-output">Input and Output</a></li>
    <li><a href="#examples">Examples</a></li>
    <li><a href="#requirements">Requirements</a></li>
    <li><a href="#usage">Usage</a></li>
  </ul>
</details>

<hr>

<section id="task">
  <h2>Task 🛠️</h2>
  <p>Write a C program that splits a two-word string into two strings, each containing one word. The words in the input string may be separated by one or more spaces, and there may be leading or trailing spaces.</p>
</section>

<hr>

<section id="input-and-output">
  <h2>Input and Output 🖥️</h2>
  <h3>Input</h3>
  <ul>
    <li>A string with two words separated by spaces (the string may have extra spaces).</li>
  </ul>

  <h3>Output</h3>
  <ul>
    <li>Print the two words, each on a new line.</li>
  </ul>
</section>

<hr>

<section id="examples">
  <h2>Examples 📋</h2>
  <h3>Example #1</h3>
  <div class="code-block">
    Input:<br>
    hurricane helene<br><br>
    Output:<br>
    Word #1: hurricane<br>
    Word #2: helene
  </div>

  <h3>Example #2</h3>
  <div class="code-block">
    Input:<br>
    hurricane    helene<br><br>
    Output:<br>
    Word #1: hurricane<br>
    Word #2: helene
  </div>

  <h3>Example #3</h3>
  <div class="code-block">
    Input:<br>
    hurricane    helene      <br><br>
    Output:<br>
    Word #1: hurricane<br>
    Word #2: helene
  </div>

  <p><strong>Explanation:</strong></p>
  <ul>
    <li>The program correctly splits the string even when extra spaces are present between the words or around the input.</li>
  </ul>
</section>

<hr>

<section id="requirements">
  <h2>Requirements ✔️</h2>
  <ol>
    <li>The program must include the function:
      <ul>
        <li><code>void split(char *input, char *word1, char *word2);</code></li>
        <li>This function will split the string into two words, storing them in <code>word1</code> and <code>word2</code>.</li>
        <li>The program should use pointer arithmetic and avoid array subscripting (i.e., <code>array[i]</code>).</li>
        <li>Eliminate all counter variables (like <code>i</code>, <code>j</code>) and avoid using the <code>[]</code> operator.</li>
      </ul>
    </li>
  </ol>
</section>

<hr>

<section id="usage">
  <h2>Usage 🚀</h2>
  <p><strong>1. Compile the Program:</strong></p>
  <div class="code-block">gcc -o split_string split_string.c</div>
  <p><strong>2. Run the Program:</strong></p>
  <div class="code-block">./split_string</div>
  <p><strong>3. Input Required:</strong></p>
  <ul>
    <li>A string with two words separated by spaces (the string may have extra spaces).</li>
  </ul>
</section>

</body>
</html>
