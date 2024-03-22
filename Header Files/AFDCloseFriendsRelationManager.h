//
//     Generated by private class-dump
//

@class NSArray, NSString, NSMutableSet, NSLock;
@protocol IESLCMessageHandlerProtocol;

@interface AFDCloseFriendsRelationManager : NSObject <AWEUserMessage, IESLCMessageHandlerService> {
    NSArray *_reverseCloseFriendList;
    NSArray *_forwardCloseFriendList;
    NSMutableSet *_blurMaskLocalMockCloseFriends;
    NSMutableSet *_blurMaskLocalMockReverseCloseFriends;
    NSLock *_lock;
}

@property (retain, nonatomic) NSArray *reverseCloseFriendList;
@property (retain, nonatomic) NSArray *forwardCloseFriendList;
@property (retain, nonatomic) NSMutableSet *blurMaskLocalMockCloseFriends;
@property (retain, nonatomic) NSMutableSet *blurMaskLocalMockReverseCloseFriends;
@property (retain, nonatomic) NSLock *lock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<IESLCMessageHandlerProtocol> messageHandler;

+ (void)setSettingsWithUserID:(id)arg0 type:(long long)arg1 completionBlock:(id /* block */)arg2;
+ (id)sharedInstance;

- (void)didFinishLogin;
- (void)didFinishUnFollowUser:(id)arg0 status:(long long)arg1 error:(id)arg2;
- (void)didFinishBlockUser:(id)arg0 status:(long long)arg1;
- (void)didFinishTapTAIsFriendWithUser:(id)arg0 isFriend:(BOOL)arg1;
- (void)ieslc_messageHandler:(id)arg0 didReceiveMsg:(id)arg1;
- (void)closeFriendsWithUser:(id)arg0 sourcePage:(long long)arg1 completion:(id /* block */)arg2;
- (id)getCloseFriendsListWithUids;
- (BOOL)userIsCloseFriends:(id)arg0;
- (BOOL)userIsMutualCloseFriends:(id)arg0;
- (long long)getCloseFriendsStatusWithUserID:(id)arg0;
- (long long)fakeGenerateButtonStatusAfterClick:(long long)arg0;
- (long long)getReverseCloseFriendsEstablishTimeWithUserID:(id)arg0;
- (long long)getForwardCloseFriendsEstablishTimeWithUserID:(id)arg0;
- (void)updateSingleCloseFriendWithUserID:(id)arg0 status:(long long)arg1;
- (BOOL)blurMaskContainsLocalMockCloseFriendWithUserID:(id)arg0;
- (BOOL)checkReachedCloseFriendsCountLimit:(id)arg0;
- (void)blurMaskLocalMockCloseFriendWithUserID:(id)arg0;
- (void)blurMaskRemoveLocalMockCloseFriendWithUserID:(id)arg0;
- (void)postRelationWillChangeWithUserID:(id)arg0;
- (void)postRelationDidChangeWithUserID:(id)arg0;
- (void)updateCloseFriendsRelationByForwardArray:(id)arg0;
- (void)updateCloseFriendsRelationByReverseArray:(id)arg0;
- (void)p_updateSKIIOnboardingWithTime:(long long)arg0;
- (id)blurMaskLocalMockCloseFriends;
- (void)setReverseCloseFriendList:(id)arg0;
- (id)currentUserKeyWithOriginKey:(id)arg0;
- (void)setForwardCloseFriendList:(id)arg0;
- (id)forwardCloseFriendList;
- (id)reverseCloseFriendList;
- (id)getForwardCloseFriendsListWithUids;
- (id)getReverseCloseFriendsListWithUids;
- (id)getMutualCloseFriendsListWithUids;
- (void)patchUpdateCloseFriendIDList:(id)arg0;
- (void)addReverseCloseFriendsWithUID:(id)arg0;
- (void)addForwardCloseFriendsWithUID:(id)arg0;
- (void)removeForwardCloseFriendsWithUIDs:(id)arg0;
- (void)removeReverseCloseFriendsWithUIDs:(id)arg0;
- (void)updateSKIIConfigWithSettingsDictionary:(id)arg0 fromColdLaunch:(BOOL)arg1;
- (void)fetchLastestCloseFriendsInfo:(BOOL)arg0;
- (void)sendRemoveCloseFriendsMessage:(id)arg0;
- (void)removeCloseFriendsWithUser:(id)arg0 sourcePage:(long long)arg1 completion:(id /* block */)arg2;
- (void)updateCloseFriendWithselectedUsers:(id)arg0 Completion:(id /* block */)arg1;
- (void)setBlurMaskLocalMockCloseFriends:(id)arg0;
- (id)blurMaskLocalMockReverseCloseFriends;
- (void)setBlurMaskLocalMockReverseCloseFriends:(id)arg0;
- (id)init;
- (void).cxx_destruct;
- (id)lock;
- (void)dealloc;
- (void)setLock:(id)arg0;

@end
