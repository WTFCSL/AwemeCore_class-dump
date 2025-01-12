//
//     Generated by private class-dump
//

@protocol BDPPanelLoadingViewDelegate_HG;

@interface BDPPanelLoadingView_HG : UIView {
    id<BDPPanelLoadingViewDelegate_HG> _loadingViewDelegate;
}

@property (weak, nonatomic) id<BDPPanelLoadingViewDelegate_HG> loadingViewDelegate;

- (void)onCloseButtonClicked;
- (void)setupLoadingViewWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (void)setupErrorViewWithType:(unsigned long long)arg0;
- (void)onGoBackButtonClicked;
- (void)onReloadPageClicked;
- (id)loadingViewDelegate;
- (void)setLoadingViewDelegate:(id)arg0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0 type:(unsigned long long)arg1;

@end
