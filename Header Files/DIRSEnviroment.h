//
//     Generated by private class-dump
//

@class NSString, DIRSContext;

@interface DIRSEnviroment : DIRSBasicModule <IRISParameterHandler, IRISModuleGlobal>

@property BOOL isEnabled;
@property long long state;
@property (readonly) DIRSContext *context;
@property (copy, nonatomic) NSString *category;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)moduleId;
+ (id)sdkVersionString;
+ (id)sharedInstance;
+ (id)osName;
+ (id)osVersion;
+ (id)platform;
+ (long long)sdkVersion;
+ (id)moduleVersion;

- (id)__datairis_parameter__display_name;
- (id)__datairis_parameter__app_name;
- (id)__datairis_parameter__app_version;
- (id)__datairis_parameter__sdk_version_v2;
- (id)__datairis_parameter__app_version_minor;
- (id)__datairis_parameter__package;

@end
