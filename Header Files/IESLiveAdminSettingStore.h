//
//     Generated by private class-dump
//

@class HTSLiveUser, HTSEventContext, NSArray, IESLiveAdministerSettingApi, NSString, NSMutableArray, GPBInt64ObjectDictionary;
@protocol IESLiveSubscription, IESLiveRoomService, IESLiveAdminSettingReaction;

@interface IESLiveAdminSettingStore : NSObject <IESLiveAdminSettingAction> {
    id<IESLiveRoomService> _roomModel;
    HTSEventContext *_eventContext;
    NSMutableArray *_generalItems;
    NSMutableArray *_seniorItems;
    id<IESLiveAdminSettingReaction> _reaction;
    HTSLiveUser *_currentAdministerUserInfo;
    long long _index;
    long long _seniorMaxAdminCount;
    NSArray *_administers;
    GPBInt64ObjectDictionary *_privilegeExtraInfo;
    id<IESLiveSubscription> _disposable;
    IESLiveAdministerSettingApi *_administerSettingApi;
}

@property (retain, nonatomic) id<IESLiveSubscription> disposable;
@property (retain, nonatomic) IESLiveAdministerSettingApi *administerSettingApi;
@property (retain, nonatomic) id<IESLiveRoomService> roomModel;
@property (retain, nonatomic) HTSEventContext *eventContext;
@property (retain, nonatomic) NSMutableArray *generalItems;
@property (retain, nonatomic) NSMutableArray *seniorItems;
@property (weak, nonatomic) id<IESLiveAdminSettingReaction> reaction;
@property (retain, nonatomic) HTSLiveUser *currentAdministerUserInfo;
@property (nonatomic) long long index;
@property (nonatomic) long long seniorMaxAdminCount;
@property (retain, nonatomic) NSArray *administers;
@property (copy, nonatomic) GPBInt64ObjectDictionary *privilegeExtraInfo;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)roomModel;
- (void)didSetAttachingDIContext;
- (void)setEventContext:(id)arg0;
- (void)setDisposable:(id)arg0;
- (id)disposable;
- (void)setRoomModel:(id)arg0;
- (void)setupItems;
- (id)privilegeExtraInfo;
- (void)setPrivilegeExtraInfo:(id)arg0;
- (void)setUpNewStyleItems;
- (id)currentAdministerUserInfo;
- (void)fetchAdminOperateAudienceStatus:(id /* block */)arg0;
- (void)toggleAdminOperateAudienceEnabled:(BOOL)arg0 completion:(id /* block */)arg1;
- (void)updateAdminSettings:(int)arg0 removedUserID:(id)arg1;
- (void)setGeneralItems:(id)arg0;
- (id)generalItems;
- (void)p_trackPrivilegeClicked:(BOOL)arg0;
- (void)p_trackAdminRight:(BOOL)arg0;
- (void)itemActionWithItem:(id)arg0 cell:(id)arg1 isSenior:(BOOL)arg2;
- (long long)seniorMaxAdminCount;
- (void)addItemsToArray:(id)arg0 titles:(id)arg1 details:(id)arg2 privileges:(id)arg3 startIndex:(int)arg4;
- (void)setSeniorItems:(id)arg0;
- (id)incrementalUpdate:(int)arg0 on:(BOOL)arg1;
- (id)seniorItems;
- (void)changePrivilege:(int)arg0 isAdd:(BOOL)arg1;
- (id)administers;
- (void)trackPrivilegeChangeWithItem:(id)arg0;
- (BOOL)isLastPrivilege;
- (BOOL)isSeniorPrivilegeOverMax:(int)arg0;
- (id)overCountToastWithType:(id)arg0;
- (id)administerSettingApi;
- (void)p_trackPrivilegeChangeEvent:(id)arg0 isOn:(BOOL)arg1;
- (id)initWithLiveRoom:(id)arg0;
- (id)initWithLiveRoom:(id)arg0 administerUserInfo:(id)arg1 index:(long long)arg2 seniorMaxAdminCount:(long long)arg3;
- (void)setAdministers:(id)arg0;
- (void)setCurrentAdministerUserInfo:(id)arg0;
- (void)setSeniorMaxAdminCount:(long long)arg0;
- (void)setAdministerSettingApi:(id)arg0;
- (void)setIndex:(long long)arg0;
- (void).cxx_destruct;
- (void)setup;
- (long long)index;
- (id)eventContext;
- (void)dealloc;
- (id)reaction;
- (void)setReaction:(id)arg0;
- (void)updateCell;

@end
