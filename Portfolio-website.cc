<span id="comment">/**
 * Copyright (c) 2008 <span id="name"><a href="./">Bert JW Regeer</a></span>;
 *
 * Permission to use, copy, modify, and distribute this software for any
 * purpose with or without fee is hereby granted, provided that the above
 * copyright notice and this permission notice appear in all copies.
 *
 * THE SOFTWARE IS PROVIDED "AS IS" AND THE AUTHOR DISCLAIMS ALL WARRANTIES
 * WITH REGARD TO THIS SOFTWARE INCLUDING ALL IMPLIED WARRANTIES OF
 * MERCHANTABILITY AND FITNESS. IN NO EVENT SHALL THE AUTHOR BE LIABLE FOR
 * ANY SPECIAL, DIRECT, INDIRECT, OR CONSEQUENTIAL DAMAGES OR ANY DAMAGES
 * WHATSOEVER RESULTING FROM LOSS OF USE, DATA OR PROFITS, WHETHER IN AN
 * ACTION OF CONTRACT, NEGLIGENCE OR OTHER TORTIOUS ACTION, ARISING OUT OF
 * OR IN CONNECTION WITH THE USE OR PERFORMANCE OF THIS SOFTWARE.
 *
**/</span>
<span id="include">
#include &lt;iostream&gt;
#include &lt;unistd.h&gt;
</span>
<span id="fdecl">int main</span> () {
	std::cout &lt;&lt; "<span id="text">Welcome to Berts website</span>" &lt;&lt; std::endl;
	std::cout &lt;&lt; "<span id="text">\t1. <a href="./Aboutme.html">About me</a></span>" &lt;&lt; std::endl;
	std::cout &lt;&lt; "<span id="text">\t2. <a href="./Projects.html">Projects</a></span>" &lt;&lt; std::endl;
	std::cout &lt;&lt; "<span id="text">\t3. <a href="./Resume.html">Resume</a></span>" &lt;&lt; std::endl;
	std::cout &lt;&lt; "<span id="text">\t4. <a href="./Contact.html">Contact</a></span>" &lt;&lt; std::endl;

	<span id="fdecl">int</span> input;

	std::cout &lt;&lt; "<span id="text">Enter your selection: </span>" &lt;&lt; std::flush;
        std::cin &gt;&gt; input;

        <span id="comment">// We assume that execl will not fail!</span>
	<span id="fdecl">switch</span> (input) {
	        <span id="fdecl">case 1: execl</span>("<span id="text">./<a href="./Aboutme.html">Aboutme</a></span>", "<span id="text"><a href="./Aboutme.html">Aboutme</a></span>", (<span id="fdecl">char</span> *)0);
                <span id="fdecl">case 2: execl</span>("<span id="text">./<a href="./Projects.html">Projects</a></span>", "<span id="text"><a href="./Projects.html">Projects</a></span>", (<span id="fdecl">char</span> *)0);
                <span id="fdecl">case 3: execl</span>("<span id="text">./<a href="./Resume.html">Resume</a></span>", "<span id="text"><a href="./Resume.html">Resume</a></span>", (<span id="fdecl">char</span> *)0);
                <span id="fdecl">case 4: execl</span>("<span id="text">./<a href="./Contact.html">Contact</a></span>", "<span id="text"><a href="./Contact.html">Contact</a></span>", (<span id="fdecl">char</span> *)0);
                <span id="fdecl">default:</span>
                        std::cerr &lt;&lt; "<span id="text">Bad selection</span>" &lt;&lt; std::endl;
                        <span id="fdecl">return 1</span>;
	}

        <span id="fdecl">return 0</span>;
}