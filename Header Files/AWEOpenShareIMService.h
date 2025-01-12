//
//     Generated by private class-dump
//

@class NSString;

@interface AWEOpenShareIMService : HTSService <AWEOpenShareIMService>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)joinIMGroupWithGroupID:(id)arg0 clientKey:(id)arg1 openID:(id)arg2 completion:(id /* block */)arg3;
+ (void)joinIMGroupWithGroupID:(id)arg0 clientKey:(id)arg1 openID:(id)arg2 isHalfPage:(BOOL)arg3 extraDict:(id)arg4 completion:(id /* block */)arg5;
+ (void)openChatPageWithCid:(id)arg0 openID:(id)arg1 clientKey:(id)arg2 isHalfPage:(BOOL)arg3 extraDict:(id)arg4 completion:(id /* block */)arg5;
+ (void)openAddGroupHalfPageWithDecodedGroupID:(id)arg0 GroupID:(id)arg1 ownerID:(id)arg2 clientKey:(id)arg3 groupType:(long long)arg4 openID:(id)arg5 extraDict:(id)arg6 completion:(id /* block */)arg7;
+ (void)openAddGroupFullPageWithDecodedGroupID:(id)arg0 GroupID:(id)arg1 ownerID:(id)arg2 clientKey:(id)arg3 groupType:(long long)arg4 openID:(id)arg5 extraDict:(id)arg6 completion:(id /* block */)arg7;

@end
