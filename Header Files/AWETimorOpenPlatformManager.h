//
//     Generated by private class-dump
//

@interface AWETimorOpenPlatformManager : NSObject

+ (id)sharedManager;

- (void)requestIMGameFansEnterCheckWithGroupID:(id)arg0 clientKey:(id)arg1 openID:(id)arg2 completion:(id /* block */)arg3;
- (void)shareGameAddGroupWithId:(id)arg0 appID:(id)arg1 isHalfPage:(BOOL)arg2 extraDict:(id)arg3 completion:(id /* block */)arg4;
- (void)requestOpenIDWithAppID:(id)arg0 completion:(id /* block */)arg1;
- (void)shareGameAddGroupWithId:(id)arg0 appID:(id)arg1 completion:(id /* block */)arg2;

@end