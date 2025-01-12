//
//     Generated by private class-dump
//

@class AWECommentAudioRecorderBezierPathAnimationView, AWECommentAudioRecorderViewModel, AWECommentAudioRecorderTitleView, AWECommentAudioRecorderGradientAnimationView, AWECommentAudioRecorderVolumeIncreaseView;

@interface AWECommentAudioRecorderViewControl : NSObject {
    AWECommentAudioRecorderGradientAnimationView *_cancelView;
    AWECommentAudioRecorderTitleView *_titleView;
    AWECommentAudioRecorderGradientAnimationView *_sendView;
    AWECommentAudioRecorderTitleView *_sendTitleView;
    AWECommentAudioRecorderBezierPathAnimationView *_animationView;
    AWECommentAudioRecorderVolumeIncreaseView *_volumeIncreaseView;
    AWECommentAudioRecorderViewModel *_viewModel;
    unsigned long long _preState;
    unsigned long long _currentState;
}

@property (retain, nonatomic) AWECommentAudioRecorderGradientAnimationView *cancelView;
@property (weak, nonatomic) AWECommentAudioRecorderViewModel *viewModel;
@property (retain, nonatomic) AWECommentAudioRecorderBezierPathAnimationView *animationView;
@property (nonatomic) unsigned long long preState;
@property (nonatomic) unsigned long long currentState;
@property (retain, nonatomic) AWECommentAudioRecorderTitleView *titleView;
@property (retain, nonatomic) AWECommentAudioRecorderVolumeIncreaseView *volumeIncreaseView;
@property (retain, nonatomic) AWECommentAudioRecorderTitleView *sendTitleView;
@property (retain, nonatomic) AWECommentAudioRecorderGradientAnimationView *sendView;

- (id)volumeIncreaseView;
- (id)cancelView;
- (void)addViewModelKVO;
- (id)getSubViewWithType:(unsigned long long)arg0;
- (void)prepareToStopAllOtherWithPreState:(unsigned long long)arg0 currentState:(unsigned long long)arg1;
- (void)setPreState:(unsigned long long)arg0;
- (unsigned long long)preState;
- (id)sendView;
- (id)sendTitleView;
- (void)setCancelView:(id)arg0;
- (void)setSendView:(id)arg0;
- (void)setSendTitleView:(id)arg0;
- (void)setVolumeIncreaseView:(id)arg0;
- (void)setCurrentState:(unsigned long long)arg0;
- (void).cxx_destruct;
- (id)initWithViewModel:(id)arg0;
- (unsigned long long)currentState;
- (id)allViews;
- (void)setViewModel:(id)arg0;
- (void)setTitleView:(id)arg0;
- (id)viewModel;
- (void)dealloc;
- (id)titleView;
- (id)animationView;
- (void)setAnimationView:(id)arg0;

@end
