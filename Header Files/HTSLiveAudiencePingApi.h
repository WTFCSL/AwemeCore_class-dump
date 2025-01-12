//
//     Generated by private class-dump
//

@class NSNumber;
@protocol HTSLiveAudiencePingApiDelegate;

@interface HTSLiveAudiencePingApi : HTSLiveApi {
    BOOL _closed;
    id<HTSLiveAudiencePingApiDelegate> _delegate;
    unsigned long long _audiencePingInterval;
    NSNumber *_roomID;
}

@property (retain, nonatomic) NSNumber *roomID;
@property (nonatomic) BOOL closed;
@property (weak, nonatomic) id<HTSLiveAudiencePingApiDelegate> delegate;
@property (nonatomic) unsigned long long audiencePingInterval;

- (id)initWithRoomID:(id)arg0;
- (unsigned long long)audiencePingInterval;
- (void)requestWithOnlyStatus:(BOOL)arg0;
- (void)setAudiencePingInterval:(unsigned long long)arg0;
- (void)startAudiencePingImmediately:(BOOL)arg0;
- (void)stopAudiencePing;
- (void)checkLiveRoomAlive;
- (void).cxx_destruct;
- (void)setClosed:(BOOL)arg0;
- (id)delegate;
- (void)setDelegate:(id)arg0;
- (BOOL)closed;
- (id)roomID;
- (void)setRoomID:(id)arg0;

@end
