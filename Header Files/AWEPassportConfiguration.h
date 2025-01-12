//
//     Generated by private class-dump
//

@class NSString;
@protocol AWEPassportProductConfiguration, AWEPassportSettings;

@interface AWEPassportConfiguration : NSObject <AWEPassportProductConfiguration, AWEPassportSettings, AWEPassportConfigurable> {
    id<AWEPassportProductConfiguration, AWEPassportSettings> _implementation;
}

@property (retain, nonatomic) id<AWEPassportProductConfiguration, AWEPassportSettings> implementation;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)enableMultiLogin;
+ (BOOL)enableVirtualPhoneNumber;
+ (id)appidChinaTelecom;
+ (void)setupImplementation:(id)arg0;
+ (BOOL)isInhouse;
+ (id)platformAppIdToutiao;
+ (id)platformAppIdXiGua;
+ (id)platformAppIdQQ;
+ (id)platformAppIdApple;
+ (id)appidChinaMobile;
+ (id)appkeyChinaMobile;
+ (id)appkeyChinaTelecom;
+ (id)appidChinaUnion;
+ (id)appkeyChinaUnion;
+ (BOOL)enableCMCCSDK;
+ (BOOL)enableCarrierTypeProviders;
+ (unsigned long long)maxCountOfMultiLoginAccount;
+ (BOOL)enableAuthorizeInstagramWithEnglish;
+ (BOOL)enableCheckUserIDMismatch;
+ (BOOL)enableFixInstagramKeyboardAppearError;
+ (BOOL)enableStoreAccountInUserDefault;
+ (BOOL)enableAsyncStoreAccountIO;
+ (void)setupNetworkImplementation:(id)arg0;
+ (void)setupUtilsImplementation:(id)arg0;
+ (void)setupAntispamImplementation:(id)arg0;
+ (id)sharedInstance;
+ (id)deviceID;
+ (id)appID;
+ (id)appDisplayName;

- (id)implementation;
- (void)setImplementation:(id)arg0;
- (void).cxx_destruct;

@end
