//
//     Generated by private class-dump
//

@class NSArray, AWEAccountManager;

@interface AWEAccountBindingTXDDetailViewModel : AWESettingBaseViewModel {
    BOOL _isUsingXiguaSDK;
    NSArray *_sectionDataArray;
    AWEAccountManager *_accountManager;
}

@property (retain, nonatomic) AWEAccountManager *accountManager;
@property (nonatomic) BOOL isUsingXiguaSDK;

- (id)sectionDataArray;
- (void)setSectionDataArray:(id)arg0;
- (void)tapUnbindToutiaoXiguaDongchedi;
- (void)setIsUsingXiguaSDK:(BOOL)arg0;
- (BOOL)isUsingXiguaSDK;
- (unsigned long long)sdkTypeWillCallFromType:(unsigned long long)arg0;
- (void)showUnbindTouXiDongAlert:(unsigned long long)arg0;
- (void)showCannotUnbindTouXiDongAlert;
- (void)enterBindPhoneView;
- (void)requestUnbindTXD:(unsigned long long)arg0;
- (id)platformNameWithBindType:(unsigned long long)arg0;
- (void)handleError:(id)arg0 platform:(unsigned long long)arg1;
- (void)monitorThirdPlatformUnBind:(unsigned long long)arg0 error:(id)arg1 extraInfo:(id)arg2;
- (unsigned long long)__AWEAccountUtilsContext__;
- (void)refresh;
- (void)setAccountManager:(id)arg0;
- (void).cxx_destruct;
- (id)accountManager;
- (void)viewDidLoad;

@end
