//
//     Generated by private class-dump
//

@class NSSet, NSString, RxDeferred, RTVXRRoomMessage;

@interface RTVXRRoomMessageFallbackSendModel : NSObject {
    RTVXRRoomMessage *_message;
    NSSet *_toUserIDs;
    NSString *_roomID;
    RxDeferred *_deferred;
}

@property (readonly, nonatomic) RTVXRRoomMessage *message;
@property (readonly, copy, nonatomic) NSSet *toUserIDs;
@property (readonly, copy, nonatomic) NSString *roomID;
@property (readonly, nonatomic) RxDeferred *deferred;

- (id)toUserIDs;
- (id)initWithMessage:(id)arg0 roomID:(id)arg1 toUserIDs:(id)arg2 deferred:(id)arg3;
- (void)mergeWithToUserIDs:(id)arg0;
- (void).cxx_destruct;
- (id)message;
- (id)deferred;
- (id)roomID;

@end