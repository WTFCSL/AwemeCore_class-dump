//
//     Generated by private class-dump
//

@class NSString, BDPNavigationBar, UIView, UINavigationItem;

@interface BDPViewController : UIViewController <BDPDirectionPanGestureSwipeBackModeProtocol> {
    BOOL _translucent;
    unsigned long long _orientationMask;
    unsigned long long _originOrientationMask;
    unsigned long long _originGlobalOrientationMask;
    UIView *_contentView;
    BDPNavigationBar *_navigationBar;
    id /* block */ _completion;
    UIView *_fullView;
}

@property (retain, nonatomic) UIView *fullView;
@property (retain, nonatomic) UIView *contentView;
@property (retain, nonatomic) BDPNavigationBar *navigationBar;
@property (nonatomic) BOOL translucent;
@property (nonatomic) unsigned long long orientationMask;
@property (nonatomic) unsigned long long originOrientationMask;
@property (nonatomic) unsigned long long originGlobalOrientationMask;
@property (copy, nonatomic) id /* block */ completion;
@property (readonly, nonatomic) UINavigationItem *navigationItem;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setOrientationMask:(unsigned long long)arg0;
- (unsigned long long)popGestureSwipeBackMode;
- (void)updateViewControllerStyle;
- (void)updateNavigationBarStyle;
- (void)updateNavigationBarItem;
- (id)setNavigationBarBackButton;
- (unsigned long long)orientationMask;
- (unsigned long long)originOrientationMask;
- (void)setOriginOrientationMask:(unsigned long long)arg0;
- (unsigned long long)originGlobalOrientationMask;
- (void)setOriginGlobalOrientationMask:(unsigned long long)arg0;
- (void)setTranslucent:(BOOL)arg0 animated:(BOOL)arg1;
- (void)backButtonOnClickedForCustomView;
- (id)fullView;
- (void)updateNavigationTitle:(id)arg0;
- (void)setFullView:(id)arg0;
- (void)setupMainStructure;
- (void)updateMainStructureConstraints:(BOOL)arg0;
- (BOOL)shouldAutorotate;
- (id /* block */)completion;
- (void).cxx_destruct;
- (void)setTranslucent:(BOOL)arg0;
- (id)initWithNibName:(id)arg0 bundle:(id)arg1;
- (void)setCompletion:(id /* block */)arg0;
- (unsigned long long)supportedInterfaceOrientations;
- (void)viewWillTransitionToSize:(struct CGSize { double x0; double x1; })arg0 withTransitionCoordinator:(id)arg1;
- (long long)preferredStatusBarUpdateAnimation;
- (long long)preferredStatusBarStyle;
- (id)contentView;
- (id)navigationBar;
- (void)setNavigationBar:(id)arg0;
- (BOOL)prefersStatusBarHidden;
- (void)viewWillAppear:(BOOL)arg0;
- (void)dealloc;
- (void)viewDidLoad;
- (void)viewWillLayoutSubviews;
- (void)setContentView:(id)arg0;
- (BOOL)translucent;
- (BOOL)navigationBarHidden;
- (id)internalView;
- (void)updateNavigationTitle;

@end