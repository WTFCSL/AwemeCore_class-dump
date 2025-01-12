//
//     Generated by private class-dump
//

@class IESLiveKTVDynamicBGLyricItem, NSMutableDictionary, IESLiveOutsideStrokeLabel, NSString, UILabel, UIView, IESLiveLyricViewConfig;

@interface IESLiveKTVDynamicBGLyricLabel : UIView {
    BOOL _initialized;
    BOOL _delay;
    UILabel *_lyricLabel;
    IESLiveOutsideStrokeLabel *_maskLabel;
    UIView *_maskLabelContainer;
    long long _position;
    IESLiveKTVDynamicBGLyricItem *_lyricItem;
    IESLiveLyricViewConfig *_config;
    NSMutableDictionary *_wordWidthCache;
    double _lyricsWidth;
    double _lyricsLeftOffset;
    NSString *_lyric;
    double _curContainerWidth;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _maskFrame;
}

@property (retain, nonatomic) UILabel *lyricLabel;
@property (retain, nonatomic) IESLiveOutsideStrokeLabel *maskLabel;
@property (retain, nonatomic) UIView *maskLabelContainer;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } maskFrame;
@property (nonatomic) long long position;
@property (nonatomic) BOOL initialized;
@property (nonatomic) BOOL delay;
@property (retain, nonatomic) IESLiveLyricViewConfig *config;
@property (retain, nonatomic) IESLiveKTVDynamicBGLyricItem *lyricItem;
@property (retain, nonatomic) NSMutableDictionary *wordWidthCache;
@property (nonatomic) double lyricsWidth;
@property (nonatomic) double lyricsLeftOffset;
@property (copy, nonatomic) NSString *lyric;
@property (nonatomic) double curContainerWidth;

- (id)lyric;
- (void)setLyric:(id)arg0;
- (void)updateConfig:(id)arg0;
- (id)lyricLabel;
- (void)setLyricLabel:(id)arg0;
- (id)maskLabel;
- (void)setMaskLabel:(id)arg0;
- (void)freshAllFrame;
- (void)calcLyricWidth:(id)arg0;
- (void)setLyricsWidth:(double)arg0;
- (void)setLyricsLeftOffset:(double)arg0;
- (double)lyricsWidth;
- (id)maskLabelContainer;
- (void)setMaskFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (id)wordWidthCache;
- (void)setCurContainerWidth:(double)arg0;
- (double)lyricsLeftOffset;
- (double)curContainerWidth;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0 lyricItem:(id)arg1 config:(id)arg2;
- (void)updateInitializedStatus:(BOOL)arg0;
- (void)updateProgress:(double)arg0 wordRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })arg1;
- (void)setMaskLabelContainer:(id)arg0;
- (id)lyricItem;
- (void)setLyricItem:(id)arg0;
- (void)setWordWidthCache:(id)arg0;
- (BOOL)initialized;
- (void)setInitialized:(BOOL)arg0;
- (void)setConfig:(id)arg0;
- (void)setDelay:(BOOL)arg0;
- (void).cxx_destruct;
- (id)config;
- (long long)position;
- (BOOL)delay;
- (void)setPosition:(long long)arg0;
- (id)initWithConfig:(id)arg0;
- (void)reset;
- (void)updateWithItem:(id)arg0;
- (void)setupUI;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })maskFrame;

@end
