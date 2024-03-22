//
//     Generated by private class-dump
//

@class NSArray, IESLivePlaybackSeekProgressBar, UIView, UILabel;

@interface IESLivePlaybackSeekContainerView : UIView {
    BOOL _isPortraitStream;
    IESLivePlaybackSeekProgressBar *_progressBar;
    UILabel *_watchDuration;
    UILabel *_totalDuration;
    UIView *_pauseContainer;
    UIView *_nextContainer;
    UIView *_commentContainer;
    UIView *_orientationContainer;
    NSArray *_totalViews;
    long long _totalDurationWidth;
}

@property (retain, nonatomic) IESLivePlaybackSeekProgressBar *progressBar;
@property (retain, nonatomic) UIView *pauseContainer;
@property (retain, nonatomic) UIView *nextContainer;
@property (retain, nonatomic) UIView *commentContainer;
@property (retain, nonatomic) UIView *orientationContainer;
@property (retain, nonatomic) UILabel *watchDuration;
@property (retain, nonatomic) UILabel *totalDuration;
@property (retain, nonatomic) NSArray *totalViews;
@property (nonatomic) long long totalDurationWidth;
@property (nonatomic) BOOL isPortraitStream;

- (id)watchDuration;
- (void)setWatchDuration:(id)arg0;
- (id)commentContainer;
- (void)setCommentContainer:(id)arg0;
- (void)setIsPortraitStream:(BOOL)arg0;
- (BOOL)isPortraitStream;
- (void)handlePauseBtn:(id)arg0 hidden:(BOOL)arg1;
- (void)handleNextBtn:(id)arg0 hidden:(BOOL)arg1;
- (void)handleCommentBtn:(id)arg0 hidden:(BOOL)arg1;
- (void)setPauseContainer:(id)arg0;
- (id)pauseContainer;
- (void)handleOrientationBtn:(id)arg0 hidden:(BOOL)arg1;
- (void)setOrientationContainer:(id)arg0;
- (id)buildDurationLabel;
- (id)orientationContainer;
- (void)setTotalViews:(id)arg0;
- (id)totalViews;
- (void)remakeSeekbarConstraints;
- (void)remakeSeekbarConstraintsWith:(BOOL)arg0;
- (void)_updateProgressBar:(BOOL)arg0 draggingStyle:(BOOL)arg1;
- (void)pad_remakeConstraintsWithFullScreen:(BOOL)arg0;
- (void)updateTotalDurationStr:(id)arg0;
- (void)onSeekBeginAnimation;
- (void)onSeekEndAnimation;
- (long long)totalDurationWidth;
- (void)setTotalDurationWidth:(long long)arg0;
- (id)totalDuration;
- (void).cxx_destruct;
- (void)setup;
- (id)fontDescriptor;
- (id)initWithParent:(id)arg0;
- (id)progressBar;
- (void)setProgressBar:(id)arg0;
- (void)setTotalDuration:(id)arg0;
- (id)nextContainer;
- (void)setNextContainer:(id)arg0;

@end
