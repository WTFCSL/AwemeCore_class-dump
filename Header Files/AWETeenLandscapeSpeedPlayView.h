//
//     Generated by private class-dump
//

@class UITapGestureRecognizer, NSMutableArray, UIView;

@interface AWETeenLandscapeSpeedPlayView : UIView {
    BOOL _isPanelShowing;
    UIView *_containerView;
    NSMutableArray *_selectItems;
    UITapGestureRecognizer *_tapGesture;
}

@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) NSMutableArray *selectItems;
@property (nonatomic) BOOL isPanelShowing;
@property (retain, nonatomic) UITapGestureRecognizer *tapGesture;

- (BOOL)isPanelShowing;
- (void)setIsPanelShowing:(BOOL)arg0;
- (id)selectItems;
- (void)setSelectItems:(id)arg0;
- (void)p_layoutViews;
- (void)p_addBlurEffect;
- (void)p_activateButtonWithPlaybackRateType:(long long)arg0;
- (void)clickButton:(id)arg0;
- (void)p_onScreenClicked;
- (id)init;
- (void).cxx_destruct;
- (void)close;
- (void)show;
- (void)setContainerView:(id)arg0;
- (id)tapGesture;
- (id)containerView;
- (void)setTapGesture:(id)arg0;

@end
