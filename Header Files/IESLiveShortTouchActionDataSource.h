//
//     Generated by private class-dump
//

@class NSArray, NSMutableDictionary, HTSEventContext, IESLiveShortTouchItem, NSMutableArray;
@protocol IESLiveRoomService;

@interface IESLiveShortTouchActionDataSource : NSObject {
    id<IESLiveRoomService> _room;
    HTSEventContext *_trackContext;
    IESLiveShortTouchItem *_currentTempStateItem;
    NSMutableArray *_allItems;
    NSArray *_visibleItems;
    NSMutableDictionary *_configs;
}

@property (retain, nonatomic) NSMutableArray *allItems;
@property (retain, nonatomic) NSArray *visibleItems;
@property (retain, nonatomic) NSMutableDictionary *configs;
@property (retain, nonatomic) id<IESLiveRoomService> room;
@property (retain, nonatomic) HTSEventContext *trackContext;
@property (retain, nonatomic) IESLiveShortTouchItem *currentTempStateItem;

- (id)trackContext;
- (void)setTrackContext:(id)arg0;
- (void)setConfigs:(id)arg0;
- (void)setupConfigs;
- (void)orderItems;
- (void)updateVisibleItems;
- (BOOL)updatePriority:(long long)arg0 type:(long long)arg1;
- (id)currentTempStateItem;
- (long long)indexForVisibleItem:(id)arg0;
- (id)visibleItemForType:(unsigned long long)arg0;
- (void)setCurrentTempStateItem:(id)arg0;
- (long long)removeItem:(id)arg0;
- (long long)numberOfItems;
- (id)init;
- (void).cxx_destruct;
- (void)removeAllItems;
- (id)allItems;
- (void)updateItems;
- (long long)insertItem:(id)arg0;
- (id)visibleItems;
- (void)setVisibleItems:(id)arg0;
- (id)itemForIndex:(long long)arg0;
- (id)room;
- (void)setRoom:(id)arg0;
- (id)itemForType:(unsigned long long)arg0;
- (void)setAllItems:(id)arg0;
- (BOOL)containsType:(unsigned long long)arg0;
- (id)configs;

@end
