//
//     Generated by private class-dump
//

@class UIButton, UIView;
@protocol IESLivePKAnchorBuilderAction;

@interface IESLivePKMatchBellDisturbPanel : IESLiveRevenueInteractPopupViewController {
    BOOL _isClickedRejectButton;
    UIButton *_rejectFlexActivityButton;
    UIView *_seperateLine;
    UIButton *_cancelButton;
    id<IESLivePKAnchorBuilderAction> _anchorBuilderAction;
}

@property (retain, nonatomic) UIButton *rejectFlexActivityButton;
@property (retain, nonatomic) UIView *seperateLine;
@property (retain, nonatomic) UIButton *cancelButton;
@property (nonatomic) BOOL isClickedRejectButton;
@property (retain, nonatomic) id<IESLivePKAnchorBuilderAction> anchorBuilderAction;

- (id)seperateLine;
- (void)setSeperateLine:(id)arg0;
- (void)onSetupNavBar:(id)arg0;
- (id)anchorBuilderAction;
- (void)setAnchorBuilderAction:(id)arg0;
- (BOOL)isClickedRejectButton;
- (void)trackPanelClicked:(unsigned long long)arg0;
- (void)setRejectFlexActivityButton:(id)arg0;
- (id)rejectFlexActivityButton;
- (void)onClickedRejectButton;
- (void)onClickedCancelButton;
- (void)setIsClickedRejectButton:(BOOL)arg0;
- (void)setCancelButton:(id)arg0;
- (void)dismiss;
- (void).cxx_destruct;
- (id)cancelButton;
- (void)viewDidLoad;
- (void)setupViews;

@end
