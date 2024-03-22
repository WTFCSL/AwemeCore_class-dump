//
//     Generated by private class-dump
//

@class NSString, AWERelatedVideoHunterContainer;

@interface AWERelatedVideoLVideoWidgetController : AWEVideoPlayControlBaseController <HunterContainerLifeCycleProtocol> {
    BOOL _showLVWidget;
    BOOL _feShowLVWidget;
    AWERelatedVideoHunterContainer *_hunterView;
}

@property (retain, nonatomic) AWERelatedVideoHunterContainer *hunterView;
@property (nonatomic, getter=isShowingLVWidget) BOOL showLVWidget;
@property (nonatomic) BOOL feShowLVWidget;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)container:(id)arg0 didChangeIntrinsicContentSize:(struct CGSize { double x0; double x1; })arg1;
- (void)setHide:(BOOL)arg0;
- (void)onPlayerWillLoopPlaying:(id)arg0;
- (void)onPlayerPlay:(id)arg0 ifPlay:(BOOL)arg1;
- (void)onPlayerPause:(id)arg0;
- (void)onPlayerAddPeriodicTimeObserverCallback:(id)arg0;
- (void)bindEvent;
- (BOOL)isShowingLVWidget;
- (void)setShowLVWidget:(BOOL)arg0;
- (void)resetWidgetEnv;
- (void)createHunterIfNeeded;
- (BOOL)feShowLVWidget;
- (void)hideAllTipsView;
- (void)setFeShowLVWidget:(BOOL)arg0;
- (void)setHunterView:(id)arg0;
- (id)hunterView;
- (void)showLVWigetWithData:(id)arg0 show:(BOOL)arg1;
- (void)updateContainerLayout;
- (void)preloadHunterWithData:(id)arg0;
- (void).cxx_destruct;
- (void)reset;
- (void)viewDidLoad;

@end
