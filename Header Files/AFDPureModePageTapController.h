//
//     Generated by private class-dump
//

@class UITapGestureRecognizer, NSString, NSObject;
@protocol AWEAwemePlayInteractionInteractorProtocol;

@interface AFDPureModePageTapController : AWEBaseController <AFDPureModePageControllerProtocol> {
    UITapGestureRecognizer *_tapGesture;
    double _lastClickTimestamp;
    NSObject<AWEAwemePlayInteractionInteractorProtocol> *_interactor;
    struct CGPoint { double x; double y; } _singleClickedPoint;
}

@property (retain, nonatomic) UITapGestureRecognizer *tapGesture;
@property (nonatomic) struct CGPoint { double x; double y; } singleClickedPoint;
@property (nonatomic) double lastClickTimestamp;
@property (retain, nonatomic) NSObject<AWEAwemePlayInteractionInteractorProtocol> *interactor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)playDiggAnimationInView:(id)arg0 location:(struct CGPoint { double x0; double x1; })arg1 image:(id)arg2;
- (void)onVideoPlayerViewDoubleClicked:(id)arg0;
- (double)lastClickTimestamp;
- (void)setLastClickTimestamp:(double)arg0;
- (void)onVideoPlayerViewClicked:(id)arg0;
- (void)onVideoPlayerViewSingleClicked:(id)arg0;
- (void)setSingleClickedPoint:(struct CGPoint { double x0; double x1; })arg0;
- (struct CGPoint { double x0; double x1; })singleClickedPoint;
- (BOOL)shouldBlockLikeIfNeededWithUnBlockCompletion:(id /* block */)arg0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })scaleRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0 scale:(double)arg1;
- (id)interactor;
- (void).cxx_destruct;
- (void)setInteractor:(id)arg0;
- (id)tapGesture;
- (id)layer;
- (void)viewDidLoad;
- (id)view;
- (void)setTapGesture:(id)arg0;

@end
