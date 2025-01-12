//
//     Generated by private class-dump
//

@class NSArray;
@protocol IESLiveLinkmicUserServiceDelegate, IESLiveLinkmicUser, IESLiveLinkmicUserServiceDataSource;

@protocol IESLiveLinkmicUserServiceInterface <NSObject>

@property (weak, nonatomic) id<IESLiveLinkmicUserServiceDataSource> dataSource;
@property (weak, nonatomic) id<IESLiveLinkmicUserServiceDelegate> delegate;
@property (readonly, nonatomic) NSArray *linkedUserList;
@property (readonly, nonatomic) NSArray *waitingUserList;
@property (readonly, nonatomic) id<IESLiveLinkmicUser> me;

- (id)linkedUserList;
- (id)waitingUserList;
- (void)reloadLinkedList;
- (id)userByLinkmicId:(id)arg0;
- (id)userByUserId:(id)arg0;
- (id)userBySecUserId:(id)arg0;
- (id)waitingUserByUserId:(id)arg0;
- (id)waitingUserBySecUserId:(id)arg0;
- (id)createEmptyUserWithLinkmicID:(id)arg0;
- (void)reloadLinkedListWithListChanged:(id)arg0;
- (void)removeAll;
- (void)setDataSource:(id)arg0;
- (id)dataSource;
- (id)me;
- (id)delegate;
- (void)setDelegate:(id)arg0;
- (void)addUser:(id)arg0;

@end
