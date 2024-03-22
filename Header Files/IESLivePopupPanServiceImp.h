//
//     Generated by private class-dump
//

@class UIView, NSString, UIPanGestureRecognizer;
@protocol IESLivePopupDelegate;

@interface IESLivePopupPanServiceImp : NSObject <IESLivePopupPanService> {
    BOOL _viewDidReachTop;
    BOOL _viewDidReachLeft;
    BOOL _isPush;
    id /* block */ panMoveSlaveBlock;
    UIPanGestureRecognizer *_pan;
    UIView *_view;
    double _backgroundBottom;
    double _backgroundRight;
    id<IESLivePopupDelegate> _delegate;
    id /* block */ _completion;
}

@property (retain, nonatomic) UIPanGestureRecognizer *pan;
@property (weak, nonatomic) UIView *view;
@property (nonatomic) double backgroundBottom;
@property (nonatomic) double backgroundRight;
@property (nonatomic) BOOL isPush;
@property (weak, nonatomic) id<IESLivePopupDelegate> delegate;
@property (copy, nonatomic) id /* block */ completion;
@property (nonatomic) BOOL viewDidReachTop;
@property (nonatomic) BOOL viewDidReachLeft;
@property (copy, nonatomic) id /* block */ panMoveSlaveBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)isPush;
- (void)setIsPush:(BOOL)arg0;
- (void)addFollowGestureInView:(id)arg0 backgroundBottom:(double)arg1 completion:(id /* block */)arg2;
- (void)addFollowGestureInView:(id)arg0 backgroundBottom:(double)arg1 delegate:(id)arg2 completion:(id /* block */)arg3;
- (void)addPushFollowGestureInView:(id)arg0 backgroundRight:(double)arg1 delegate:(id)arg2 completion:(id /* block */)arg3;
- (BOOL)viewDidReachTop;
- (void)setViewDidReachTop:(BOOL)arg0;
- (BOOL)viewDidReachLeft;
- (void)setViewDidReachLeft:(BOOL)arg0;
- (id /* block */)panMoveSlaveBlock;
- (void)setPanMoveSlaveBlock:(id /* block */)arg0;
- (double)backgroundBottom;
- (void)setBackgroundBottom:(double)arg0;
- (void)setBackgroundRight:(double)arg0;
- (BOOL)isValidView:(id)arg0;
- (void)panWithPushAnim:(id)arg0;
- (double)backgroundRight;
- (id)pan;
- (id /* block */)completion;
- (void).cxx_destruct;
- (void)setCompletion:(id /* block */)arg0;
- (BOOL)gestureRecognizer:(id)arg0 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg1;
- (void)setView:(id)arg0;
- (id)delegate;
- (BOOL)gestureRecognizerShouldBegin:(id)arg0;
- (void)pan:(id)arg0;
- (void)setDelegate:(id)arg0;
- (void)setPanEnabled:(BOOL)arg0;
- (id)view;
- (void)setPan:(id)arg0;

@end
