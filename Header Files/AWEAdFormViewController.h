//
//     Generated by private class-dump
//

@class AWEAwemeModel, UIView, UITapGestureRecognizer, CMCEvent, NSString, UIButton, UIPanGestureRecognizer, AWEAdSpecialWebViewController;

@interface AWEAdFormViewController : UIViewController <UIGestureRecognizerDelegate, AWEAdFormViewController> {
    BOOL _isFormSubmitted;
    AWEAwemeModel *_model;
    UIView *_containerView;
    UIView *_backDropView;
    AWEAdSpecialWebViewController *_webViewController;
    UIButton *_closeButton;
    double _keyboardOffset;
    CMCEvent *_entranceEvent;
    UITapGestureRecognizer *_dismissTapGesture;
    UIPanGestureRecognizer *_dismissPanGesture;
    NSString *_formURL;
    struct CGPoint { double x; double y; } _startPosition;
}

@property (retain, nonatomic) AWEAwemeModel *model;
@property (nonatomic) BOOL isFormSubmitted;
@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) UIView *backDropView;
@property (retain, nonatomic) AWEAdSpecialWebViewController *webViewController;
@property (retain, nonatomic) UIButton *closeButton;
@property (nonatomic) struct CGPoint { double x; double y; } startPosition;
@property (nonatomic) double keyboardOffset;
@property (retain, nonatomic) CMCEvent *entranceEvent;
@property (retain, nonatomic) UITapGestureRecognizer *dismissTapGesture;
@property (retain, nonatomic) UIPanGestureRecognizer *dismissPanGesture;
@property (copy, nonatomic) NSString *formURL;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)fetchRelateSearchWordWithModel:(id)arg0;
+ (void)showWithModel:(id)arg0 formURL:(id)arg1 event:(id)arg2;
+ (BOOL)isShowing;

- (id)formURL;
- (void)setFormURL:(id)arg0;
- (void)dismissAnimated;
- (void)formDidSubmit;
- (void)setIsFormSubmitted:(BOOL)arg0;
- (void)setEntranceEvent:(id)arg0;
- (void)selfTapped:(id)arg0;
- (void)setDismissTapGesture:(id)arg0;
- (id)dismissTapGesture;
- (void)handleDragView:(id)arg0;
- (void)setDismissPanGesture:(id)arg0;
- (id)dismissPanGesture;
- (double)viewOffsetForFingerOffset:(double)arg0;
- (double)keyboardOffset;
- (void)dismissAnimatedWithVelocity:(struct CGPoint { double x0; double x1; })arg0;
- (void)setKeyboardOffset:(double)arg0;
- (BOOL)isFormSubmitted;
- (id)entranceEvent;
- (id)backDropView;
- (void)addMaskLayerForLayer:(id)arg0;
- (void)setBackDropView:(id)arg0;
- (void)setModel:(id)arg0;
- (void)viewDidLayoutSubviews;
- (void).cxx_destruct;
- (void)keyboardFrameChanged:(id)arg0;
- (id)model;
- (void)setContainerView:(id)arg0;
- (BOOL)gestureRecognizer:(id)arg0 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg1;
- (BOOL)gestureRecognizer:(id)arg0 shouldReceiveTouch:(id)arg1;
- (BOOL)gestureRecognizerShouldBegin:(id)arg0;
- (id)containerView;
- (void)dealloc;
- (void)viewDidLoad;
- (struct CGPoint { double x0; double x1; })startPosition;
- (void)setStartPosition:(struct CGPoint { double x0; double x1; })arg0;
- (void)setupUI;
- (id)closeButton;
- (void)setCloseButton:(id)arg0;
- (id)webViewController;
- (void)setWebViewController:(id)arg0;
- (void)addObservers;

@end
