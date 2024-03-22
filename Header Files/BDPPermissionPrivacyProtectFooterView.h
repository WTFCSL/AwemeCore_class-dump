//
//     Generated by private class-dump
//

@class NSString, BDPAboutPrivacyRegulationContentView, NSDictionary, BDPCheckBox;
@protocol BDPPrivacyRegulationViewDelegate, BDPPermissionPrivacyProtectFooterViewDelegate;

@interface BDPPermissionPrivacyProtectFooterView : UIView <BDPPrivacyRegulationContentViewDelegate, BDPPermissionPrivacyProtectButtonViewDelegate> {
    BOOL _fromPolicies;
    BOOL _hasSetupDelegate;
    BDPCheckBox *_checkBox;
    NSDictionary *_policies;
    id<BDPPermissionPrivacyProtectFooterViewDelegate> _footerDelegate;
    id<BDPPrivacyRegulationViewDelegate> _privacyDelegate;
    BDPAboutPrivacyRegulationContentView *_labelView;
    NSString *_name;
}

@property (nonatomic) BOOL fromPolicies;
@property (nonatomic) BOOL hasSetupDelegate;
@property (weak, nonatomic) id<BDPPrivacyRegulationViewDelegate> privacyDelegate;
@property (weak, nonatomic) BDPCheckBox *checkBox;
@property (weak, nonatomic) BDPAboutPrivacyRegulationContentView *labelView;
@property (retain, nonatomic) NSString *name;
@property (copy, nonatomic) NSDictionary *policies;
@property (weak, nonatomic) id<BDPPermissionPrivacyProtectFooterViewDelegate> footerDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)onClickReport:(id)arg0;
- (void)onClickPrivacyProtocol:(id)arg0;
- (void)setCheckBox:(id)arg0;
- (id)checkBox;
- (void)onClickPersonalizedProtocol:(id)arg0;
- (void)onClickText:(id)arg0;
- (void)setCheckBoxSelectedIfNeeded;
- (id)initWithName:(id)arg0 policies:(id)arg1;
- (BOOL)fromPolicies;
- (void)setFromPolicies:(BOOL)arg0;
- (BOOL)hasSetupDelegate;
- (void)setHasSetupDelegate:(BOOL)arg0;
- (void)confirmButtonDidClickedWhileNotAllowed;
- (void)p_setupDelegate;
- (void)onCheckBoxClicked:(long long)arg0;
- (void).cxx_destruct;
- (id)initWithName:(id)arg0;
- (id)policies;
- (void)setName:(id)arg0;
- (id)labelView;
- (void)setPolicies:(id)arg0;
- (id)name;
- (id)privacyDelegate;
- (void)setPrivacyDelegate:(id)arg0;
- (void)setLabelView:(id)arg0;
- (id)footerDelegate;
- (void)setFooterDelegate:(id)arg0;

@end