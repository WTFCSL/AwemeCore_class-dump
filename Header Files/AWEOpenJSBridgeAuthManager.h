//
//     Generated by private class-dump
//

@class NSString;

@interface AWEOpenJSBridgeAuthManager : NSObject <IESBridgeAuthManagerDelegate>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)trackAuthManger:(id)arg0 isAuthorizedMethod:(id)arg1 success:(BOOL)arg2 forURL:(id)arg3 stage:(id)arg4 list:(id)arg5;

- (BOOL)authManager:(id)arg0 isAuthorizedMethod:(id)arg1 forURL:(id)arg2;
- (void)authManager:(id)arg0 isAuthorizedMethod:(id)arg1 success:(BOOL)arg2 forURL:(id)arg3 stage:(id)arg4 list:(id)arg5;
- (id)init;

@end