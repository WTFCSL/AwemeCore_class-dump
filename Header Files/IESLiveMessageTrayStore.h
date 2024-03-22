//
//     Generated by private class-dump
//

@class IESLiveMessageTrayAggregationModel, HTSEventContext, IESLiveMessageTrayConfrontModel, NSMutableDictionary, NSString, NSMutableArray, NSNumber;
@protocol IESLiveRoomServiceAdapter, IESLivePerfSamplerAdapter;

@interface IESLiveMessageTrayStore : NSObject <HTSLiveMessageSubscriber, IESVSMessageSubscriber, IESLiveDataSyncDelegate, IESLiveMessageInteractionAssetUpdateAction, HTSLiveStreamPlayerAction, IESLiveEffectTrayComboDelegate> {
    BOOL _disableMatchHotMsg;
    BOOL _matchHotSetting;
    BOOL _enableCommonTray;
    BOOL _disableAnimation;
    BOOL _subscribeEmojiHotChatMessageEnable;
    BOOL _degradeForHotChat;
    id<IESLiveRoomServiceAdapter> _room;
    HTSEventContext *_trackContext;
    IESLiveMessageTrayConfrontModel *_confrontModel;
    IESLiveMessageTrayAggregationModel *_aggregationModel;
    double _confrontDisappearTime;
    NSMutableArray *_aggregationIcons;
    NSMutableArray *_confrontIcons;
    NSNumber *_confrontRetryDownloadTimes;
    NSMutableDictionary *_lastDisplayComboModels;
    id<IESLivePerfSamplerAdapter> _perfSampler;
    NSMutableArray *_subscriberList;
}

@property (retain, nonatomic) id<IESLiveRoomServiceAdapter> room;
@property (retain, nonatomic) HTSEventContext *trackContext;
@property (retain, nonatomic) IESLiveMessageTrayConfrontModel *confrontModel;
@property (retain, nonatomic) IESLiveMessageTrayAggregationModel *aggregationModel;
@property (nonatomic) double confrontDisappearTime;
@property (retain, nonatomic) NSMutableArray *aggregationIcons;
@property (retain, nonatomic) NSMutableArray *confrontIcons;
@property (nonatomic) BOOL disableMatchHotMsg;
@property (nonatomic) BOOL matchHotSetting;
@property (retain, nonatomic) NSNumber *confrontRetryDownloadTimes;
@property (nonatomic) BOOL enableCommonTray;
@property (retain, nonatomic) NSMutableDictionary *lastDisplayComboModels;
@property (nonatomic) BOOL disableAnimation;
@property (weak, nonatomic) id<IESLivePerfSamplerAdapter> perfSampler;
@property (retain, nonatomic) NSMutableArray *subscriberList;
@property (nonatomic) BOOL subscribeEmojiHotChatMessageEnable;
@property (nonatomic) BOOL degradeForHotChat;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)trackContext;
- (void)setTrackContext:(id)arg0;
- (void)didSetAttachingDIContext;
- (void)componentUnmount;
- (void)addTrayWithBusinessConfigure:(id)arg0;
- (id)perfSampler;
- (void)setPerfSampler:(id)arg0;
- (void)disappearMatchHotTray:(id)arg0;
- (id)initWithRoom:(id)arg0 trackContext:(id)arg1;
- (void)subscribedSyncDataWithValue:(id)arg0 version:(long long)arg1;
- (void)subscribedSyncDataUpdatedWithValue:(id)arg0 oldVersion:(long long)arg1 newVersion:(long long)arg2;
- (void)onCameraWillChangeTo:(id)arg0 source:(long long)arg1;
- (BOOL)precheck;
- (void)matchHotUpdate:(id)arg0;
- (void)handleSyncData:(id)arg0;
- (void)messageReceived:(id)arg0 source:(id)arg1;
- (void)p_loadImageForCombineText:(id)arg0 completion:(id /* block */)arg1;
- (void)p_loadImageForURLListArray:(id)arg0 completion:(id /* block */)arg1;
- (void)p_loadImageForText:(id)arg0 completion:(id /* block */)arg1;
- (void)comboModelUpdate:(id)arg0 scene:(id)arg1;
- (id)confrontIcons;
- (void)setConfrontIcons:(id)arg0;
- (void)p_setupObservers;
- (void)p_subscribeJSBEvent;
- (void)setDegradeForHotChat:(BOOL)arg0;
- (BOOL)degradeForHotChat;
- (void)perfDegradeStopAnimation:(unsigned long long)arg0;
- (BOOL)subscribeEmojiHotChatMessageEnable;
- (id)aggregationIcons;
- (id)aggregationModel;
- (void)setAggregationModel:(id)arg0;
- (BOOL)disableMatchHotMsg;
- (void)checkMatchHotChatMessageResource:(id)arg0 completion:(id /* block */)arg1;
- (id)confrontModel;
- (long long)transformPriorityStrategyFromServerToLocalWithStrategy:(int)arg0;
- (id)lastDisplayComboModels;
- (id)getAttributedStringWithCombinedText:(id)arg0 withConfig:(id)arg1 overlapSpace:(double)arg2 attrFontSize:(double)arg3;
- (void)handleHotChatMesssageWithConfig:(id)arg0;
- (BOOL)matchHotSetting;
- (BOOL)checkVSRoomCanShowHotMessage;
- (void)handleAggregateMessageWithConfig:(id)arg0;
- (void)handleConfrontMessage:(id)arg0;
- (BOOL)enableCommonTray;
- (void)handleCommonTrayMessageWithConfig:(id)arg0;
- (void)clearConfrontModel;
- (void)setAggregationIcons:(id)arg0;
- (id)confrontRetryDownloadTimes;
- (void)loadImageURLs:(id)arg0 withTimes:(unsigned long long)arg1 completion:(id /* block */)arg2;
- (void)loadImageURLs:(id)arg0 completion:(id /* block */)arg1;
- (void)removeMatchHotTrays;
- (void)handleLikeEggMessageWithConfig:(id)arg0;
- (void)handleFastChatData:(id)arg0;
- (void)setDisableMatchHotMsg:(BOOL)arg0;
- (double)confrontDisappearTime;
- (void)setConfrontModel:(id)arg0;
- (void)handleConfrontMessageWithConfig:(id)arg0;
- (void)setConfrontDisappearTime:(double)arg0;
- (id)stackImageItem:(id)arg0 overlapSpace:(double)arg1;
- (void)setMatchHotSetting:(BOOL)arg0;
- (void)setConfrontRetryDownloadTimes:(id)arg0;
- (void)setEnableCommonTray:(BOOL)arg0;
- (void)setLastDisplayComboModels:(id)arg0;
- (void)setSubscribeEmojiHotChatMessageEnable:(BOOL)arg0;
- (void).cxx_destruct;
- (void)dealloc;
- (BOOL)disableAnimation;
- (id)room;
- (void)setRoom:(id)arg0;
- (void)messageReceived:(id)arg0;
- (void)setDisableAnimation:(BOOL)arg0;
- (id)subscriberList;
- (void)setSubscriberList:(id)arg0;

@end
