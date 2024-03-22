//
//     Generated by private class-dump
//

@protocol RTVXRBusinessContextDelegate;

@protocol RTVXRContainer <RTVLifeCycleProtocol>

@property (weak, nonatomic) id<RTVXRBusinessContextDelegate> delegate;
@property (nonatomic) BOOL isActive;

- (void)renderWithBusinessHandler:(id)arg0 context:(id)arg1;
- (void)switchFullScreenWithAnimator:(id)arg0;
- (void)switchNarrowWithAnimator:(id)arg0;
- (void)setIsActive:(BOOL)arg0;
- (id)delegate;
- (BOOL)isActive;
- (void)setDelegate:(id)arg0;
- (long long)containerType;

@optional

- (id)layoutTransitionDelegate;
- (void)updateNarrowRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (void)willSwitchToNarrow:(BOOL)arg0;
- (void)didSwitchToNarrow:(BOOL)arg0;
- (id)preferredLayoutAttributes;
- (id)narrowWindowLayoutContext;
- (void)containerWillFirstAppear;
- (id)customPreview;
- (id)isReadyPromise;
- (id)extraBusinessInfoWithNavigateTransitionType:(unsigned long long)arg0;
- (void)narrowViewDragDidEnd;
- (BOOL)switchFullScreenTapGestureIsEnable;
- (BOOL)useDefaultDragSafeArea;
- (void)configInitialContainer;
- (void)narrowViewFrameDidChange:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0 animator:(id)arg1;
- (void)narrowViewDidBeginGesture:(long long)arg0;
- (void)narrowViewDidEndGesture:(long long)arg0;
- (unsigned long long)rtv_supportedInterfaceOrientations;
- (long long)toFullScreenContainerType;
- (id)shadowView;
- (double)preferredCornerRadius;
- (BOOL)handleTapGesture:(id)arg0;
- (BOOL)handleDoubleTapGesture:(id)arg0;

@end