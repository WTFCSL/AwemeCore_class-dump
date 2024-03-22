//
//     Generated by private class-dump
//

@class RTVInteractionFeedContext, RTVFeedShareModel;

@protocol RTVFeedSessionInterface <RTVXRControllerInterface, RTVInteractionSessionInterface>

@property (readonly) RTVFeedShareModel *shareModel;
@property (readonly, nonatomic) RTVInteractionFeedContext *context;

- (long long)roomType;
- (id)monitorInfo;
- (BOOL)isRoomOwner;
- (BOOL)disableHostSliding;
- (BOOL)disableGuestSliding;
- (BOOL)isShareTerminal;
- (id)sharingFromUserID;
- (long long)feedSource;
- (BOOL)enableTextChat;
- (void)sendCMDMessage:(id)arg0 bySEI:(BOOL)arg1;
- (void)setVideoPlayVolume:(double)arg0;
- (void)setVoipVoiceVolume:(double)arg0;
- (double)validVideoPlayVolume;
- (double)validVoipVoiceVolume;
- (BOOL)isCameraOff;
- (void)handleFeedShareTerminal;
- (BOOL)isSupportRichAweme;
- (id)version;
- (id)context;
- (void)addObserver:(id)arg0;
- (void)removeObserver:(id)arg0;
- (BOOL)isSharing;
- (id)shareModel;

@end