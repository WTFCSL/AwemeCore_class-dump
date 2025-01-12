//
//     Generated by private class-dump
//

@class NSString, AnnieContext, UIView;
@protocol AnnieContainerLifecycleProtocol, IESHYHybridViewProtocol, IESHYControllerDelegate;

@interface AnnieViewController : PuzzleHybridViewController <IESHYHybridViewLifecycleProtocol, UIGestureRecognizerDelegate, AnnieControllerProtocol> {
    BOOL isHybridInBackground;
    BOOL isHybridAppeared;
    BOOL _isContainerReady;
    BOOL _hasExecuteDidAppearedOnce;
    id<AnnieContainerLifecycleProtocol> _containerLifecycleDelegate;
    AnnieContext *_context;
}

@property (weak, nonatomic) id<AnnieContainerLifecycleProtocol> containerLifecycleDelegate;
@property (retain, nonatomic) AnnieContext *context;
@property (nonatomic) BOOL isContainerReady;
@property (nonatomic) BOOL hasExecuteDidAppearedOnce;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) BOOL isHybridInBackground;
@property (nonatomic) BOOL isHybridAppeared;
@property (readonly, nonatomic) UIView<IESHYHybridViewProtocol> *kitView;
@property (weak, nonatomic) id<IESHYControllerDelegate> delegate;

- (id)initWithConfig:(id)arg0 context:(id)arg1;
- (id)containerLifecycleDelegate;
- (void)handleViewDidAppear;
- (void)handleBecomeActive;
- (void)handleResignActive;
- (void)setContainerLifecycleDelegate:(id)arg0;
- (void)viewDidCreated:(id)arg0;
- (void)viewDidStartLoading;
- (void)viewDidFinishLoadWithURL:(id)arg0;
- (void)viewDidLoadFailedWithUrl:(id)arg0 error:(id)arg1;
- (void)closeViewIfNeeded;
- (void)viewDidBackForward;
- (void)setIsHybridInBackground:(BOOL)arg0;
- (void)__setupUI;
- (BOOL)isHybridAppeared;
- (void)setIsHybridAppeared:(BOOL)arg0;
- (void)setHasExecuteDidAppearedOnce:(BOOL)arg0;
- (void)setIsContainerReady:(BOOL)arg0;
- (BOOL)isHybridInBackground;
- (BOOL)hasExecuteDidAppearedOnce;
- (BOOL)isContainerReady;
- (id)initWithSchema:(id)arg0 context:(id)arg1;
- (void)__resetStatusBarStyle;
- (void)__resetNavigationBarStyle;
- (void)viewDidAppear:(BOOL)arg0;
- (void).cxx_destruct;
- (void)setContext:(id)arg0;
- (void)viewWillDisappear:(BOOL)arg0;
- (void)viewDidDisappear:(BOOL)arg0;
- (id)context;
- (void)viewWillAppear:(BOOL)arg0;
- (void)dealloc;
- (void)viewDidLoad;
- (void)handleViewDidDisappear;

@end
