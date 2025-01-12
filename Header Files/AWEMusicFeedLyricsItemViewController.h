//
//     Generated by private class-dump
//

@class NSArray, NSString, AWEMusicPlayerLyricContainer, AWEGradientView;

@interface AWEMusicFeedLyricsItemViewController : AWEMusicFeedBaseItemViewController <AWEMusicPlayerLyricContainerDelegate> {
    BOOL _isLyricsProcessing;
    BOOL _isItemAppearing;
    int _currentLyricsIndex;
    AWEGradientView *_bgView;
    AWEMusicPlayerLyricContainer *_lyricContainerView;
    NSArray *_lyricsModels;
}

@property (retain, nonatomic) AWEGradientView *bgView;
@property (retain, nonatomic) AWEMusicPlayerLyricContainer *lyricContainerView;
@property (retain, nonatomic) NSArray *lyricsModels;
@property (nonatomic) int currentLyricsIndex;
@property (nonatomic) BOOL isLyricsProcessing;
@property (nonatomic) BOOL isItemAppearing;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)updatePlayProgressTime:(double)arg0 animation:(BOOL)arg1;
- (void)itemDidDisappear;
- (void)itemViewDidAppear;
- (void)itemViewDidReset;
- (void)playerControlViewProgressGestureDidEnd:(id)arg0 currentTime:(double)arg1 progress:(double)arg2 completion:(id /* block */)arg3;
- (void)setCurrentLyricsIndex:(int)arg0;
- (void)setLyricContainerView:(id)arg0;
- (id)lyricContainerView;
- (void)updateLyricsModels:(id)arg0;
- (void)updateLyricsCurrentTime:(double)arg0;
- (void)setLyricsModels:(id)arg0;
- (id)lyricsModels;
- (void)setIsLyricsProcessing:(BOOL)arg0;
- (void)setIsItemAppearing:(BOOL)arg0;
- (BOOL)isItemAppearing;
- (BOOL)isLyricsProcessing;
- (void)findCurrentLyric:(double)arg0;
- (int)currentLyricsIndex;
- (void)showGradientView:(BOOL)arg0;
- (void)onCoverLongTapped;
- (void)onCoverStatusChanged:(unsigned long long)arg0;
- (void)seekToPlayLyricsIndex:(int)arg0 completion:(id /* block */)arg1;
- (void)onChangedOfLyricsStatus:(unsigned long long)arg0 isManual:(BOOL)arg1;
- (void).cxx_destruct;
- (void)viewDidLoad;
- (id)bgView;
- (void)setBgView:(id)arg0;
- (void)updateUI;

@end
