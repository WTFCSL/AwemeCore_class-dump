//
//     Generated by private class-dump
//

@class IESLiveMultiInteractUserService, NSArray, NSString;
@protocol IESLiveLinkmicUserServiceDelegate, IESLiveLinkmicUser, IESLiveLinkmicUserServiceDataSource;

@interface IESLiveInteractionLinkerServiceUserServiceAdapter : NSObject <IESLiveLinkmicUserServiceInterface> {
    id<IESLiveLinkmicUserServiceDataSource> dataSource;
    id<IESLiveLinkmicUserServiceDelegate> delegate;
    NSArray *linkedUserList;
    id<IESLiveLinkmicUser> me;
    NSArray *waitingUserList;
    IESLiveMultiInteractUserService *_userService;
}

@property (retain, nonatomic) IESLiveMultiInteractUserService *userService;
@property (weak, nonatomic) id<IESLiveLinkmicUserServiceDataSource> dataSource;
@property (weak, nonatomic) id<IESLiveLinkmicUserServiceDelegate> delegate;
@property (readonly, nonatomic) NSArray *linkedUserList;
@property (readonly, nonatomic) NSArray *waitingUserList;
@property (readonly, nonatomic) id<IESLiveLinkmicUser> me;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)userService;
- (void)setUserService:(id)arg0;
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
- (id)initWithUserService:(id)arg0;
- (void)removeAll;
- (void)setDataSource:(id)arg0;
- (id)dataSource;
- (void).cxx_destruct;
- (id)me;
- (id)delegate;
- (void)setDelegate:(id)arg0;
- (void)addUser:(id)arg0;

@end
