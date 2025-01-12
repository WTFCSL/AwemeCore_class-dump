//
//     Generated by private class-dump
//

@class AWENewHotSpotLynxPrerenderModel, NSString, UIView;
@protocol HunterContainerProtocol, AWEHotSpotLynxCardContainerDelegate;

@interface AWEHotSpotHunterLynxView : UIView <HunterContainerLifeCycleProtocol> {
    BOOL _hasLoadFinish;
    UIView<HunterContainerProtocol> *_containerView;
    id<AWEHotSpotLynxCardContainerDelegate> _delegate;
    AWENewHotSpotLynxPrerenderModel *_renderModel;
}

@property (retain, nonatomic) UIView<HunterContainerProtocol> *containerView;
@property (weak, nonatomic) id<AWEHotSpotLynxCardContainerDelegate> delegate;
@property (weak, nonatomic) AWENewHotSpotLynxPrerenderModel *renderModel;
@property (nonatomic) BOOL hasLoadFinish;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)container:(id)arg0 didFinishLoadWithURL:(id)arg1;
- (void)container:(id)arg0 didLoadFailedWithUrl:(id)arg1 error:(id)arg2;
- (void)container:(id)arg0 didChangeIntrinsicContentSize:(struct CGSize { double x0; double x1; })arg1;
- (void)containerDidReuse:(id)arg0;
- (double)renderHeight;
- (id)renderModel;
- (void)setRenderModel:(id)arg0;
- (void)handleLynxNotification:(id)arg0;
- (void)setHasLoadFinish:(BOOL)arg0;
- (BOOL)hasLoadFinish;
- (void).cxx_destruct;
- (void)setContainerView:(id)arg0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (id)delegate;
- (id)containerView;
- (void)setDelegate:(id)arg0;
- (void)setupUI;

@end
