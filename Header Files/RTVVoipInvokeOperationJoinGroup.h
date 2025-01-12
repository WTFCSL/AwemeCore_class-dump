//
//     Generated by private class-dump
//

@class NSNumber, NSString;

@interface RTVVoipInvokeOperationJoinGroup : RTVVoipInvokeOperation {
    long long _source;
    NSNumber *_bizType;
    NSString *_roomID;
    NSNumber *_cameraOff;
    NSString *_followUserID;
}

@property (readonly, nonatomic) long long source;
@property (readonly, nonatomic) NSNumber *bizType;
@property (readonly, copy, nonatomic) NSString *roomID;
@property (readonly, nonatomic) NSNumber *cameraOff;
@property (readonly, copy, nonatomic) NSString *followUserID;

- (id)bizType;
- (id)cameraOff;
- (id)followUserID;
- (id)initWithObserverRoomInfo:(id)arg0 enterFrom:(unsigned long long)arg1 source:(long long)arg2 cameraOff:(id)arg3 selfIMID:(id)arg4 roomID:(id)arg5;
- (void)updateBizType:(id)arg0;
- (void)updateFollowUserID:(id)arg0;
- (long long)operationType;
- (long long)source;
- (void).cxx_destruct;
- (id)roomID;

@end
