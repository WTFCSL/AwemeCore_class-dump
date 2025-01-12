//
//     Generated by private class-dump
//

@class NSNumber, NSString, HTSEventContext, HTSLiveInteractiveAPI, NSMutableDictionary, NSDictionary, NSMutableArray, IESLiveWaitingListUser, HTSLiveText;
@protocol IESLiveRoomServiceAdapter;

@interface IESLivePKGuestWaitingListService : NSObject {
    BOOL _hasFetchWaitingList;
    BOOL _enableApplyListLoadMore;
    BOOL _hasLinkPaidGuidence;
    BOOL _isLoadMoreList;
    int _waitingListSortStrategy;
    int _waitingListSource;
    NSMutableArray *_waitingList;
    IESLiveWaitingListUser *_waitingUser;
    HTSLiveText *_displayText;
    NSNumber *_serverTime;
    id<IESLiveRoomServiceAdapter> _roomModel;
    NSDictionary *_waitingOffsetInfo;
    NSDictionary *_applyWaitingTrackInfo;
    HTSEventContext *_trackContext;
    long long _totalCount;
    long long _waitingListTotalCount;
    HTSLiveInteractiveAPI *_linkmicAPI;
    NSString *_waitingListNextCursor;
    NSMutableDictionary *_requestTimeMap;
}

@property (retain, nonatomic) HTSLiveInteractiveAPI *linkmicAPI;
@property (copy, nonatomic) NSString *waitingListNextCursor;
@property (nonatomic) BOOL enableApplyListLoadMore;
@property (nonatomic) BOOL isLoadMoreList;
@property (retain, nonatomic) NSMutableDictionary *requestTimeMap;
@property (retain, nonatomic) NSMutableArray *waitingList;
@property (nonatomic) int waitingListSortStrategy;
@property (retain, nonatomic) IESLiveWaitingListUser *waitingUser;
@property (retain, nonatomic) HTSLiveText *displayText;
@property (retain, nonatomic) NSNumber *serverTime;
@property (retain, nonatomic) id<IESLiveRoomServiceAdapter> roomModel;
@property (retain, nonatomic) NSDictionary *waitingOffsetInfo;
@property (retain, nonatomic) NSDictionary *applyWaitingTrackInfo;
@property (nonatomic) BOOL hasFetchWaitingList;
@property (retain, nonatomic) HTSEventContext *trackContext;
@property (nonatomic) long long totalCount;
@property (nonatomic) long long waitingListTotalCount;
@property (nonatomic) BOOL hasLinkPaidGuidence;
@property (nonatomic) int waitingListSource;

- (id)trackContext;
- (void)setTrackContext:(id)arg0;
- (id)roomModel;
- (void)setServerTime:(id)arg0;
- (void)setRoomModel:(id)arg0;
- (id)initWithRoom:(id)arg0 trackContext:(id)arg1;
- (id)waitingUserByUserId:(id)arg0;
- (id)waitingList;
- (id)waitingUser;
- (void)refreshWaitingListWithCompletion:(id /* block */)arg0;
- (void)setWaitingUser:(id)arg0;
- (int)waitingListSortStrategy;
- (void)loadMoreWaitingListWithCompletion:(id /* block */)arg0;
- (void)setWaitingList:(id)arg0;
- (void)setWaitingListSortStrategy:(int)arg0;
- (BOOL)hasFetchWaitingList;
- (void)setHasFetchWaitingList:(BOOL)arg0;
- (id)waitingOffsetInfo;
- (void)setWaitingOffsetInfo:(id)arg0;
- (void)setWaitingListSource:(int)arg0;
- (BOOL)enableApplyListLoadMore;
- (long long)waitingListTotalCount;
- (void)removeWaitingModelWithUid:(id)arg0;
- (id)linkmicAPI;
- (void)removeWaitingUsersWithActiveUsers:(id)arg0;
- (void)setLinkmicAPI:(id)arg0;
- (void)setWaitingListNextCursor:(id)arg0;
- (void)fetchWaitingListWithType:(unsigned long long)arg0 completion:(id /* block */)arg1;
- (void)setIsLoadMoreList:(BOOL)arg0;
- (id)requestTimeMap;
- (id)waitingListNextCursor;
- (int)waitingListSource;
- (void)setEnableApplyListLoadMore:(BOOL)arg0;
- (void)classifyInterativeList:(id)arg0 type:(int)arg1;
- (void)setWaitingListTotalCount:(long long)arg0;
- (BOOL)isLoadMoreList;
- (void)updateWaitingOffsetInfo:(long long)arg0;
- (id)applyWaitingTrackInfo;
- (void)setApplyWaitingTrackInfo:(id)arg0;
- (BOOL)hasLinkPaidGuidence;
- (void)setHasLinkPaidGuidence:(BOOL)arg0;
- (void)setRequestTimeMap:(id)arg0;
- (id)serverTime;
- (void).cxx_destruct;
- (id)displayText;
- (long long)totalCount;
- (void)setDisplayText:(id)arg0;
- (void)setTotalCount:(long long)arg0;

@end
