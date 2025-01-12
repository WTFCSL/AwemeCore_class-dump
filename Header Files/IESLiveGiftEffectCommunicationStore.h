//
//     Generated by private class-dump
//

@class HTSEventContext, IESLiveThreadSafeDictionary, NSString;
@protocol IESLiveRoomServiceAdapter, IESLiveUserServiceAdapter;

@interface IESLiveGiftEffectCommunicationStore : NSObject <IESLiveEffectMessageSubscriber, HTSLiveMessageSubscriber> {
    BOOL _communicationEnable;
    id<IESLiveRoomServiceAdapter> _room;
    HTSEventContext *_trackContext;
    IESLiveThreadSafeDictionary *_effectKeyToGiftIDSetMap;
    IESLiveThreadSafeDictionary *_giftIDToEffectKeySetMap;
    long long _messageIndex;
    IESLiveThreadSafeDictionary *_giftCurrentMaxSendCountMap;
    long long _enterRoomDelaySendMessageDuration;
    id<IESLiveUserServiceAdapter> _userService;
}

@property (retain, nonatomic) id<IESLiveRoomServiceAdapter> room;
@property (retain, nonatomic) HTSEventContext *trackContext;
@property (retain, nonatomic) IESLiveThreadSafeDictionary *effectKeyToGiftIDSetMap;
@property (retain, nonatomic) IESLiveThreadSafeDictionary *giftIDToEffectKeySetMap;
@property (nonatomic) long long messageIndex;
@property (retain, nonatomic) IESLiveThreadSafeDictionary *giftCurrentMaxSendCountMap;
@property (nonatomic) BOOL communicationEnable;
@property (nonatomic) long long enterRoomDelaySendMessageDuration;
@property (retain, nonatomic) id<IESLiveUserServiceAdapter> userService;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)trackContext;
- (void)setTrackContext:(id)arg0;
- (void)componentDidMount;
- (id)userService;
- (void)setUserService:(id)arg0;
- (void)didReceiveEffectMessage:(unsigned long long)arg0 arg1:(unsigned long long)arg1 arg2:(unsigned long long)arg2 data:(id)arg3;
- (void)onEffectGiftNotifyMessageReceivedWithArg1:(unsigned long long)arg0 arg2:(unsigned long long)arg1 data:(id)arg2;
- (id)initWithRoom:(id)arg0 TrackContext:(id)arg1 componentContext:(id)arg2;
- (void)onEffectLiveInteractionMessageReceivedWithArg1:(unsigned long long)arg0 arg2:(unsigned long long)arg1 data:(id)arg2;
- (id)effectKeyToGiftIDSetMap;
- (id)giftIDToEffectKeySetMap;
- (id)uniqueComboKeyWithGiftMessage:(id)arg0 gift:(id)arg1;
- (id)giftCurrentMaxSendCountMap;
- (void)setEffectKeyToGiftIDSetMap:(id)arg0;
- (void)setGiftIDToEffectKeySetMap:(id)arg0;
- (void)setGiftCurrentMaxSendCountMap:(id)arg0;
- (BOOL)communicationEnable;
- (void)setCommunicationEnable:(BOOL)arg0;
- (long long)enterRoomDelaySendMessageDuration;
- (void)setEnterRoomDelaySendMessageDuration:(long long)arg0;
- (void).cxx_destruct;
- (id)room;
- (void)setRoom:(id)arg0;
- (void)messageReceived:(id)arg0;
- (void)setMessageIndex:(long long)arg0;
- (long long)messageIndex;

@end
