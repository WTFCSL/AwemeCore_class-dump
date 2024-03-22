//
//     Generated by private class-dump
//

@class NSString;

@interface InstallApp : GPBMessage

@property (copy, nonatomic) NSString *packageName;
@property (nonatomic) long long firstInstallTime;
@property (nonatomic) long long lastUpdateTime;
@property (copy, nonatomic) NSString *versionName;
@property (nonatomic) long long longVersionCode;
@property (nonatomic) long long appVersionCode;
@property (copy, nonatomic) NSString *appName;
@property (copy, nonatomic) NSString *loadLabelName;
@property (copy, nonatomic) NSString *nameFromResource;
@property (nonatomic) int appType;
@property (copy, nonatomic) NSString *apkDir;
@property (nonatomic) int isInstalled;
@property (copy, nonatomic) NSString *appSigningMd5;
@property (copy, nonatomic) NSString *appScheme;

+ (id)descriptor;

@end
