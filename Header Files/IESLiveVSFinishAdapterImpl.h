//
//     Generated by private class-dump
//

@class NSString;

@interface IESLiveVSFinishAdapterImpl : IESLiveBaseAdapter <IESLiveVSFinishAdapter>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)isPersonalRecommendSwitchOn;
- (void)fetchRoomInfoWithRoomID:(id)arg0 completion:(id /* block */)arg1;
- (void)goLiveRoom:(id)arg0 params:(id)arg1 isDrawEnabled:(BOOL)arg2 ownerUserId:(id)arg3 roomId:(id)arg4 trackContext:(id)arg5;
- (void)initRoomServiceWithTrackContext:(id)arg0;
- (void)goLiveRoomWithDictionary:(id)arg0 resultDic:(id)arg1 isDrawEnabled:(BOOL)arg2 ownerUserId:(id)arg3 roomId:(id)arg4 trackContext:(id)arg5;

@end
