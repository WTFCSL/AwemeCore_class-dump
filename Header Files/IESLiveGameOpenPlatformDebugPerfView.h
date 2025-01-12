//
//     Generated by private class-dump
//

@class UILabel, UIViewController, UIView;

@interface IESLiveGameOpenPlatformDebugPerfView : UIView {
    BOOL _isShowing;
    UIViewController *_viewController;
    UIView *_backgroundView;
    UILabel *_perfLabel;
}

@property (retain, nonatomic) UIView *backgroundView;
@property (retain, nonatomic) UILabel *perfLabel;
@property (weak, nonatomic) UIViewController *viewController;
@property (nonatomic) BOOL isShowing;

- (void)setIsShowing:(BOOL)arg0;
- (void)reloadPerfView:(id)arg0;
- (id)perfLabel;
- (void)setPerfLabel:(id)arg0;
- (void)setViewController:(id)arg0;
- (id)backgroundView;
- (id)viewController;
- (void).cxx_destruct;
- (BOOL)isShowing;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (void)setUp;
- (void)setBackgroundView:(id)arg0;

@end
