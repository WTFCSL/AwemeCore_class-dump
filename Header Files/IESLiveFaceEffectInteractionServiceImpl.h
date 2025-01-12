//
//     Generated by private class-dump
//

@class NSMutableDictionary, NSString, IESLiveGCDTimer, IESEffectModel, NSNumber, IESLiveFaceStickerApi;

@interface IESLiveFaceEffectInteractionServiceImpl : NSObject <IESLiveEffectMessageSubscriber, IESLiveFaceEffectInteractionService> {
    IESLiveFaceStickerApi *_api;
    double _queryInterval;
    IESLiveGCDTimer *_timer;
    IESEffectModel *_currentEffect;
    NSMutableDictionary *_interactionInfoCache;
    NSNumber *_roomID;
    NSNumber *_anchorID;
}

@property (retain, nonatomic) IESLiveFaceStickerApi *api;
@property (nonatomic) double queryInterval;
@property (retain, nonatomic) IESLiveGCDTimer *timer;
@property (retain, nonatomic) IESEffectModel *currentEffect;
@property (retain, nonatomic) NSMutableDictionary *interactionInfoCache;
@property (retain, nonatomic) NSNumber *roomID;
@property (retain, nonatomic) NSNumber *anchorID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)anchorID;
- (void)setAnchorID:(id)arg0;
- (void)didReceiveEffectMessage:(unsigned long long)arg0 arg1:(unsigned long long)arg1 arg2:(unsigned long long)arg2 data:(id)arg3;
- (void)startUsingInteractionEffect:(id)arg0 inGuidePage:(BOOL)arg1 isResume:(BOOL)arg2;
- (void)stopUsingInteractionEffect:(id)arg0 inGuidePage:(BOOL)arg1;
- (id)interactionInfoCache;
- (void)applyInteractionEffect:(BOOL)arg0;
- (void)setQueryInterval:(double)arg0;
- (void)startInteractionStatusQueryTimer;
- (void)stopInteractionStatusQueryTimer;
- (double)queryInterval;
- (void)setInteractionInfoCache:(id)arg0;
- (id)timer;
- (void)resetState;
- (id)init;
- (void).cxx_destruct;
- (id)currentEffect;
- (void)setTimer:(id)arg0;
- (void)setCurrentEffect:(id)arg0;
- (id)roomID;
- (void)setRoomID:(id)arg0;
- (id)api;
- (void)setApi:(id)arg0;

@end
