//
//     Generated by private class-dump
//

@protocol AWEProfileBannerContext, AWEProfileBannerDelegate;

@protocol AWEProfileBannerProtocol <NSObject>

+ (BOOL)canHandleData:(id)arg0;

@property (weak, nonatomic) id<AWEProfileBannerDelegate> delegate;
@property (readonly, nonatomic) double normalHeight;
@property (readonly, nonatomic) double maxHeight;
@property (weak, nonatomic) id<AWEProfileBannerContext> context;

- (void)configWithData:(id)arg0;
- (double)normalHeight;
- (BOOL)canUpdateData:(id)arg0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0 data:(id)arg1 context:(id)arg2 delegate:(id)arg3;
- (BOOL)canBecomeFullScreen;
- (void)setContext:(id)arg0;
- (id)delegate;
- (id)context;
- (double)maxHeight;
- (void)setDelegate:(id)arg0;

@optional

- (BOOL)autoAdjustHeight;
- (void)scrollViewDidScrollWithOffset:(struct CGPoint { double x0; double x1; })arg0;
- (void)scrollViewDidEndDragingWithOffset:(struct CGPoint { double x0; double x1; })arg0;
- (void)profilePageVisibilityChange:(BOOL)arg0;
- (void)viewWillUnmount;
- (void)viewDidMount;
- (void)scrollViewBeginDraging;
- (BOOL)isVideoLandscape;
- (double)bottomContentOverlapHeight;
- (void)viewDidAppear;
- (void)viewWillAppear;
- (void)viewDidDisappear;
- (void)viewWillDisappear;

@end
