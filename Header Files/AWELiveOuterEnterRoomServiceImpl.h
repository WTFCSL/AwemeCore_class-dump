//
//     Generated by private class-dump
//

@class NSString;

@interface AWELiveOuterEnterRoomServiceImpl : NSObject <IESLiveOuterEnterRoomService>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)hasCreatedLiveRoom;
- (unsigned long long)forbidEnterRoomForLiveRoomMode:(id)arg0;
- (unsigned long long)smallWindowForbidEnterRoomWithRoomId:(id)arg0;
- (BOOL)forbidStartLiveRoom;
- (unsigned long long)forbidEnterRoomIfNeededWithRoomId:(id)arg0 anchorId:(id)arg1 allowEnterSameRoomID:(BOOL)arg2 liveRoomModel:(id)arg3;

@end
