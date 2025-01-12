//
//     Generated by private class-dump
//

@class NSArray, NSString;

@interface AWERelationFollowBaseViewModel : AWEBaseViewModel <AWEUserMessage, AWEFollowRelationGroupMessage> {
    BOOL _needReloadData;
    BOOL _needRefreshData;
    NSArray *_dataSource;
    NSString *_updateUid;
}

@property (retain) NSArray *dataSource;
@property (copy) NSString *updateUid;
@property BOOL needReloadData;
@property BOOL needRefreshData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didFinishFollowUser:(id)arg0 status:(long long)arg1 error:(id)arg2;
- (void)didFinishUnFollowUser:(id)arg0 status:(long long)arg1 error:(id)arg2;
- (void)didFinishBlockUser:(id)arg0 status:(long long)arg1;
- (void)didFinishHidePostFromHer:(id)arg0 status:(long long)arg1;
- (void)didFinishUnHidePostFromHer:(id)arg0 status:(long long)arg1;
- (void)didFinishSetRemarkWithUser:(id)arg0;
- (void)didFinishRemoveFansWithUser:(id)arg0;
- (id)updateUid;
- (void)didFinishAddNewMembers:(id)arg0 newUserIds:(id)arg1;
- (void)didFinishDropMembers:(id)arg0 userIds:(id)arg1;
- (void)setNeedReloadData:(BOOL)arg0;
- (void)setUpdateUid:(id)arg0;
- (void)__updateDataSourceWithType:(long long)arg0 userID:(id)arg1 object:(id)arg2 needResetAlias:(BOOL)arg3;
- (void)viewModelDidFinishAddNewMembers:(id)arg0 newUserIds:(id)arg1;
- (void)setNeedRefreshData:(BOOL)arg0;
- (void)viewModelDidFinishDropMembers:(id)arg0 userIds:(id)arg1;
- (BOOL)needReloadData;
- (BOOL)needRefreshData;
- (void)setDataSource:(id)arg0;
- (id)init;
- (id)dataSource;
- (void).cxx_destruct;
- (void)dealloc;

@end
