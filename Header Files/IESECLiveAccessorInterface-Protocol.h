//
//     Generated by private class-dump
//

@protocol IESECLiveAccessorInterface <NSObject>

- (void)recordMegaObject:(id)arg0 withKey:(id)arg1;
- (id)megaObjectWithKey:(id)arg0;

@optional

- (id)liveSDKVersion;
- (void)requireAuthWithUserInfo:(id)arg0 completion:(id /* block */)arg1;
- (void)requireRealNameAuthWithCompletion:(id /* block */)arg0;

@end
