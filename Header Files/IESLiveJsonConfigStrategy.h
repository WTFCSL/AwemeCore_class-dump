//
//     Generated by private class-dump
//

@class NSMutableDictionary, NSArray, IESLiveToolbarSlotConfig, IESLiveToolbarTracker;

@interface IESLiveJsonConfigStrategy : NSObject {
    NSArray *_items;
    IESLiveToolbarTracker *_tracker;
    IESLiveToolbarSlotConfig *_configuration;
    NSMutableDictionary *_insertTrace;
}

@property (retain, nonatomic) IESLiveToolbarSlotConfig *configuration;
@property (retain, nonatomic) NSMutableDictionary *insertTrace;
@property (nonatomic) unsigned long long customMaxSlotCount;
@property (copy, nonatomic) NSArray *items;
@property (retain, nonatomic) IESLiveToolbarTracker *tracker;

- (BOOL)containItem:(id)arg0;
- (void)insertItem:(id)arg0 asExtendedFor:(id)arg1;
- (unsigned long long)indexForSlot:(id)arg0;
- (id)findItem:(id)arg0;
- (id)insertTrace;
- (void)logEvent:(id)arg0 fileName:(const char *)arg1 functionName:(const char *)arg2 line:(int)arg3 extra:(id)arg4;
- (id)removeLowPrioritySlotIfNeed:(id)arg0 insertItem:(id)arg1;
- (unsigned long long)isContainsItem:(id)arg0 items:(id)arg1;
- (id)slotForItem:(id)arg0;
- (id)monitorInsertTrace;
- (void)setCustomMaxSlotCount:(unsigned long long)arg0;
- (unsigned long long)customMaxSlotCount;
- (void)setInsertTrace:(id)arg0;
- (BOOL)isFull;
- (id)tracker;
- (void)setTracker:(id)arg0;
- (void)setItems:(id)arg0;
- (void).cxx_destruct;
- (id)items;
- (id)configuration;
- (void)insertItem:(id)arg0;
- (void)setConfiguration:(id)arg0;
- (id)initWithConfigFile:(id)arg0;

@end
