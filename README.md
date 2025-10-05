# editline for x68k
[editline(libeditline)](https://github.com/troglobit/editline)をX68000向けにポーティングしてみました。

## editlineって何？
editline(libeditline)は一行入力機能に行編集機能を付け加えるためのライブラリです。GNU readline や BSD系の editline(libedit)と同類のライブラリですがそれらと比較すると以下のような特徴があります。
* シンプル : termcap/ncurses に依存しません
* 小さい : ライブラリファイルのフットプリントはおよそ30KBです
* ~/.inputrc のようなカスタマイズ機能がありません。カスタマイズしたい場合はソフトを変更してビルドしなおす必要があります
* 組み込む際の API は GNU readline とある程度の互換性があります。API仕様についてはオリジナルの [editline のリポジトリ](https://github.com/troglobit/editline)を参照してください。

## ビルドについて
X68000でビルドする場合、libc を使用する環境でも XClibを使用する環境でもビルドできるようにしました。以下の手順でビルドできます。
* まず src/config.h の先頭にある X68LIBC / X68XC のどちらか一方を有効にします
* "gmake -f makefile.x68"でビルドします。
* libeditline.a が作成されます。

## ライブラリを組み込む場合
* include/editline.h をインクルードしてください
* libeditline.a をリンクしてください。リンク時にdosコールの関数が足りないと言われた場合は　"-ldos" も指定してください。

## 行編集機能のキーバインドについて
* 行編集・ファイル名補完・ヒストリー機能があります。
* 概ね emacs系のキーバインドです。doc/bindings.txtにキーバインド一覧を記載しました。

## libc とxclib での動作の違いについて
* libc ではTABキーでディレクトリ名・ファイル名を補完する時のディレクトリのセパレータが '/' です。
* XClib でディレクトリ名・ファイル名を補完する時のセパレータは'\\'です。

## 組み込み使用する際のライセンスについて
* editline(libeditline)を組み込んで使用する際のライセンスは doc/LICENSE.txt に従ってください。

## サンプルについて
* もっともシンプルな組み込み例については example/exmaple.c を見てください。fgets()の代わりに readline()を呼び出すぐらいのイージーさです。
* その他の詳細については[オリジナルのeditlineのリポジトリ](https://github.com/troglobit/editline/examples)を参照してください。

## その他
* このX60000版では画面サイズを 96桁×31行で決め打ちしています。768x512ドット以外の画面モードでは画面表示が崩れる可能性があります。
* 拙作 [HISPAT](https://github.com/kazuwai1/HISPAT)に同梱されているKEY.HISを併用すると カーソルキー、ROLLUP/ROLLDOWNキーを利用できるようになります。
