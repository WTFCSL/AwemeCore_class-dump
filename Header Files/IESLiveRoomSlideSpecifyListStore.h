//
//     Generated by private class-dump
//

@class NSString, NSMutableArray, HTSLiveRoomAPI;
@protocol HTSLiveRoomCollectionDataObserver;

@interface IESLiveRoomSlideSpecifyListStore : NSObject <HTSLiveRoomCollectionDelegate> {
    id<HTSLiveRoomCollectionDataObserver> dataObserver;
    long long _index;
    long long _lastIndex;
    NSMutableArray *_cellModels;
    HTSLiveRoomAPI *_roomApi;
}

@property (nonatomic) long long index;
@property (nonatomic) long long lastIndex;
@property (retain, nonatomic) NSMutableArray *cellModels;
@property (retain, nonatomic) HTSLiveRoomAPI *roomApi;
@property (weak, nonatomic) id<HTSLiveRoomCollectionDataObserver> dataObserver;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)cellModels;
- (void)setCellModels:(id)arg0;
- (BOOL)canLoadMore;
- (void)changeToIndex:(unsigned long long)arg0;
- (BOOL)deleteRoom:(id)arg0;
- (BOOL)deleteModel:(id)arg0;
- (id)roomApi;
- (void)setRoomApi:(id)arg0;
- (id)initWithRoomAisle:(id)arg0;
- (void)_fetchRooms:(id)arg0 completion:(id /* block */)arg1;
- (void)_prefetchIfNeed:(BOOL)arg0 count:(long long)arg1;
- (void)setIndex:(long long)arg0;
- (id)dataObserver;
- (void).cxx_destruct;
- (long long)index;
- (BOOL)hasMore;
- (long long)lastIndex;
- (void)setDataObserver:(id)arg0;
- (void)setLastIndex:(long long)arg0;

@end
