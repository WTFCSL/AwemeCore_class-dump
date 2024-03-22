//
//     Generated by private class-dump
//

@class BDTuringNavigationController, NSMutableSet, UIWindow;

@interface BDTuringPresentView : UIWindow {
    NSMutableSet *_presentingViews;
    NSMutableSet *_presentingViewControllers;
    BDTuringNavigationController *_turingNavi;
    UIWindow *_preKeyWindow;
}

@property (retain, nonatomic) NSMutableSet *presentingViews;
@property (retain, nonatomic) NSMutableSet *presentingViewControllers;
@property (retain, nonatomic) BDTuringNavigationController *turingNavi;
@property (weak, nonatomic) UIWindow *preKeyWindow;

+ (id)defaultPresentView;

- (void)dismissVerifyView;
- (void)presentVerifyView:(id)arg0;
- (void)hideVerifyView:(id)arg0;
- (void)hideTwiceVerifyViewController:(id)arg0;
- (void)presentTwiceVerifyViewController:(id)arg0;
- (void)setPresentingViews:(id)arg0;
- (void)setPresentingViewControllers:(id)arg0;
- (void)setPreKeyWindow:(id)arg0;
- (id)preKeyWindow;
- (id)turingNavi;
- (void)setTuringNavi:(id)arg0;
- (id)presentingViews;
- (id)presentingViewControllers;
- (void)sendEvent:(id)arg0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;

@end