//
//     Generated by private class-dump
//

@class HTSLiveUser, RACDisposable, HTSLiveUserAPI, HTSEventContext, NSString, NSMutableArray;
@protocol IESLiveRoomService, HTSLiveAdminListReactions;

@interface HTSLiveBlockListStore : NSObject <IESLiveAdminStoreIntegration> {
    BOOL _hasMore;
    BOOL _isNewStyle;
    BOOL _needKickoutSilenceInfo;
    NSMutableArray *_dataSource;
    NSMutableArray *_adminedUserInfos;
    long long _total;
    long long _max;
    id<HTSLiveAdminListReactions> _reactionCommon;
    id<IESLiveRoomService> _room;
    HTSEventContext *_eventContext;
    HTSLiveUser *_anchor;
    RACDisposable *_disposable;
    HTSLiveUserAPI *_userApi;
}

@property (retain, nonatomic) HTSLiveUser *anchor;
@property (retain, nonatomic) RACDisposable *disposable;
@property (retain, nonatomic) HTSLiveUserAPI *userApi;
@property (retain, nonatomic) id<IESLiveRoomService> room;
@property (nonatomic) BOOL needKickoutSilenceInfo;
@property (retain, nonatomic) NSMutableArray *dataSource;
@property (retain, nonatomic) NSMutableArray *adminedUserInfos;
@property (nonatomic) long long total;
@property (nonatomic) long long max;
@property (nonatomic) BOOL hasMore;
@property (weak, nonatomic) id<HTSLiveAdminListReactions> reactionCommon;
@property (retain, nonatomic) HTSEventContext *eventContext;
@property (nonatomic) BOOL isNewStyle;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didSetAttachingDIContext;
- (BOOL)isNewStyle;
- (void)setIsNewStyle:(BOOL)arg0;
- (void)setEventContext:(id)arg0;
- (void)setDisposable:(id)arg0;
- (id)disposable;
- (id)reactionCommon;
- (void)doAction:(id)arg0 enterFromMerge:(id)arg1 enterMethod:(id)arg2;
- (void)unDoAction:(id)arg0 enterFromMerge:(id)arg1 enterMethod:(id)arg2;
- (void)fetchUserList:(unsigned long long)arg0;
- (void)viewShowOpportunity;
- (void)alertActionOpportunity:(id)arg0 cancel:(BOOL)arg1;
- (void)alertShowOpportunity:(id)arg0 ensure:(BOOL)arg1;
- (id)fillInTableView:(id)arg0 WithCellAtIndexPath:(id)arg1 isWhite:(BOOL)arg2;
- (void)unDoAction:(id)arg0;
- (void)setReactionCommon:(id)arg0;
- (id)dataSourceNewStyle;
- (BOOL)moreThere;
- (unsigned long long)actualLimitCount;
- (id)initWithAnchor:(id)arg0 room:(id)arg1;
- (id)userApi;
- (void)setUserApi:(id)arg0;
- (BOOL)needKickoutSilenceInfo;
- (void)fetchAdminOperationWithUser:(id)arg0 completion:(id /* block */)arg1;
- (void)setNeedKickoutSilenceInfo:(BOOL)arg0;
- (id)adminedUserInfos;
- (unsigned long long)actualBlackCount;
- (void)setAdminedUserInfos:(id)arg0;
- (void)kickoutUser:(id)arg0;
- (void)setAnchor:(id)arg0;
- (long long)total;
- (id)anchor;
- (void)setDataSource:(id)arg0;
- (id)dataSource;
- (void).cxx_destruct;
- (void)setMax:(long long)arg0;
- (void)setHasMore:(BOOL)arg0;
- (BOOL)hasMore;
- (id)eventContext;
- (void)dealloc;
- (long long)max;
- (long long)totalCount;
- (long long)maxCount;
- (id)room;
- (void)setRoom:(id)arg0;
- (void)setTotal:(long long)arg0;
- (void)doAction:(id)arg0;

@end
