//
//     Generated by private class-dump
//

@class BDNovelReaderFont, NSProgress;

@interface BDNovelReaderFontDownloadTask : NSObject {
    BDNovelReaderFont *_font;
    id /* block */ _handler;
    NSProgress *_progress;
}

@property (retain, nonatomic) BDNovelReaderFont *font;
@property (copy, nonatomic) id /* block */ handler;
@property (retain, nonatomic) NSProgress *progress;

- (void).cxx_destruct;
- (void)setHandler:(id /* block */)arg0;
- (id)font;
- (id)progress;
- (void)setFont:(id)arg0;
- (id /* block */)handler;
- (void)setProgress:(id)arg0;

@end