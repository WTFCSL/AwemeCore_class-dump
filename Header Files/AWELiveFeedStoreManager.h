//
//     Generated by private class-dump
//

@class NSMutableDictionary, NSMutableArray;

@interface AWELiveFeedStoreManager : NSObject {
    NSMutableDictionary *_dataMap;
    NSMutableArray *_feedPreStreamItem;
}

@property (retain, nonatomic) NSMutableDictionary *dataMap;
@property (retain, nonatomic) NSMutableArray *feedPreStreamItem;

+ (id)sharedManager;

- (id)dataMap;
- (void)setDataMap:(id)arg0;
- (void)p_addNotification;
- (void)storeRefreshListWithData:(id)arg0 referString:(id)arg1;
- (void)storeLoadMoreListWithData:(id)arg0 referString:(id)arg1;
- (void)_storeFeedListWithData:(id)arg0 isFetch:(BOOL)arg1 referString:(id)arg2;
- (void)storeFeedPreStreamItem:(id)arg0 isFetch:(BOOL)arg1 referString:(id)arg2;
- (id)feedPreStreamItem;
- (BOOL)adapter_enableUseUpdateLive;
- (id)centerWith:(id)arg0;
- (id)getNowTimestamp;
- (id)_buildCurrenScene:(id)arg0 referString:(id)arg1;
- (void)_createVideoFeedModelUseRoomID:(id)arg0 userID:(id)arg1 sceneID:(id)arg2 toCenter:(id)arg3 timestamp:(id)arg4 status:(long long)arg5 adSourceType:(long long)arg6 isLiveWhiteAd:(BOOL)arg7 needDowngrade:(BOOL)arg8 logID:(id)arg9;
- (id)_buildSceneUIDKey:(id)arg0 userID:(id)arg1;
- (void)readPreStream:(id)arg0 referString:(id)arg1;
- (void)setFeedPreStreamItem:(id)arg0;
- (id)init;
- (void).cxx_destruct;
- (void)applicationWillTerminate;

@end
