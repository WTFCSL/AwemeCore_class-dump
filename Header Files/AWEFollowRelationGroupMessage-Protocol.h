//
//     Generated by private class-dump
//

@protocol AWEFollowRelationGroupMessage <NSObject>

@optional

- (void)didFinishCreateGroup:(id)arg0 groupName:(id)arg1;
- (void)didFinishDeleteGroup:(id)arg0;
- (void)didFinishUpdateGroupName:(id)arg0 newName:(id)arg1;
- (void)didFinishAddNewMembers:(id)arg0 newUserIds:(id)arg1;
- (void)didFinishDropMembers:(id)arg0 userIds:(id)arg1;
- (void)didFinishUpdateUserBelongGroups:(id)arg0;

@end
