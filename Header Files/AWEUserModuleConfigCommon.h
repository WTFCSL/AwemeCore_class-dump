//
//     Generated by private class-dump
//

@class NSString;

@interface AWEUserModuleConfigCommon : NSObject <AWEUserModuleConfigCommon>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)vcdV2Enable;
+ (BOOL)enableMultiLogin;
+ (id)appidChinaTelecom;
+ (id)platformAppIdToutiao;
+ (id)platformAppIdXiGua;
+ (id)platformAppIdQQ;
+ (id)appidChinaMobile;
+ (id)appkeyChinaMobile;
+ (id)appkeyChinaTelecom;
+ (id)appidChinaUnion;
+ (id)appkeyChinaUnion;
+ (BOOL)enableShareLoginChannel;
+ (BOOL)enableWriteKeychain;
+ (BOOL)shouldStoreUserInfoForChainLogin;

@end