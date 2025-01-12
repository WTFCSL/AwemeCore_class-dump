//
//     Generated by private class-dump
//

@class NSMutableDictionary;

@interface AWEVideoBridgeHandler : NSObject {
    id /* block */ _callback;
    NSMutableDictionary *_dataLists;
    NSMutableDictionary *_callbacks;
}

@property (copy, nonatomic) id /* block */ callback;
@property (retain, nonatomic) NSMutableDictionary *dataLists;
@property (retain, nonatomic) NSMutableDictionary *callbacks;

+ (void)handleVideoPlayBridgeWithParams:(id)arg0 callback:(id /* block */)arg1;
+ (void)handleInfinteVideosBridgeWithParams:(id)arg0 callback:(id /* block */)arg1;
+ (void)handleOpenAwemeDetailWithParams:(id)arg0;
+ (void)handleAddAwemeVideosFromRNWithParams:(id)arg0;
+ (void)handleFeedsLoadWithParams:(id)arg0;
+ (void)handleMixVideoPlayBridgeWithParams:(id)arg0 callback:(id /* block */)arg1;
+ (void)handleLongVideoPlayBridgeWithParams:(id)arg0 callback:(id /* block */)arg1;
+ (void)fetchAwemesFromRN:(id)arg0 page:(long long)arg1 callback:(id /* block */)arg2;
+ (void)fetchAwemesFromRN:(id)arg0 previousPage:(long long)arg1 callback:(id /* block */)arg2;
+ (void)postFeedsStatusChangeNotficiationWithDataController:(id)arg0;
+ (id)sharedHandler;

- (void)addNotifications;
- (void)startPlay:(id)arg0;
- (void)handleHotSpotVideoPlayBridgeWithParams:(id)arg0 callback:(id /* block */)arg1;
- (id)dataLists;
- (void)willLoop:(id)arg0;
- (void)videoWebViewBroadcast:(id)arg0;
- (void)lynxDealloc:(id)arg0;
- (void)handleNotificationsWithAction:(long long)arg0 userInfo:(id)arg1;
- (void)clearDataListWithId:(id)arg0;
- (void)removeNotificaitons;
- (void)setDataLists:(id)arg0;
- (id)callbacks;
- (id)init;
- (void).cxx_destruct;
- (void)setCallback:(id /* block */)arg0;
- (id /* block */)callback;
- (void)close:(id)arg0;
- (void)stop:(id)arg0;
- (void)setCallbacks:(id)arg0;
- (void)pause:(id)arg0;

@end
