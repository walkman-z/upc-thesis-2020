# 中国石油大学(华东)本科毕业设计论文LaTeX模板2020 

此模板是中国石油大学(华东)2020本科毕业设计论文Word模板的LaTeX实现，欢迎使用!  

本项目的目的在于借助用LaTeX写论文时内容与样式分离的特性，为同学们创造简单、易用、自动化、专注于内容的论文写作体验，避免在大量的排版工作上浪费大家的时间。  

当然，如果你之前从未使用过LaTeX，你会需要一点时间来了解这个工具和配置工作环境。  



使用此模板的过程中，比较简单的问题请在qq群1105166609中互助解决。如果模板中出现错误，或者缺乏你需要的功能，可以在[walkman-z/upc-thesis-2020](https://github.com/walkman-z/upc-thesis-2020/issues)上提交issue。

[TOC]



## 为什么用LaTeX

LaTeX是一套专业的排版系统，它被专门设计用来生成高印刷质量的电子文档，并被广泛运用于科技和学术领域。

+ 跨平台、免费。
+ 稳定、精确、美观的打印效果。极少有bug和兼容性问题
+ 易用、完善、全面的数学符号排版支持。这对需要大量排版数学公式的同学尤为重要。
+ **内容与样式可以完全分离**。模板的使用者基本只需要关注论文的内容。省心省力。
+ 提前掌握。如果你在未来要继续投身学术事业，学会使用LaTeX模板也是很重要的。

但LaTeX也并非十全十美。相对word而言，LaTeX也具有一些缺陷：
+ 所见非所得，需要编译之后才能够看到你的论文。
+ 审阅功能弱于word，导师修改论文时会比较辛苦。


## 工作环境

###  下载与安装

LaTeX有着TeXLive/MiKTeX/MacTex等多种实现。推荐使用TeXLive，跨平台且易于安装。你可以在[清华镜像站](https://mirrors.tuna.tsinghua.edu.cn/CTAN/systems/texlive/Images/)下载最新的TeXLive2020的iso镜像文件。下载完成后挂载镜像，

windows下打开镜像并点击install-tl-windows.bat文件即可开始安装，linux下打开镜像后在终端下进入文件夹，输入sudo ./install-tl即可。（极少部分的电脑可能会无法打开iso格式的文件，安装虚拟光驱即可解决。）

由于文件较大，安装可能会需要较长一段时间。

### 编辑环境选择

由于LaTeX的源文件是一系列纯文本文件，你可以在你喜欢的任何文本编辑器中编写它们。众多主流的文本编辑器都对LaTeX有着完善丰富的插件支持，可以提供诸如：
+ 命令高亮

+ 快速插入环境、公式等

+ 关键字补全

+ 实时的公式显示

+ tex文件和pdf文件的正、反向搜索

+ 快速的搜索\替换功能

+ 快速注释

等方便的功能。

常见的LaTeX编辑器方案有

+ texworks 安装texlive时自带，功能比较简单，基本不需要配置。
+ texstudio 集成了需要的功能，相当好用，基本不需要配置。
+ [overleaf](https://www.overleaf.com/) 网上LaTeX编辑环境，不需要在本地安装tex环境，需要网络，不需要配置。
+ sublimetext3 插件LaTeXtools提供的公式预览的功能挺不错。需要配置插件。见[这篇](https://www.LaTeXstudio.net/archives/51449.html)教程。
+ VScode 没试过，似乎功能很丰富。需要配置插件。
+ atom 没试过。需要配置插件。
+ emacs 难以上手，但配置好后效率极高。需要配置插件。可以看B站的[视频](https://www.bilibili.com/video/BV17W411k7w2)教程。
+ vim 同上。

我个人常用的是sublimetext3和emacs，推荐零基础的同学使用[texstudio](http://texstudio.sourceforge.net/)的2020最新版本，简单易用。安装完毕后，注意设置默认的编译引擎为xeLaTeX。



### 网站和工具

#### LaTeX自动生成工具

LaTeX的一些环境还是比较复杂的，人工手打这些命令是不可取的，有很多自动化工具可以替代这些工作。   

如果你不想记大量的LaTeX数学命令，或者你有一些又臭又长的公式，你可以在网站[LaTeXlive](https://www.LaTeXlive.com/)上以类似Word的公式编辑器一样的方式来打出公式。这个网站还具有许多其他很有用的功能，如将公式输出为图片，导出公式到Word，手写公式识别，图片公式识别（写文献翻译必备）等。

手动写LaTeX的表格也是比较麻烦的事情，你可以在[tablesgenerator](https://www.tablesgenerator.com/)上粘贴你的表格数据来直接生成LaTeX的表格代码。

#### 翻译工具

实用的pdf外文翻译工具 [copytranslator](https://copytranslator.github.io/)(可自动去除pdf复制时产生的断行)。

#### 参考文献查找与下载

从学校的[webvpn](https://wvpn.upc.edu.cn/)入口访问知网可以免费下载文献，但是往往只能下载caj格式。不过如果你设置知网语言为英文，就可以直接下载文献的PDF版。  

如果学校购买的数据库不足以满足你的需求，可以在谷歌学术上搜索需要的论文，很多时候你都能免费的找到需要的论文。  

另外还有一些一些常见的搜索外文文献站点：

[springer](https://www.springer.com/cn)  

[Elsevier](https://www.sciencedirect.com/)  

[IEEE Xplore](https://ieeexplore.ieee.org/Xplore/home.jsp)  
唯一的问题是巨额的收费。在上述网站搜索到你需要的文献的网址或doi后，复制进[sci-hub](https://sci-hub.tw/)这个网站的搜索框内，基本上都可以马上下载到对应的文献。注意此网站的域名经常变动，失效的话请自行搜索新的网址。

## 模板使用指南
**!!本模板仅支持通过xeLaTeX引擎编译!!**


模板的文件目录结构：

. % upc-thesis-2020
├── 2020新格式-数学与信息专业--毕业设计模板.doc   % Word模板，供参考  
├── figure    % 图片文件夹  
│   ├── guozuni.png  
│   └── UPCLogo.png    % 学校logo，，封面用，请勿删除  
├── main.pdf   % **输出文件**  
├── main.tex    % **主控文件**  
├── README.org  
├── ref     % 引用文件  
│   └── bibliography.bib  
├── sections    % 每个章节部分的代码，都可以单独编译  
│   ├── after    % 论文后文部分  
│   │   ├── appendix.tex    % 附录   
│   │   ├── reference.tex    % 参考文献页  
│   │   └── thankpage.tex    % 致谢  
│   ├── before    % 论文前文部分  
│   │   ├── cnabstract.tex    % 中文摘要  
│   │   └── enabstract.tex    % 英文摘要  
│   ├── body    % **论文主体部分，主要在这些子文件里编写**  
│   │   ├── section1.tex  
│   │   ├── section2.tex  
│   │   ├── section3.tex  
│   │   ├── section4.tex  
│   │   └── section5.tex  
│   ├── manual    % **模板使用手册，供参考**  
│   │   ├── section1.tex  
│   │   ├── section2.tex  
│   │   ├── section3.tex  
│   │   ├── section4.tex  
│   │   ├── section4.tex  
│   │   ├── section5.tex  
│   │   ├── section6.tex  
│   │   └── section7.tex  
│   ├── template      % **模板文件**  
│   │   ├── figure.tex      % 图片环境模板  
│   │   ├── longtable.tex      % 跨页表格环境模板  
│   │   ├── subfigure.tex      % 多图联合环境模板  
│   │   └── subfile.tex      % 子文件模板   
│   └── test    % 复刻Word模板，用来演示效果  
│       ├── examplesec1.tex  
│       ├── examplesec2.tex  
│       ├── examplesec3.tex  
│       ├── examplesec4.tex  
│       ├── examplesec5.tex  
│       └── test.tex    % 测试各种环境  
├── style  
│   ├── gbt7714-2005.bst    % bib引用样式  
│   ├── gbt7714-2015.bst  
│   └── preamble.tex    % **导言区设置**  
└── upcthesis.cls    % **文档类文件**   

**请在主文件main.tex中编译manual文件夹内的章节来查看使用说明**。

## 开发记录

### 已解决

+ 修正附录的目录的不正常缩进
+ 较长论文题目的换行首字对齐
+ 较长中英关键字的换行首字对齐
+ 加入定理类环境
+ 将模板拆分结构化，并实现单章的独立编译
+ 分离导言区设置
+ 加入双面打印宏，取消注释后自动在特定位置添加空白页
+ 将双面打印功能直接整合进环境中
+ 智能交叉引用

### 解决中

+ 实现可换页的长表格和长公式环境。
+ 完善README。
+ 写manual。

### 拟解决

+ 各种代码类环境的实现。
+ 兼容英文版毕业论文，一键切换。
+ 暂时设置为手动引用参考文献，未来将实现bib引用参考文献的样式。
+ 分离封面页，并提供外文文翻译、开题报告的模板。

## 模板历史及感谢  

本模板的代码最早来自于 [skinaze](https://github.com/skinaze)前辈的 [华中科技大学本科毕业论文LaTeX模板](https://github.com/skinaze/HUSTPaperTemp)的早期版本。  
由[UPCThesis](https://github.com/UPCLaTeX) 学长修改后提交在[UPCThesis](https://github.com/UPCLaTeX/UPCThesis)。  
在此基础上，[DotWang](https://github.com/DotWang)学长的 [UPCThesis_advanced](https://github.com/DotWang/UPCThesis_advanced/commits/master) 又做出了进一步的修改。    
由于之前两位学长修改的模板都只是个人使用，在20届大规模应用的过程中难免的出现了很多问题，故开立此项目，对原模板进行维护，查缺补漏，并添加一些新特性。  
在此对各位前辈开天辟地般的工作表示感谢。  
另外，此模板的修改过程中参照了许多其他学校的官方模板。不再一一致谢。     
有兴趣共同维护此项目的同学，可以在群里私聊我。  

## License  
本模板使用 MIT license
