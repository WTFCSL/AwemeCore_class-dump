//
//     Generated by private class-dump
//

@class NSString, AWECreatorAgreementAlertView, AWEPromoteSettings;

@interface AWECreatorAgreementManager : NSObject <AWEAppAwemeSettingMessage, AWEPublishTaskMessage, AWECreatorAgreementManagerProtocol> {
    BOOL _needShowAuthorAgreeAlert;
    BOOL _enteredLinkWebVC;
    AWECreatorAgreementAlertView *_alert;
    AWEPromoteSettings *_settings;
}

@property (nonatomic) BOOL needShowAuthorAgreeAlert;
@property (nonatomic) BOOL enteredLinkWebVC;
@property (retain, nonatomic) AWECreatorAgreementAlertView *alert;
@property (retain, nonatomic) AWEPromoteSettings *settings;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedManager;

- (void)task:(id)arg0 didBeginWithInfo:(id)arg1;
- (void)awemeSettingDidChange;
- (void)setNeedShowAuthorAgreeAlert:(BOOL)arg0;
- (void)setEnteredLinkWebVC:(BOOL)arg0;
- (void)_updateAlertView;
- (BOOL)enteredLinkWebVC;
- (BOOL)needShowAuthorAgreeAlert;
- (void)_agreeForCreatorTerm;
- (void)_cancelForCreatorTerm;
- (void)_recordPopupWithConfirmStatus:(BOOL)arg0;
- (void)_transferToTermsUrl;
- (BOOL)_checkPopupConditionGivenMaxPopupTimes:(unsigned long long)arg0 popupIntervalDays:(unsigned long long)arg1;
- (void)_markNeedShowAuthorAgreeAlert;
- (BOOL)shouldCheckWhetherShowAlertViewWithTask:(id)arg0;
- (void)checkWhetherShowAlertView;
- (void)showAlertViewWhenEnteredAgreementWebViewController;
- (id)alert;
- (id)init;
- (void).cxx_destruct;
- (void)setSettings:(id)arg0;
- (void)showAlertView;
- (id)settings;
- (void)setAlert:(id)arg0;
- (void)dealloc;

@end