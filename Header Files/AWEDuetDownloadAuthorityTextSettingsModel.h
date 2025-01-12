//
//     Generated by private class-dump
//

@class NSString;

@interface AWEDuetDownloadAuthorityTextSettingsModel : MTLModel <MTLJSONSerializing> {
    NSString *_downloadSettingPrivateAccountToast;
    NSString *_downloadSettingOtherToast;
    NSString *_duetSettingPrivateAccountToast;
    NSString *_duetSettingGovMediaVipToast;
    NSString *_duetSettingOtherToast;
}

@property (copy, nonatomic) NSString *downloadSettingPrivateAccountToast;
@property (copy, nonatomic) NSString *downloadSettingOtherToast;
@property (copy, nonatomic) NSString *duetSettingPrivateAccountToast;
@property (copy, nonatomic) NSString *duetSettingGovMediaVipToast;
@property (copy, nonatomic) NSString *duetSettingOtherToast;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (id)downloadSettingPrivateAccountToast;
- (id)downloadSettingOtherToast;
- (id)duetSettingGovMediaVipToast;
- (id)duetSettingOtherToast;
- (void)setDownloadSettingPrivateAccountToast:(id)arg0;
- (void)setDownloadSettingOtherToast:(id)arg0;
- (id)duetSettingPrivateAccountToast;
- (void)setDuetSettingPrivateAccountToast:(id)arg0;
- (void)setDuetSettingGovMediaVipToast:(id)arg0;
- (void)setDuetSettingOtherToast:(id)arg0;
- (id)init;
- (void).cxx_destruct;

@end
