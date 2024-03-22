//
//     Generated by private class-dump
//

@class NSString;

@interface AWECommonUserListBaseSectionViewModel : AWERelationUserListBaseSectionViewModel <AWEUserMessage> {
    NSString *_previousPage;
}

@property (copy, nonatomic) NSString *previousPage;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didFinishFollowUser:(id)arg0 status:(long long)arg1 error:(id)arg2;
- (void)didFinishUnFollowUser:(id)arg0 status:(long long)arg1 error:(id)arg2;
- (void)didFinishTopFollowingUser:(id)arg0 status:(long long)arg1;
- (void)didFinishUnTopFollowingUser:(id)arg0 status:(long long)arg1;
- (void)didFinishBlockUser:(id)arg0 status:(long long)arg1;
- (void)didFinishTapTAIsFriendWithUser:(id)arg0 isFriend:(BOOL)arg1;
- (void)didFinishSetRemarkWithUser:(id)arg0;
- (void)didFinishRemoveFansWithUser:(id)arg0;
- (void)setupViewModel;
- (void)unfollowUser:(id)arg0;
- (void)syncModelFollowStatus:(id)arg0;
- (void)onClickUnFollowUserOnProfileMenu:(id)arg0 trackerParam:(id)arg1;
- (BOOL)isFriends;
- (void).cxx_destruct;
- (long long)type;
- (void)dealloc;
- (id)previousPage;
- (void)setPreviousPage:(id)arg0;
- (BOOL)isMine;

@end