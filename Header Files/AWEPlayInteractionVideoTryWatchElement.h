//
//     Generated by private class-dump
//

@class NSString, CADisplayLink, AWEPaymentEventHandler, UIView;
@protocol AWEVideoTryWatchViewProtocol;

@interface AWEPlayInteractionVideoTryWatchElement : AWEPlayInteractionLeftElement <AWEPaymentEventHandlerDelegate, CAAnimationDelegate> {
    BOOL _hasReportTrialEnd;
    BOOL _hasClosedProductDetail;
    UIView<AWEVideoTryWatchViewProtocol> *_tryWatchView;
    double _currVideoStartTime;
    double _currVideoEndTime;
    double _playBackTime;
    NSString *_containerID;
    AWEPaymentEventHandler *_eventHandler;
    CADisplayLink *_displayLink;
}

@property (retain, nonatomic) UIView<AWEVideoTryWatchViewProtocol> *tryWatchView;
@property (nonatomic) double currVideoStartTime;
@property (nonatomic) double currVideoEndTime;
@property (nonatomic) double playBackTime;
@property (copy, nonatomic) NSString *containerID;
@property (retain, nonatomic) AWEPaymentEventHandler *eventHandler;
@property (retain, nonatomic) CADisplayLink *displayLink;
@property (nonatomic) BOOL hasReportTrialEnd;
@property (nonatomic) BOOL hasClosedProductDetail;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)initializeElement;
- (void)viewDidDisposed;
- (double)currentPlayProgress;
- (id /* block */)onClickBlock;
- (void)viewController_willDisplay;
- (id)activateInfoWithData:(id)arg0;
- (void)playResumeDisplayLink;
- (void)resetDisplayLink;
- (id)getRecType:(id)arg0;
- (void)layoutElementView;
- (id)tryWatchView;
- (void)setTryWatchView:(id)arg0;
- (double)playBackTime;
- (void)setPlayBackTime:(double)arg0;
- (void)setHasClosedProductDetail:(BOOL)arg0;
- (void)animateViewDisappearance;
- (void)animateViewAppearance;
- (id)trackLogoShowExtraParams;
- (void)setHasReportTrialEnd:(BOOL)arg0;
- (void)setCurrVideoStartTime:(double)arg0;
- (void)setCurrVideoEndTime:(double)arg0;
- (double)currVideoEndTime;
- (BOOL)hasReportTrialEnd;
- (id)trackTrialEndExtraParams;
- (BOOL)hasClosedProductDetail;
- (id)opacityAnimation:(double)arg0 toValue:(double)arg1;
- (id)pathAnimation:(BOOL)arg0;
- (id)trackLogoClickExtraParams;
- (double)currVideoStartTime;
- (id)eventHandler;
- (void)setDisplayLink:(id)arg0;
- (void)setContainerID:(id)arg0;
- (void).cxx_destruct;
- (double)animationDuration;
- (id)containerID;
- (id)displayLink;
- (void)setEventHandler:(id)arg0;
- (void)animationDidStop:(id)arg0 finished:(BOOL)arg1;
- (void)dealloc;
- (void)reset;
- (void)viewDidLoad;

@end