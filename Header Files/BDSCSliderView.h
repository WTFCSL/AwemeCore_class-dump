//
//     Generated by private class-dump
//

@class UIPanGestureRecognizer, NSString, UIView;

@interface BDSCSliderView : UIView <UIGestureRecognizerDelegate> {
    BOOL _shouldFeedback;
    BOOL _isInteractive;
    double _progress;
    double _cacheProgress;
    id /* block */ _banSeek;
    id /* block */ _didSeekToProgress;
    id /* block */ _seekingToProgress;
    double _progressBeforeDragging;
    UIView *_cacheProgressView;
    UIView *_trackProgressView;
    UIView *_backgroundView;
    UIView *_thumbView;
    UIView *_thumbBackView;
    UIPanGestureRecognizer *_panGesture;
}

@property (nonatomic) double progress;
@property (nonatomic) double cacheProgress;
@property (nonatomic) BOOL isInteractive;
@property (nonatomic) double progressBeforeDragging;
@property (retain, nonatomic) UIView *cacheProgressView;
@property (retain, nonatomic) UIView *trackProgressView;
@property (retain, nonatomic) UIView *backgroundView;
@property (retain, nonatomic) UIView *thumbView;
@property (retain, nonatomic) UIView *thumbBackView;
@property (retain, nonatomic) UIPanGestureRecognizer *panGesture;
@property (nonatomic) BOOL shouldFeedback;
@property (copy, nonatomic) id /* block */ banSeek;
@property (copy, nonatomic) id /* block */ didSeekToProgress;
@property (copy, nonatomic) id /* block */ seekingToProgress;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setCacheProgress:(double)arg0;
- (double)cacheProgress;
- (id)cacheProgressView;
- (void)setCacheProgressView:(id)arg0;
- (void)hideBackThumbView:(BOOL)arg0;
- (void)setBanSeek:(id /* block */)arg0;
- (void)setSeekingToProgress:(id /* block */)arg0;
- (void)setDidSeekToProgress:(id /* block */)arg0;
- (void)setProgressBeforeDragging:(double)arg0;
- (double)progressBeforeDragging;
- (void)_buildViewHierarchy;
- (void)setCacheProgress:(double)arg0 animated:(BOOL)arg1;
- (void)hideThumbView:(BOOL)arg0;
- (void)_bindGesture;
- (void)_updateTrackProgress;
- (void)_updateCacheProgress;
- (id)trackProgressView;
- (id)thumbBackView;
- (id /* block */)banSeek;
- (BOOL)shouldFeedback;
- (double)_maxProgressWidth;
- (id /* block */)seekingToProgress;
- (id /* block */)didSeekToProgress;
- (void)visiableChanged:(BOOL)arg0;
- (void)setCacheProgressColor:(id)arg0;
- (void)setTrackProgressColor:(id)arg0;
- (void)setShouldFeedback:(BOOL)arg0;
- (void)setTrackProgressView:(id)arg0;
- (void)setThumbBackView:(id)arg0;
- (id)init;
- (id)backgroundView;
- (void).cxx_destruct;
- (id)thumbView;
- (BOOL)gestureRecognizerShouldBegin:(id)arg0;
- (void)_updateLayout;
- (BOOL)isInteractive;
- (double)progress;
- (void)pan:(id)arg0;
- (void)layoutSubviews;
- (void)setProgress:(double)arg0;
- (void)setBackgroundView:(id)arg0;
- (id)panGesture;
- (void)setPanGesture:(id)arg0;
- (void)setProgress:(double)arg0 animated:(BOOL)arg1;
- (void)setThumbView:(id)arg0;
- (void)setIsInteractive:(BOOL)arg0;

@end
