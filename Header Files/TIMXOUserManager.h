//
//     Generated by private class-dump
//

@class TIMXSDKInstance;

@interface TIMXOUserManager : NSObject {
    TIMXSDKInstance *_r;
}

- (void)fetchUserInfoInInbox:(int)arg0 userID:(long long)arg1 complete:(id /* block */)arg2;
- (void)modifyUsers:(id)arg0 toBlockList:(BOOL)arg1 inbox:(int)arg2 completion:(id /* block */)arg3;
- (void)modifyUsers:(id)arg0 toBlockList:(BOOL)arg1 inbox:(int)arg2 blockType:(BOOL)arg3 conversationID:(id)arg4 conversationShortID:(long long)arg5 conversationType:(unsigned long long)arg6 completion:(id /* block */)arg7;
- (void)fetchUserBlockStatusInInbox:(int)arg0 userID:(long long)arg1 completion:(id /* block */)arg2;
- (void)fetchUserBlockStatusInInbox:(int)arg0 userID:(long long)arg1 blockType:(BOOL)arg2 conversationID:(id)arg3 conversationShortID:(long long)arg4 conversationType:(unsigned long long)arg5 completion:(id /* block */)arg6;
- (void)fetchBlockListUsersInInbox:(int)arg0 cursor:(long long)arg1 limit:(int)arg2 completion:(id /* block */)arg3;
- (void)fetchBlockListUsersInInbox:(int)arg0 cursor:(long long)arg1 limit:(int)arg2 blockType:(BOOL)arg3 conversationID:(id)arg4 conversationShortID:(long long)arg5 conversationType:(unsigned long long)arg6 completion:(id /* block */)arg7;
- (void).cxx_destruct;
- (id)initWithRootObject:(id)arg0;

@end