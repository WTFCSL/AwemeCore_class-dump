//
//     Generated by private class-dump
//

@class RTVFeedWebService, NSString;
@protocol RTVStorageArea, RxInjector, RTVUserProfileManagerInterface;

@interface RTVFeedManager : NSObject <RTVFeedManagerInterface> {
    id<RxInjector> _injector;
    id<RTVUserProfileManagerInterface> _profileManager;
    RTVFeedWebService *_webService;
    id<RTVStorageArea> _storage;
}

@property (readonly, weak, nonatomic) id<RxInjector> injector;
@property (readonly, nonatomic) id<RTVUserProfileManagerInterface> profileManager;
@property (readonly, nonatomic) RTVFeedWebService *webService;
@property (readonly, nonatomic) id<RTVStorageArea> storage;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)rxAwakeFromPropertyInjection;
- (id)reportFeedListCmdWithRoomID:(id)arg0 roomType:(long long)arg1 feedListCMD:(id)arg2 roomFeature:(long long)arg3;
- (id)activeInteractionWindow:(BOOL)arg0 withRoomID:(id)arg1;
- (id)pullFeedShareWithRoomID:(id)arg0 roomType:(long long)arg1;
- (id)requestHotFeedWithRoomID:(id)arg0;
- (id)hasShowSupportLongVideoTips;
- (id)markHasShowSupportLongVideoTips;
- (void).cxx_destruct;
- (id)storage;
- (id)injector;
- (id)webService;
- (id)profileManager;

@end
