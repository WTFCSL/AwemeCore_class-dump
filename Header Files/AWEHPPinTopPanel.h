//
//     Generated by private class-dump
//

@class DUXBaseLabel, NSString, NSTimer, DUXContentSheet, UIView, AWEHPPinTopComponentUIConfig, DUXButton;
@protocol AWEHPPinTopUILifeCycleProtocol;

@interface AWEHPPinTopPanel : NSObject <DUXSheetDelegate, AWEHPPinTopComponentProtocol> {
    BOOL _shouldDismissWhenPointOutSide;
    BOOL _isDismissing;
    BOOL _disableAutoDismiss;
    AWEHPPinTopComponentUIConfig *_config;
    DUXContentSheet *_sheet;
    UIView *_contentView;
    DUXButton *_primaryButton;
    DUXButton *_secondaryButton;
    DUXBaseLabel *_titleLabel;
    DUXBaseLabel *_subTitleLabel;
    UIView<AWEHPPinTopUILifeCycleProtocol> *_businessView;
    id /* block */ _dismissBlock;
    id /* block */ _actionBlock;
    id /* block */ _showBlock;
    NSTimer *_autoHideTimer;
}

@property (retain, nonatomic) AWEHPPinTopComponentUIConfig *config;
@property (retain, nonatomic) DUXContentSheet *sheet;
@property (retain, nonatomic) UIView *contentView;
@property (retain, nonatomic) DUXButton *primaryButton;
@property (retain, nonatomic) DUXButton *secondaryButton;
@property (retain, nonatomic) DUXBaseLabel *titleLabel;
@property (retain, nonatomic) DUXBaseLabel *subTitleLabel;
@property (retain, nonatomic) UIView<AWEHPPinTopUILifeCycleProtocol> *businessView;
@property (copy, nonatomic) id /* block */ dismissBlock;
@property (copy, nonatomic) id /* block */ actionBlock;
@property (copy, nonatomic) id /* block */ showBlock;
@property (retain, nonatomic) NSTimer *autoHideTimer;
@property (nonatomic) BOOL isDismissing;
@property (nonatomic) BOOL disableAutoDismiss;
@property (nonatomic) BOOL shouldDismissWhenPointOutSide;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)sheetDidClickCloseButton:(id)arg0;
- (void)sheetDidClickMaskArea:(id)arg0;
- (BOOL)sheetWillStayAfterClickCloseButton;
- (BOOL)sheetWillStayAfterClickMaskArea;
- (void)sheetDidDragToDismiss:(id)arg0;
- (void)setDisableAutoDismiss:(BOOL)arg0;
- (void)setShouldDismissWhenPointOutSide:(BOOL)arg0;
- (void)clickCloseButton;
- (id /* block */)showBlock;
- (void)setShowBlock:(id /* block */)arg0;
- (void)p_dismiss;
- (void)startAutoHideIfNeeded;
- (BOOL)disableAutoDismiss;
- (void)showPinTopComponentOnViewController:(id)arg0 withButtonAction:(id /* block */)arg1 didShow:(id /* block */)arg2 didDismiss:(id /* block */)arg3;
- (void)setBusinessView:(id)arg0;
- (id)businessView;
- (void)clickPrimaryButton;
- (void)clickSecondaryButton;
- (BOOL)shouldDismissWhenPointOutSide;
- (void)dismiss;
- (void)setConfig:(id)arg0;
- (void).cxx_destruct;
- (id)config;
- (BOOL)isDismissing;
- (id)titleLabel;
- (id)contentView;
- (id)initWithConfig:(id)arg0;
- (id /* block */)actionBlock;
- (void)setTitleLabel:(id)arg0;
- (void)setContentView:(id)arg0;
- (id)secondaryButton;
- (void)setupUI;
- (void)setActionBlock:(id /* block */)arg0;
- (void)setIsDismissing:(BOOL)arg0;
- (id)subTitleLabel;
- (void)setSubTitleLabel:(id)arg0;
- (id)primaryButton;
- (void)setPrimaryButton:(id)arg0;
- (void)setSecondaryButton:(id)arg0;
- (id)sheet;
- (id /* block */)dismissBlock;
- (void)setDismissBlock:(id /* block */)arg0;
- (id)autoHideTimer;
- (void)setAutoHideTimer:(id)arg0;
- (void)setSheet:(id)arg0;

@end
