//
//     Generated by private class-dump
//

@class NSMutableDictionary, AWEGPlayerInteractionDispatchManager, UITapGestureRecognizer, AWEGPlayerElementConfigs, UIPinchGestureRecognizer, UIViewController, AWEGPlayerInteractionBaseElementContainer, NSString, UILongPressGestureRecognizer, AWEGPlayerInteractionViewConfig, AWEPageContext, NSArray, UIPanGestureRecognizer;
@protocol AWEGPlayerViewControllerProtocol, AWEGPlayerPageContextProtocol, AWEGPlayerInteractionDelegate;

@interface AWEGPlayerInteractionView : UIView <AWEGPlayerInteractionDispatchProtocol, UIGestureRecognizerDelegate, AWEVideoPlayerLifeCycleProtocol, UIGestureRecognizerDelegate, AWEGPlayerInteractionViewProtocol> {
    id<AWEGPlayerInteractionDelegate> _interactionDelegate;
    unsigned long long _state;
    AWEPageContext<AWEGPlayerPageContextProtocol> *_pageContext;
    UIViewController<AWEGPlayerViewControllerProtocol> *_viewController;
    AWEGPlayerElementConfigs *_elementConfigs;
    double _topHeight;
    NSMutableDictionary *_cacheDict;
    AWEGPlayerInteractionBaseElementContainer *_topContainer;
    AWEGPlayerInteractionBaseElementContainer *_videoInfoContainer;
    AWEGPlayerInteractionBaseElementContainer *_middleContainer;
    AWEGPlayerInteractionBaseElementContainer *_bottomContainer;
    AWEGPlayerInteractionViewConfig *_config;
    AWEGPlayerInteractionDispatchManager *_dispatchManagerBelowBaseUI;
    AWEGPlayerInteractionDispatchManager *_dispatchManagerAboveBaseUI;
    UITapGestureRecognizer *_tap;
    UITapGestureRecognizer *_doubleTap;
    UIPanGestureRecognizer *_pan;
    UIPanGestureRecognizer *_twoFingerPanGesture;
    UIPinchGestureRecognizer *_pinchGesture;
    UILongPressGestureRecognizer *_longPress;
    NSArray *_gestureList;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) AWEPageContext<AWEGPlayerPageContextProtocol> *pageContext;
@property (weak, nonatomic) UIViewController<AWEGPlayerViewControllerProtocol> *viewController;
@property (retain, nonatomic) AWEGPlayerElementConfigs *elementConfigs;
@property (nonatomic) unsigned long long state;
@property (nonatomic) double topHeight;
@property (retain, nonatomic) NSMutableDictionary *cacheDict;
@property (retain, nonatomic) AWEGPlayerInteractionBaseElementContainer *topContainer;
@property (retain, nonatomic) AWEGPlayerInteractionBaseElementContainer *videoInfoContainer;
@property (retain, nonatomic) AWEGPlayerInteractionBaseElementContainer *middleContainer;
@property (retain, nonatomic) AWEGPlayerInteractionBaseElementContainer *bottomContainer;
@property (retain, nonatomic) AWEGPlayerInteractionViewConfig *config;
@property (retain, nonatomic) AWEGPlayerInteractionDispatchManager *dispatchManagerBelowBaseUI;
@property (retain, nonatomic) AWEGPlayerInteractionDispatchManager *dispatchManagerAboveBaseUI;
@property (retain, nonatomic) UITapGestureRecognizer *tap;
@property (retain, nonatomic) UITapGestureRecognizer *doubleTap;
@property (retain, nonatomic) UIPanGestureRecognizer *pan;
@property (retain, nonatomic) UIPanGestureRecognizer *twoFingerPanGesture;
@property (retain, nonatomic) UIPinchGestureRecognizer *pinchGesture;
@property (retain, nonatomic) UILongPressGestureRecognizer *longPress;
@property (retain, nonatomic) NSArray *gestureList;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<AWEGPlayerInteractionDelegate> interactionDelegate;

- (void)setCacheDict:(id)arg0;
- (BOOL)shouldFailedGestureRecognizer:(id)arg0;
- (BOOL)shouldResponseGestureRecognizer:(id)arg0;
- (BOOL)shouldReceiveGestureRecognizer:(id)arg0 touch:(id)arg1;
- (void)setDoubleTap:(id)arg0;
- (double)containerHeightWithPosition:(long long)arg0;
- (void)updateLayoutWithEnterScreen:(BOOL)arg0;
- (id)objectsByProtocol:(id)arg0;
- (id)objectsBySelector:(SEL)arg0;
- (id)objectByProtocol:(id)arg0;
- (id)twoFingerPanGesture;
- (void)setGestureList:(id)arg0;
- (BOOL)hasRespondedGestureRecognizer:(id)arg0;
- (id)dispatchManagerAboveBaseUI;
- (id)containerList;
- (id)dispatchManagerBelowBaseUI;
- (id)gestureList;
- (void)handleResponseTapAction:(id)arg0;
- (void)handleResponseDoubleTapAction:(id)arg0;
- (void)handleResponsePanAction:(id)arg0;
- (void)handleResponseTwoFingerPanAction:(id)arg0;
- (void)handleResponsePinchGesture:(id)arg0;
- (void)handleResponseLongPressAction:(id)arg0;
- (void)setupDispatchManager;
- (void)configContainers;
- (void)setupContainers;
- (void)setTopHeight:(double)arg0;
- (id)topContainer;
- (id)videoInfoContainer;
- (id)elementConfigs;
- (id)middleContainer;
- (void)calculateTopHeightIfNeeded;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0 viewController:(id)arg1 config:(id)arg2 context:(id)arg3;
- (void)setElementConfigs:(id)arg0;
- (void)setTopContainer:(id)arg0;
- (void)setVideoInfoContainer:(id)arg0;
- (void)setMiddleContainer:(id)arg0;
- (void)setDispatchManagerBelowBaseUI:(id)arg0;
- (void)setDispatchManagerAboveBaseUI:(id)arg0;
- (void)setTwoFingerPanGesture:(id)arg0;
- (id)pan;
- (void)setViewController:(id)arg0;
- (void)setConfig:(id)arg0;
- (id)viewController;
- (void).cxx_destruct;
- (id)pinchGesture;
- (unsigned long long)state;
- (void)forwardInvocation:(id)arg0;
- (void)setState:(unsigned long long)arg0;
- (id)config;
- (void)setInteractionDelegate:(id)arg0;
- (id)interactionDelegate;
- (BOOL)gestureRecognizer:(id)arg0 shouldReceiveTouch:(id)arg1;
- (BOOL)gestureRecognizerShouldBegin:(id)arg0;
- (id)longPress;
- (void)setLongPress:(id)arg0;
- (void)setPinchGesture:(id)arg0;
- (void)dealloc;
- (void)reset;
- (void)viewDidLoad;
- (void)setPan:(id)arg0;
- (id)hitTest:(struct CGPoint { double x0; double x1; })arg0 withEvent:(id)arg1;
- (double)topHeight;
- (id)tap;
- (void)setTap:(id)arg0;
- (id)pageContext;
- (void)setPageContext:(id)arg0;
- (void)updateWithModel:(id)arg0;
- (id)cacheDict;
- (void)setupGestures;
- (id)bottomContainer;
- (void)setBottomContainer:(id)arg0;
- (id)doubleTap;

@end