//
//     Generated by private class-dump
//

@class LunaCyclePageView, NSString, AWEMusicSingleTabTopView, AWEMusicExceptionalView, AWEMusicSubPlayerNavigatorView, AWEUILoadingView;
@protocol LunaPlayerViewHolderDelgate;

@interface LunaPlayerViewHolder : UIView <AWEMusicExceptionalViewDelegate> {
    LunaCyclePageView *_cyclePage;
    id<LunaPlayerViewHolderDelgate> _delegate;
    AWEMusicSubPlayerNavigatorView *_navigationBar;
    AWEMusicSingleTabTopView *_singleTabTopView;
    AWEMusicExceptionalView *_noNetView;
    AWEUILoadingView *_loadingView;
}

@property (retain, nonatomic) LunaCyclePageView *cyclePage;
@property (retain, nonatomic) AWEMusicSubPlayerNavigatorView *navigationBar;
@property (retain, nonatomic) AWEMusicSingleTabTopView *singleTabTopView;
@property (retain, nonatomic) AWEMusicExceptionalView *noNetView;
@property (retain, nonatomic) AWEUILoadingView *loadingView;
@property (weak, nonatomic) id<LunaPlayerViewHolderDelgate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)noNetViewDidTapTryAgain:(id)arg0;
- (void)loadingShow;
- (void)loadingDismiss;
- (void)showNoNetView;
- (id)singleTabTopView;
- (void)setSingleTabTopView:(id)arg0;
- (id)cyclePage;
- (void)setCyclePage:(id)arg0;
- (id)noNetView;
- (void)setNoNetView:(id)arg0;
- (void)dismissNoNetView;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0 delegate:(id)arg1;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (id)delegate;
- (id)navigationBar;
- (void)setNavigationBar:(id)arg0;
- (void)setDelegate:(id)arg0;
- (void)setupUI;
- (id)loadingView;
- (void)setLoadingView:(id)arg0;

@end
