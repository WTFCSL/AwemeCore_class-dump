//
//     Generated by private class-dump
//

@class UIButton, UIView;

@interface AWEPlayInteractionShareOrderShowGoodsButtonElement : AWEPlayInteractionLeftElement {
    UIButton *_showGoodsButton;
    UIView *_containerView;
}

@property (retain, nonatomic) UIButton *showGoodsButton;
@property (retain, nonatomic) UIView *containerView;

- (void)initializeElement;
- (void)viewController_willDisplay;
- (id)activateInfoWithData:(id)arg0;
- (void)layoutElementView;
- (void)dynamicWidthRemakeLayout;
- (void)trackEntranceShow;
- (void)trackEntranceClick;
- (id)getGoodsPanelParamsFromAweme:(id)arg0;
- (void)transferToGoodsDetail;
- (void)vitalizeButton:(BOOL)arg0;
- (id)showGoodsButton;
- (void)setShowGoodsButton:(id)arg0;
- (void).cxx_destruct;
- (void)setContainerView:(id)arg0;
- (id)containerView;
- (void)viewDidLoad;

@end