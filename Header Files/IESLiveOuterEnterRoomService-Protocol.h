//
//     Generated by private class-dump
//

@protocol IESLiveOuterEnterRoomService <NSObject>

- (unsigned long long)forbidEnterRoomForLiveRoomMode:(id)arg0;
- (unsigned long long)smallWindowForbidEnterRoomWithRoomId:(id)arg0;
- (BOOL)forbidStartLiveRoom;
- (unsigned long long)forbidEnterRoomIfNeededWithRoomId:(id)arg0 anchorId:(id)arg1 allowEnterSameRoomID:(BOOL)arg2 liveRoomModel:(id)arg3;

@optional

- (BOOL)hasCreatedLiveRoom;

@end