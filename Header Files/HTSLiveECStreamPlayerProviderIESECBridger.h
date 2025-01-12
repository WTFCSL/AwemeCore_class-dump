//
//     Generated by private class-dump
//

@class NSString;
@protocol HTSLiveStreamPlayerProvider;

@interface HTSLiveECStreamPlayerProviderIESECBridger : NSObject <HTSLiveECStreamPlayerProvider> {
    id<HTSLiveStreamPlayerProvider> _protoObj;
}

@property (retain, nonatomic) id<HTSLiveStreamPlayerProvider> protoObj;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)bridgedInstanceWithObj:(id)arg0;
+ (id)bridgedProtocol;

- (BOOL)isPause;
- (void)playWithCallTrace:(id)arg0;
- (void)pauseWithCallTrace:(id)arg0;
- (void)resumeSmallWindowStream;
- (void)setProtoObj:(id)arg0;
- (id)protoObj;
- (void).cxx_destruct;
- (BOOL)isPlaying;
- (void)setMute:(BOOL)arg0;
- (BOOL)isMute;

@end
