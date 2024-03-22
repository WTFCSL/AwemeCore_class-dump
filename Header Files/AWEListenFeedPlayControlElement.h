//
//     Generated by private class-dump
//

@class AWEListenFeedPlayControlView, CADisplayLink;

@interface AWEListenFeedPlayControlElement : AWEListenFeedInteractionBaseElement {
    BOOL _isCheckErrorStatus;
    AWEListenFeedPlayControlView *_controlView;
    CADisplayLink *_displayLink;
}

@property (retain, nonatomic) CADisplayLink *displayLink;
@property (nonatomic) BOOL isCheckErrorStatus;
@property (retain, nonatomic) AWEListenFeedPlayControlView *controlView;

- (void)updateWithModel:(id)arg0 playModel:(id)arg1 extendModelArray:(id)arg2 mixVideoModel:(id)arg3 currentModelIndex:(long long)arg4 context:(id)arg5;
- (void)updateWithModel:(id)arg0 playModel:(id)arg1 context:(id)arg2;
- (void)prepareForReuseVC;
- (void)p_updateWithModel:(id)arg0 playModel:(id)arg1 context:(id)arg2;
- (void)__playResumeDisplayLink;
- (void)__resetDisplayLink;
- (BOOL)isCheckErrorStatus;
- (void)setIsCheckErrorStatus:(BOOL)arg0;
- (void)setDisplayLink:(id)arg0;
- (void).cxx_destruct;
- (id)displayLink;
- (id)controlView;
- (void)viewDidLoad;
- (void)setControlView:(id)arg0;

@end
