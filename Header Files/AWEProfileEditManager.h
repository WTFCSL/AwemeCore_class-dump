//
//     Generated by private class-dump
//

@class NSString;

@interface AWEProfileEditManager : NSObject <AWEProfileEditManagerProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)uploadCompanyHeaderImage:(id)arg0 completion:(id /* block */)arg1;
+ (void)updateUserProfileEditResponseWithToastAndReturnPageIfNeededWithoutSync:(id)arg0 completion:(id /* block */)arg1;
+ (void)updateUserProfile:(id)arg0 completion:(id /* block */)arg1;
+ (void)uploadImage:(id)arg0 params:(id)arg1 completion:(id /* block */)arg2;
+ (void)updateUserProfileWithToastAndReturnPageIfNeeded:(id)arg0 completion:(id /* block */)arg1;
+ (void)updateUserProfileWithToastAndReturnPageIfNeededWithoutSync:(id)arg0 completion:(id /* block */)arg1;
+ (void)uploadImageWithType:(unsigned long long)arg0 image:(id)arg1 webpPath:(id)arg2 params:(id)arg3 completion:(id /* block */)arg4;
+ (void)updateUserProfileWithParameter:(id)arg0 needSync:(BOOL)arg1 completion:(id /* block */)arg2;
+ (void)uploadWebpImage:(id)arg0 params:(id)arg1 completion:(id /* block */)arg2;
+ (id)checkWithParams:(id)arg0 completion:(id /* block */)arg1;
+ (void)updateUserProfileEditResponseWithParameter:(id)arg0 needSync:(BOOL)arg1 completion:(id /* block */)arg2;
+ (BOOL)needSetNickUpdateReminderParameter;
+ (id)hometownMapping;

@end
