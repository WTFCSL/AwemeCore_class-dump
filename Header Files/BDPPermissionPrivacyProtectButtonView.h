//
//     Generated by private class-dump
//

@class NSString;
@protocol BDPPermissionPrivacyProtectButtonViewDelegate;

@interface BDPPermissionPrivacyProtectButtonView : BDPPermissionAlertBaseButtonView <BDPPermissionPrivacyProtectFooterViewDelegate> {
    BOOL _isConfirmAllowed;
    BOOL _hasSetupDelegate;
    id<BDPPermissionPrivacyProtectButtonViewDelegate> _buttonDelegate;
}

@property (nonatomic) BOOL hasSetupDelegate;
@property (nonatomic) BOOL isConfirmAllowed;
@property (weak, nonatomic) id<BDPPermissionPrivacyProtectButtonViewDelegate> buttonDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)onCancelButtonTaped:(id)arg0;
- (void)onConfirmButtonTaped:(id)arg0;
- (BOOL)hasSetupDelegate;
- (void)setHasSetupDelegate:(BOOL)arg0;
- (void)p_setupDelegate;
- (BOOL)isConfirmAllowed;
- (void)setIsConfirmAllowed:(BOOL)arg0;
- (void)checkBoxDidClicked:(long long)arg0;
- (id)init;
- (void).cxx_destruct;
- (id)buttonDelegate;
- (void)setButtonDelegate:(id)arg0;

@end
