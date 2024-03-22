//
//     Generated by private class-dump
//

@class IESLiveLeaveRoomStatInfo, NSMutableDictionary, IESLiveEnterRoomProcessItem;
@protocol HTSKVStore;

@interface IESLiveEnterRoomProcessTrace : NSObject {
    IESLiveLeaveRoomStatInfo *_leaveRoomStatInfo;
    NSMutableDictionary *_items;
    IESLiveEnterRoomProcessItem *_currentProcessItem;
    id<HTSKVStore> _trackKVStore;
}

@property (retain, nonatomic) NSMutableDictionary *items;
@property (retain, nonatomic) IESLiveEnterRoomProcessItem *currentProcessItem;
@property (retain, nonatomic) id<HTSKVStore> trackKVStore;
@property (retain, nonatomic) IESLiveLeaveRoomStatInfo *leaveRoomStatInfo;

- (void)recordFirstFrameRenderWithRoom:(id)arg0 firstFrame:(BOOL)arg1 extra:(id)arg2;
- (void)recordRoom:(id)arg0 processStage:(unsigned long long)arg1;
- (void)recordRoom:(id)arg0 roomInfoBlock:(id /* block */)arg1;
- (void)enterFailRoom:(id)arg0 exceptionType:(unsigned long long)arg1 extra:(id)arg2;
- (void)closeRoom:(id)arg0 manualType:(unsigned long long)arg1 exceptionType:(unsigned long long)arg2 extra:(id)arg3;
- (id)trackKVStore;
- (void)setTrackKVStore:(id)arg0;
- (void)setLeaveRoomStatInfo:(id)arg0;
- (void)traceStartEnterRoom:(id)arg0;
- (void)updateRoomProcessRecord:(id)arg0;
- (id)currentProcessItem;
- (void)setCurrentProcessItem:(id)arg0;
- (id)itemWithIndex:(id)arg0 needCreate:(BOOL)arg1;
- (void)checkLastLeaveRoom;
- (id)leaveRoomStatInfo;
- (void)recordRoom:(id)arg0 extra:(id)arg1;
- (id)init;
- (void)setItems:(id)arg0;
- (void).cxx_destruct;
- (id)items;
- (void)clear;

@end
