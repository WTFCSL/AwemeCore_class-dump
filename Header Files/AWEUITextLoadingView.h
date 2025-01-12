//
//     Generated by private class-dump
//

@class UILabel, NSString, UIView, AWEUILoadingView, UIButton;
@protocol AWEUITextLoadingViewDelegate;

@interface AWEUITextLoadingView : UIView <IESECUILoadingViewProtocol, ACCTextLoadingViewProtcol> {
    id<AWEUITextLoadingViewDelegate> _delegate;
    UIView *_hudView;
    AWEUILoadingView *_loadingView;
    UILabel *_titleLabel;
    UIView *_containerView;
}

@property (retain, nonatomic) UIButton *im_closeBtn;
@property (copy, nonatomic) id /* block */ im_closeBlock;
@property (nonatomic) double progress;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) BOOL acclt_cancellable;
@property (nonatomic) double acclt_dalay;
@property (retain, nonatomic) UIButton *closeBtn;
@property (copy, nonatomic) id /* block */ closeBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) UIView *hudView;
@property (retain, nonatomic) AWEUILoadingView *loadingView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIView *containerView;
@property (weak, nonatomic) id<AWEUITextLoadingViewDelegate> delegate;
@property (readonly, copy, nonatomic) NSString *title;

+ (id)showWindowLoadingWithTitle:(id)arg0 animated:(BOOL)arg1;
+ (void)dismissWindowLoadingWithAnimated:(BOOL)arg0;
+ (id)showWindowLoadingWithTitle:(id)arg0 animated:(BOOL)arg1 afterDelay:(double)arg2;
+ (void)dismissWindowLoading;
+ (id)p_imageWithColor:(id)arg0;
+ (id)sharedView;
+ (id)showLoadingOnView:(id)arg0 title:(id)arg1 animated:(BOOL)arg2;
+ (id)showLoadingOnView:(id)arg0 withTitle:(id)arg1;
+ (id)showWindowLoadingWithTitle:(id)arg0;
+ (id)showWindowLoadingWithTitle:(id)arg0 animated:(BOOL)arg1 afterDelay:(double)arg2 delegate:(id)arg3;
+ (id)showLoadingOnView:(id)arg0 title:(id)arg1 animated:(BOOL)arg2 afterDelay:(double)arg3 delegate:(id)arg4;
+ (id)showLoadingOnView:(id)arg0 title:(id)arg1 animated:(BOOL)arg2 afterDelay:(double)arg3;
+ (void)_aweLazyRegisterLoad_ACCLoading;

- (void)im_showCloseBtn:(BOOL)arg0 closeBlock:(id /* block */)arg1;
- (id)im_closeBtn;
- (id /* block */)im_closeBlock;
- (void)im_didClickCloseBtn:(id)arg0;
- (void)setIm_closeBtn:(id)arg0;
- (void)setIm_closeBlock:(id /* block */)arg0;
- (void)dismissWithAnimated:(BOOL)arg0;
- (id /* block */)closeBlock;
- (void)setCloseBlock:(id /* block */)arg0;
- (id)closeBtn;
- (void)setCloseBtn:(id)arg0;
- (void)allowUserInteraction:(BOOL)arg0;
- (void)p_showLoadingOnView:(id)arg0 title:(id)arg1 animated:(BOOL)arg2;
- (void)p_showLoadingOnView:(id)arg0;
- (void)showCloseBtn:(BOOL)arg0 closeBlock:(id /* block */)arg1;
- (void)acc_updateTitle:(id)arg0;
- (void)setAcclt_dalay:(double)arg0;
- (double)acclt_dalay;
- (void)setAcclt_loadingStartTime:(double)arg0;
- (double)acclt_loadingStartTime;
- (long long)acclt_scene;
- (void)setAcclt_scene:(long long)arg0;
- (BOOL)acclt_cancellable;
- (void)setAcclt_cancellable:(BOOL)arg0;
- (double)acclt_delay;
- (void)setAcclt_delay:(double)arg0;
- (void)acc_dismissWithAnimated:(BOOL)arg0;
- (void)didClickCloseBtn:(id)arg0;
- (void)stopAnimating;
- (void)startAnimating;
- (id)init;
- (void)dismiss;
- (void).cxx_destruct;
- (id)titleLabel;
- (void)setContainerView:(id)arg0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (id)title;
- (id)delegate;
- (id)containerView;
- (void)setDelegate:(id)arg0;
- (void)setHidden:(BOOL)arg0;
- (void)willMoveToWindow:(id)arg0;
- (void)setTitleLabel:(id)arg0;
- (void)setTitle:(id)arg0;
- (void)setupUI;
- (id)loadingView;
- (void)setLoadingView:(id)arg0;
- (id)hudView;
- (void)setHudView:(id)arg0;
- (void)updateTitle:(id)arg0;

@end
