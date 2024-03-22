//
//     Generated by private class-dump
//

@class IESECShopLiveFusionViewInfo, UIView;

@interface IESECShopLiveFusionContainerView : IESECRelationForwardView {
    BOOL _attached;
    IESECShopLiveFusionViewInfo *_tabBarInfo;
    IESECShopLiveFusionViewInfo *_tabContainerInfo;
    UIView *_tabBarView;
    UIView *_tabContainerView;
}

@property (weak, nonatomic) UIView *tabBarView;
@property (weak, nonatomic) UIView *tabContainerView;

- (void)triggerLayout;
- (id)tabContainerView;
- (void)setTabContainerView:(id)arg0;
- (id)tabBarView;
- (void)setTabBarView:(id)arg0;
- (void)attachViewInfo:(id)arg0;
- (void)detachViewInfo:(id)arg0;
- (void)attachSubViews;
- (void)detachSubViews;
- (void).cxx_destruct;
- (void)layoutSubviews;

@end