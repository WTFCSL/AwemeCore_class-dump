//
//     Generated by private class-dump
//

@class UIButton, NSString, AWEAwemeModel;
@protocol AWEAdSearchVideoViewToDetailProtocol, AWESearchVideoViewPlayerDelegate;

@interface AWEAdSearchVideoView : AWESearchVideoView <AWEAdSearchVideoViewProtocol> {
    id<AWEAdSearchVideoViewToDetailProtocol> _adVideoDelegate;
    id<AWESearchVideoViewPlayerDelegate> _delegate;
    UIButton *_videoActionButton;
    double _lastClickTimestamp;
    AWEAwemeModel *_awemeModel;
}

@property (retain, nonatomic) UIButton *videoActionButton;
@property (nonatomic) double lastClickTimestamp;
@property (retain, nonatomic) AWEAwemeModel *awemeModel;
@property (readonly, copy, nonatomic) NSString *adEventName;
@property (weak, nonatomic) id<AWEAdSearchVideoViewToDetailProtocol> adVideoDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)awemeModel;
- (void)setAwemeModel:(id)arg0;
- (id)adEventName;
- (long long)loopTimes;
- (double)currPlaybackTime;
- (double)lastClickTimestamp;
- (void)setLastClickTimestamp:(double)arg0;
- (void)configUI;
- (id)videoActionButton;
- (void)videoPlayerViewTapped:(id)arg0;
- (void)switchVideoStatusByClick:(id)arg0;
- (void)videoPlayerViewSingleTapped:(id)arg0;
- (void)videoPlayerViewDoubleTapped:(id)arg0;
- (id)adVideoDelegate;
- (void)playOrPause;
- (void)showPlayingUI;
- (void)showPauseUI;
- (void)setAdVideoDelegate:(id)arg0;
- (void)setVideoActionButton:(id)arg0;
- (void).cxx_destruct;
- (id)delegate;
- (id)videoDuration;
- (void)setDelegate:(id)arg0;
- (void)play;
- (void)pause;
- (void)handleLongPressGesture:(id)arg0;
- (void)updateWithModel:(id)arg0;
- (void)addAction;

@end