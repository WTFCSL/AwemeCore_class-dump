//
//     Generated by private class-dump
//

@class AWELeftSideBarViewControllerTrackModel, AWELeftSideBarModel;
@protocol AWELeftSideBarViewControllerDelegate;

@protocol AWESideBarViewControllerProtocol <NSObject>

+ (double)leftSideBarWidth;
+ (double)leftSideBarHorizontalPadding;

@property (weak, nonatomic) id<AWELeftSideBarViewControllerDelegate> delegate;
@property (retain, nonatomic) AWELeftSideBarModel *leftSideBarModel;
@property (retain, nonatomic) AWELeftSideBarViewControllerTrackModel *leftSideBarViewControllerTrackModel;
@property (copy, nonatomic) id /* block */ closeBlock;

- (id /* block */)closeBlock;
- (void)setCloseBlock:(id /* block */)arg0;
- (id)leftSideBarModel;
- (void)setLeftSideBarModel:(id)arg0;
- (void)updateLeftSideBarModel:(id)arg0;
- (id)leftSideBarViewControllerTrackModel;
- (void)updateViewsWithOriginX:(double)arg0;
- (void)updateTabBarImageView:(id)arg0;
- (void)setLeftSideBarViewControllerTrackModel:(id)arg0;
- (long long)currentStatusBarStyle;
- (id)delegate;
- (void)setDelegate:(id)arg0;

@optional

- (void)themeStyleDidChange:(long long)arg0;
- (void)dismissBubbleWithBusinessId:(id)arg0;
- (void)showBubbleWithBusinessId:(id)arg0 Text:(id)arg1 completion:(id /* block */)arg2 clickBlock:(id /* block */)arg3 dismissBlock:(id /* block */)arg4;
- (void)updateLeftSideBarModelForDynamicModule:(id)arg0 withAnimation:(BOOL)arg1;
- (void)onLeftSideBarDidClose;
- (void)reloadLeftSideBarViewController;
- (void)scrollToBusinessId:(id)arg0 withAnimate:(BOOL)arg1;
- (void)onLeftSideBarDidOpen:(BOOL)arg0;
- (void)updateViewAfterRotateTransition;

@end
