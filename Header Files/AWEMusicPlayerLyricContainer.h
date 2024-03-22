//
//     Generated by private class-dump
//

@class NSString, NSArray, AWEMusicShortLyricsView, AWEMusicLongLyricsView, UIView, UILabel, AWEMusicPlayerCoverView;
@protocol AWEMusicPlayerLyricContainerDelegate;

@interface AWEMusicPlayerLyricContainer : UIView <AWEMusicPlayerLyricViewDelegate, AWEMusicPlayerCoverViewDelegate> {
    id<AWEMusicPlayerLyricContainerDelegate> _delegate;
    NSArray *_lyricsModels;
    UIView *_shortLyricsContainer;
    UIView *_longLyricsContainer;
    AWEMusicShortLyricsView *_shortLyricsView;
    AWEMusicLongLyricsView *_longLyricsView;
    UIView *_copyrightPreview;
    UILabel *_copyrightPreviewLabel;
    AWEMusicPlayerCoverView *_coverView;
    UILabel *_noLyricsLabel;
    double _coverWidth;
    double _coverheight;
    double _coverToLyricsSpace;
    double _shortLyricsHeight;
    double _shortLyricsLeft;
}

@property (retain, nonatomic) UIView *shortLyricsContainer;
@property (retain, nonatomic) UIView *longLyricsContainer;
@property (retain, nonatomic) AWEMusicShortLyricsView *shortLyricsView;
@property (retain, nonatomic) AWEMusicLongLyricsView *longLyricsView;
@property (retain, nonatomic) UIView *copyrightPreview;
@property (retain, nonatomic) UILabel *copyrightPreviewLabel;
@property (retain, nonatomic) AWEMusicPlayerCoverView *coverView;
@property (retain, nonatomic) UILabel *noLyricsLabel;
@property (nonatomic) double coverWidth;
@property (nonatomic) double coverheight;
@property (nonatomic) double coverToLyricsSpace;
@property (nonatomic) double shortLyricsHeight;
@property (nonatomic) double shortLyricsLeft;
@property (weak, nonatomic) id<AWEMusicPlayerLyricContainerDelegate> delegate;
@property (retain, nonatomic) NSArray *lyricsModels;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (double)coverWidth;
- (void)setCoverWidth:(double)arg0;
- (void)updateCoverImageUrl:(id)arg0;
- (void)updateCopyrightPreviewDuration:(unsigned long long)arg0;
- (void)setLyricsModels:(id)arg0;
- (id)lyricsModels;
- (void)showNoLyricsView:(BOOL)arg0 withCopyrightPreview:(BOOL)arg1;
- (void)onLyricsChanged:(int)arg0;
- (void)seekToPlayLyricsIndex:(int)arg0 completion:(id /* block */)arg1;
- (void)changeToLyricType:(unsigned long long)arg0 animation:(BOOL)arg1;
- (void)coverStatusChanged:(unsigned long long)arg0;
- (void)coverLongTapped;
- (void)setLongLyricsContainer:(id)arg0;
- (id)longLyricsContainer;
- (void)setLongLyricsView:(id)arg0;
- (id)longLyricsView;
- (void)setShortLyricsContainer:(id)arg0;
- (id)shortLyricsContainer;
- (void)setShortLyricsView:(id)arg0;
- (id)shortLyricsView;
- (void)setShortLyricsHeight:(double)arg0;
- (double)shortLyricsLeft;
- (void)setNoLyricsLabel:(id)arg0;
- (id)noLyricsLabel;
- (void)showLyricType:(unsigned long long)arg0;
- (id)copyrightPreview;
- (void)setShortLyricsLeft:(double)arg0;
- (void)setCoverheight:(double)arg0;
- (void)setCoverToLyricsSpace:(double)arg0;
- (void)layoutShortLyricsContainer;
- (void)layoutLongLyricsContainer;
- (double)coverToLyricsSpace;
- (double)shortLyricsHeight;
- (double)coverheight;
- (id)copyrightPreviewLabel;
- (void)setCopyrightPreviewLabel:(id)arg0;
- (void)setCopyrightPreview:(id)arg0;
- (void).cxx_destruct;
- (void)setup;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (id)delegate;
- (void)viewDidAppear;
- (void)layoutSubviews;
- (void)setDelegate:(id)arg0;
- (void)reset;
- (void)viewDidDisappear;
- (void)calculateSize;
- (id)coverView;
- (void)setCoverView:(id)arg0;

@end