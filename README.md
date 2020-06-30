# 中国石油大学(华东)本科毕业设计论文LaTeX模板2020 

此模板是中国石油大学(华东)2020本科毕业设计论文word模板的LaTex实现，欢迎使用!

本项目的目的在于借助用LaTeX写论文时内容与样式分离的特性，为同学们创造简单、易用、专注于内容的论文写作体验，避免听同学们在不必要的工作量和在大量排版工作上浪费时间。

当然，如果你之前从未使用过LaTex，你会需要一些时间来了解这个工具和配置工作环境。

使用此模板的过程中，比较简单的问题可以在qq群1105166609中互助解决。如果模板中出现错误，或者缺乏你需要的功能，请在[walkman-z/upc-thesis-2020](https://github.com/walkman-z/upc-thesis-2020/issues)上提交issue。

## 为什么选择LaTex

+ 稳定、精确、美观的打印效果。基本没有bug和兼容性问题
+ 易用、全面的数学排版支持。这对论文中有大量数学公式的同学尤为重要。
+ 内容与样式分离。模板的使用者基本只需要关注论文的内容。省心省力。
+ 跨平台、免费。当然这只是次要的。
+ 提前掌握。如果你在未来要继续投身学术事业，学会使用Latex也是很重要的。



## 工具链

首先你需要安装 Latex环境。

LaTeX有着TeXLive/MiKTeX/MacTex等多种实现。推荐使用TeXLive，跨平台且易于安装。你可以在[清华镜像站](https://mirrors.tuna.tsinghua.edu.cn/CTAN/systems/texlive/Images/)下载最新的TeXLive2020的iso镜像文件。下载后，打开镜像并点击nstall-tl-windows.bat文件即可开始安装。


由于LaTex的源文件是一系列纯文本文件，你可以在你喜欢的任何文本编辑器中编写它们。主流的文本编辑器都对LaTeX有着完善丰富的插件支持。

常见的Latex编辑器方案有

+ texworks 安装texlive时自带。
+ texstudio 挺好用。
+ overleaf 网上latex编辑环境，不需要在本地安装tex环境，需要网络。
+ sublimetext3 插件LaTeXtools提供的公式预览的功能挺不错。
+ VScode 没试过，似乎功能很丰富。
+ atom 没试过。
+ emacs 古老的编辑器，很难上手，但配置好后效率极高。
+ vim 同上。


要高效率的使用latex写论文，以下几个功能我认为是不可或缺的

+ 命令高亮
+ 快速插入环境、公式等
+ 关键字补全
+ 实时的公式显示
+ tex文件和pdf文件的正、反向搜索
+ 快速的搜索\替换功能
+ 快速注释


我比较常用的是sublimetext3和emacs这两种，其他的方案用的不多，同学们可以选择自己喜欢的编辑器。


配置sublimetext3中latex编辑环境需要的插件有

+ LaTeXtools
+ LaTeXXYZ
+ LaTeX-cwl
  还需要安装sumatra pdf阅读器并配置反向搜索来配合使用。

在网上搜索"sublimtext3 latex"就可以找到许多配置教程。在这里就不赘述了。

一些写论文时可能会用到的网站和工具：

如果你不想记大量的LaTeX数学命令，或者你有一些又臭又长的公式，你可以在网站[latexlive](https://www.latexlive.com/)上以类似word的公式编辑器一样的方式来打出公式。这个网站还具有许多其他很有用的功能，如将公式输出为图片，输出公式到Word，手写公式识别，图片公式识别（写文献翻译必备）等。

手动写Latex的表格也是比较麻烦的事情，你可以在[tablesgenerator](https://www.tablesgenerator.com/)上粘贴你Excel或word表格中的数据来直接生成Latex的表格代码。

实用的pdf外文翻译工具 [copytranslator](https://copytranslator.github.io/)(可自动去除pdf复制产生的断行)。

从学校的[webvpn](https://wvpn.upc.edu.cn/)入口访问知网可以免费下载文献。但是很多时候只能下载caj格式，如果你设置知网语言为英文，就可以直接下载文献的PDF版。



一些常见的搜索外文文献站点：

[springer](https://www.springer.com/cn)

[Elsevier](https://www.sciencedirect.com/)

[IEEE Xplore](https://ieeexplore.ieee.org/Xplore/home.jsp)

在上述网站搜索到你需要的文献的网址或doi后，复制进[sci-hub](https://sci-hub.tw/)这个网站的搜索框内，基本上都可以马上下载到对应的文献。注意此网站的域名经常变动，失效的话请自行寻找新的网址。

## 模板使用指南

文件目录结构：

.
├── 2020新格式-数学与信息专业--毕业设计模板.doc //Word模板参考
├── figure  //图片文件夹
│   ├── guozuni.png
│   └── UPCLogo.png  //学校logo
├── main.pdf
├── main.tex  //主控文件
├── README.org
├── ref   //引用文件
│   └── bibliography.bib
├── sections  //章节代码存放位置
│   ├── after  //论文后文部分
│   │   ├── appendix.tex  //附录
│   │   ├── reference.tex  //参考文献页
│   │   └── thankpage.tex  //致谢
│   ├── before  //论文前文部分
│   │   ├── cnabstract.tex  //中文摘要
│   │   └── enabstract.tex  //英文摘要
│   ├── body  //论文主体部分
│   │   ├── section1.tex
│   │   ├── section2.tex
│   │   ├── section3.tex
│   │   ├── section4.tex
│   │   └── section5.tex
│   ├── manual  //模板使用手册
│   │   ├── section1.tex
│   │   ├── section2.tex
│   │   ├── section3.tex
│   │   ├── section4.tex
│   │   └── section5.tex
│   └── test  //复刻word模板，查看效果
│       ├── examplesec1.tex
│       ├── examplesec2.tex
│       ├── examplesec3.tex
│       ├── examplesec4.tex
│       ├── examplesec5.tex
│       └── test.tex  //测试各种环境
├── style
│   ├── gbt7714-2005.bst  //bib引用样式
│   ├── gbt7714-2015.bst
│   └── preamble.tex  //导言区设置
└── upcthesis.cls  //文档类文件

**请在主文件main.tex中编译manual文件夹内的章节来查看使用说明**。

## 工作内容

### 已解决的问题

+ 修正附录的目录的不正常缩进
+ 较长论文题目的换行首字对齐
+ 较长中英关键字的换行首字对齐
+ 加入定理类环境
+ 将模板拆分结构化，实现单章的独立编译
+ 分离导言区的设置
+ 加入双面打印宏，取消注释后自动在特定位置添加空白页
+ 将双面打印功能直接整合进环境中

### 解决中的问题

+ 实现可换页的长表格和长公式环境
+ 完善REEADME
+ 写manual

### 拟解决的问题

+ 各种代码类环境的实现
+ 兼容纯英文毕业论文
+ 暂时设置为手动引用参考文献，未来将实现bib引用参考文献的样式

## 模板历史及感谢

本模板的主要代码来自于[DotWang](https://github.com/DotWang)学长的 [UPCThesis_advanced](https://github.com/DotWang/UPCThesis_advanced/commits/master) 。

该项目修改自[UPCThesis](https://github.com/UPCLaTeX) 学长的 [UPCThesis](https://github.com/UPCLaTeX/UPCThesis)。

上项目又fork自 [skinaze](https://github.com/skinaze) 的 [华中科技大学本科毕业论文LaTeX模板](https://github.com/skinaze/HUSTPaperTemp)。
在此，对各位前辈表示感谢。

另外，此模板的修改过程中参照了许多其他学校的官方模板。不再一一致谢。

## License                                                         

暂时还不知道用啥