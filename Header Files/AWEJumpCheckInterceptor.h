//
//     Generated by private class-dump
//

@class NSString;

@interface AWEJumpCheckInterceptor : NSObject <AWERequestInterceptorProtocal>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)firstJumpWhitelistApps;
+ (void)checkRequest:(id)arg0 isClickJump:(BOOL)arg1 model:(id)arg2 error:(id *)arg3;
+ (void)checkRequest:(id)arg0 isClickJump:(BOOL)arg1 model:(id)arg2 adInfo:(id)arg3 error:(id *)arg4;
+ (void)checkRequest:(id)arg0 isClickJump:(BOOL)arg1 hasInteraction:(BOOL)arg2 model:(id)arg3 adInfo:(id)arg4 error:(id *)arg5;
+ (BOOL)isAllowUserClickJump:(id)arg0;
+ (BOOL)isSplashFirstJumpAllowListWithURL:(id)arg0;
+ (BOOL)isWhiteListUrl:(id)arg0 containsInteractionJumpList:(BOOL)arg1;
+ (id)normalSchemes;
+ (id)secondJumpWhitelistApps;
+ (BOOL)isWhiteListUniversalLink:(id)arg0;

@end
