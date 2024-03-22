//
//     Generated by private class-dump
//

@class AWEDouPlusContainerNavigationBar, UIView;

@interface AWEDouPlusContainerViewController : UIViewController {
    BOOL _dismissWhenClickBlankArea;
    BOOL _shouldShouldNavigationTopLineView;
    AWEDouPlusContainerNavigationBar *_navigationBar;
    UIView *_mainContainerView;
    UIView *_coreAreaView;
    long long _navigationBarType;
    UIView *_topBlankAreaView;
    UIView *_navigationTopLine;
}

@property (retain, nonatomic) UIView *topBlankAreaView;
@property (retain, nonatomic) UIView *coreAreaView;
@property (retain, nonatomic) UIView *mainContainerView;
@property (retain, nonatomic) AWEDouPlusContainerNavigationBar *navigationBar;
@property (retain, nonatomic) UIView *navigationTopLine;
@property (nonatomic) long long navigationBarType;
@property (nonatomic) BOOL dismissWhenClickBlankArea;
@property (nonatomic) BOOL shouldShouldNavigationTopLineView;

- (id)topBlankAreaView;
- (id)coreAreaView;
- (BOOL)shouldShouldNavigationTopLineView;
- (id)navigationTopLine;
- (id)mainContainerView;
- (double)coreAreaHeight;
- (void)addCoreAreaViewRoundedCorners:(unsigned long long)arg0 cornerRadii:(struct CGSize { double x0; double x1; })arg1;
- (BOOL)dismissWhenClickBlankArea;
- (void)dismissFromParentViewController;
- (void)setDismissWhenClickBlankArea:(BOOL)arg0;
- (long long)navigationBarType;
- (void)showInParentViewController:(id)arg0;
- (void)setMainContainerView:(id)arg0;
- (void)setCoreAreaView:(id)arg0;
- (void)setNavigationBarType:(long long)arg0;
- (void)setShouldShouldNavigationTopLineView:(BOOL)arg0;
- (void)setTopBlankAreaView:(id)arg0;
- (void)setNavigationTopLine:(id)arg0;
- (void).cxx_destruct;
- (id)navigationBar;
- (void)setNavigationBar:(id)arg0;
- (void)viewDidLoad;
- (void)dismissTapped;

@end
