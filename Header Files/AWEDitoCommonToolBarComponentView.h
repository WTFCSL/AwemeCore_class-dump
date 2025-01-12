//
//     Generated by private class-dump
//

@class DUXNavigationBar, NSMutableDictionary, AWEDitoCommonToolBarComponentViewModel;

@interface AWEDitoCommonToolBarComponentView : DitoComponentView {
    AWEDitoCommonToolBarComponentViewModel *_viewModel;
    DUXNavigationBar *_duxNavigationBar;
    double _leftPadding;
    double _rightPadding;
    long long _actionIndex;
    NSMutableDictionary *_actionViewMap;
}

@property (weak, nonatomic) AWEDitoCommonToolBarComponentViewModel *viewModel;
@property (retain, nonatomic) DUXNavigationBar *duxNavigationBar;
@property (nonatomic) double leftPadding;
@property (nonatomic) double rightPadding;
@property (nonatomic) long long actionIndex;
@property (retain, nonatomic) NSMutableDictionary *actionViewMap;

- (void)updateViewModel:(id)arg0;
- (id)duxNavigationBar;
- (void)setDuxNavigationBar:(id)arg0;
- (void)setLeftPadding:(double)arg0;
- (void)setRightPadding:(double)arg0;
- (id)actionViewMap;
- (void)addDuxAction:(BOOL)arg0;
- (void)didTapDux:(id)arg0;
- (void)setActionViewMap:(id)arg0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (void)setViewModel:(id)arg0;
- (id)viewModel;
- (void)reset;
- (long long)actionIndex;
- (void)setActionIndex:(long long)arg0;
- (double)leftPadding;
- (double)rightPadding;

@end
