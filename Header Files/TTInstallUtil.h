//
//     Generated by private class-dump
//

@interface TTInstallUtil : NSObject

+ (id)resolutionString;
+ (BOOL)isJailBroken;
+ (BOOL)isUpgradeUser;
+ (id)onTheFlyParameter;
+ (id)commonURLParameters;
+ (id)buildQueryFromDictionary:(id)arg0;
+ (BOOL)isInHouseVersion;
+ (id)loadUserDefaultsStringForKey:(id)arg0;
+ (void)clearAllUserDefaultsData;
+ (BOOL)isAutoReset;
+ (void)generateMockDeviceInfo;
+ (void)setResetMode:(BOOL)arg0;
+ (BOOL)isResetMode;
+ (void)setAutoReset:(BOOL)arg0;
+ (void)load;
+ (id)platform;
+ (unsigned long long)authorizationStatus;
+ (id)uuid;

@end
