//
//     Generated by private class-dump
//

@class NSString;
@protocol IESLiveAdventureCallMediaServiceDelegate;

@protocol IESLiveAdventureCallMediaService <NSObject>

@property (readonly, nonatomic) BOOL isConnected;
@property (weak, nonatomic) id<IESLiveAdventureCallMediaServiceDelegate> delegate;
@property (copy, nonatomic) NSString *remoteUserId;
@property (readonly, nonatomic) long long state;

- (void)setupWithRTCExtInfo:(id)arg0;
- (void)muteLocalAudio:(BOOL)arg0 reason:(id)arg1;
- (void)startConnect;
- (void)stopConnect;
- (id)remoteUserId;
- (void)setRemoteUserId:(id)arg0;
- (long long)state;
- (BOOL)isConnected;
- (id)delegate;
- (void)setDelegate:(id)arg0;

@end
