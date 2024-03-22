//
//     Generated by private class-dump
//

@class NSMutableArray, NSString, HTSLiveEpisode, GiftListResponse_Data, IESLiveVSFetchNewGiftTaskThrottle, IESLiveComponentContext;
@protocol IESLiveRoomServiceAdapter, IESLiveVSGiftListAPI;

@interface IESLiveVSGiftListManager : NSObject <IESLiveVSFetchNewGiftTaskThrottleDelegate> {
    BOOL _isFetchingNewGift;
    id<IESLiveRoomServiceAdapter> _roomModel;
    HTSLiveEpisode *_itemRoom;
    id<IESLiveVSGiftListAPI> _api;
    IESLiveComponentContext *_componentContext;
    GiftListResponse_Data *_cachedGiftListModel;
    IESLiveVSFetchNewGiftTaskThrottle *_taskThrottle;
    NSMutableArray *_giftListUpdatedBlocks;
    NSMutableArray *_giftsInfoUpdatedBlocks;
    NSString *_cachedGiftListLogID;
}

@property (retain, nonatomic) id<IESLiveVSGiftListAPI> api;
@property (retain, nonatomic) IESLiveComponentContext *componentContext;
@property (retain, nonatomic) GiftListResponse_Data *cachedGiftListModel;
@property (retain, nonatomic) IESLiveVSFetchNewGiftTaskThrottle *taskThrottle;
@property (nonatomic) BOOL isFetchingNewGift;
@property (retain, nonatomic) NSMutableArray *giftListUpdatedBlocks;
@property (retain, nonatomic) NSMutableArray *giftsInfoUpdatedBlocks;
@property (copy, nonatomic) NSString *cachedGiftListLogID;
@property (retain, nonatomic) id<IESLiveRoomServiceAdapter> roomModel;
@property (retain, nonatomic) HTSLiveEpisode *itemRoom;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)componentContext;
- (id)roomModel;
- (void)setComponentContext:(id)arg0;
- (void)setRoomModel:(id)arg0;
- (id)taskThrottle;
- (void)scheduleUnionTask:(id)arg0;
- (void)setTaskThrottle:(id)arg0;
- (BOOL)isFetchingNewGift;
- (void)setIsFetchingNewGift:(BOOL)arg0;
- (id)giftWithGiftID:(id)arg0;
- (void)receivedNewGift:(id)arg0 completion:(id /* block */)arg1;
- (void)registerGiftListUpdatedBlock:(id /* block */)arg0;
- (void)prefetchGiftList;
- (id)currentGiftListModel;
- (id)currentGiftListLogID;
- (void)fetchGiftListFromScene:(long long)arg0 completion:(id /* block */)arg1;
- (void)registerGiftsInfoUpdatedBlock:(id /* block */)arg0 shouldSkipFirst:(BOOL)arg1;
- (id)currentGiftsInfo;
- (id)cachedGiftListModel;
- (void)p_loadLocalData;
- (id)cachedGiftListLogID;
- (void)fetchGiftListFromScene:(long long)arg0 secGuestID:(id)arg1 completion:(id /* block */)arg2;
- (void)ts_fetchGiftListWithParams:(id)arg0 duration:(id)arg1 error:(id)arg2;
- (void)setCachedGiftListModel:(id)arg0;
- (void)setCachedGiftListLogID:(id)arg0;
- (id)giftListUpdatedBlocks;
- (id)giftsInfoUpdatedBlocks;
- (id)p_giftsInfo;
- (id)p_giftWithGiftID:(id)arg0;
- (void)p_receivedNewGift:(id)arg0 completion:(id /* block */)arg1;
- (void)p_loadLocalGiftListModelWithCompletion:(id /* block */)arg0;
- (id)p_giftList;
- (void)scheduleFetchNewGiftTask:(id)arg0;
- (id)initWithVSComponentContext:(id)arg0;
- (id)itemRoom;
- (void)setItemRoom:(id)arg0;
- (void)setGiftListUpdatedBlocks:(id)arg0;
- (void)setGiftsInfoUpdatedBlocks:(id)arg0;
- (void).cxx_destruct;
- (void)dealloc;
- (id)api;
- (void)setApi:(id)arg0;

@end