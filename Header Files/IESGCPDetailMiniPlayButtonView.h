//
//     Generated by private class-dump
//

@class IESGCPDetailLaunchButtonContainerView;

@interface IESGCPDetailMiniPlayButtonView : IESGCPDetailBaseView {
    IESGCPDetailLaunchButtonContainerView *_buttonContainerView;
}

@property (retain, nonatomic) IESGCPDetailLaunchButtonContainerView *buttonContainerView;

- (void)bindViewModel:(id)arg0;
- (void)handleButtonDidClick;
- (void)layoutViews;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (void)didMoveToWindow;
- (void)setupViews;
- (id)buttonContainerView;
- (void)setButtonContainerView:(id)arg0;

@end
