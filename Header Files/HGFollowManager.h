//
//     Generated by private class-dump
//

@interface HGFollowManager : NSObject

+ (id)parseCheckFollowStateResponse:(id)arg0 andJsonObj:(id)arg1 response:(id)arg2;
+ (void)requestWithURL:(id)arg0 uniqueID:(id)arg1 callback:(id /* block */)arg2;
+ (id)_errMsgFromErrCode:(long long)arg0;
+ (void)prefetchUserInfoWithUniqueID:(id)arg0 callback:(id /* block */)arg1;
+ (void)prefetchFollowStateWithUniqueID:(id)arg0 callback:(id /* block */)arg1;
+ (id)parseFollowUserResponse:(id)arg0 andJsonObj:(id)arg1 response:(id)arg2;

@end
