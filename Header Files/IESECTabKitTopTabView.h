//
//     Generated by private class-dump
//

@class IESECSlidingTabbarView, CAGradientLayer;

@interface IESECTabKitTopTabView : IESECRelationForwardView {
    IESECSlidingTabbarView *_tabBarView;
    CAGradientLayer *_rightMaskLayer;
}

@property (retain, nonatomic) IESECSlidingTabbarView *tabBarView;
@property (retain, nonatomic) CAGradientLayer *rightMaskLayer;

- (void)setRightMaskLayer:(id)arg0;
- (id)rightMaskLayer;
- (id)tabBarView;
- (void)setTabBarView:(id)arg0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (void)layoutSubviews;

@end
