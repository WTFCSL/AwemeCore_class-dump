//
//     Generated by private class-dump
//

@class AWEBinding;

@protocol AWENaviDuetRenderServiceProtocol <TTKNaviRenderServiceProtocol>

@property (readonly, nonatomic) AWEBinding *otherNavisResetSignal;
@property (readonly, nonatomic) AWEBinding *needsRevoceryMusicSignal;
@property (readonly, nonatomic) AWEBinding *selfFeaturesResetSignal;

- (void)sendNeedsRevoceryMusicSignal;
- (void)markActionPoseMessageSend;
- (void)resetSelfFeatures:(id)arg0;
- (void)resetOtherUserNavis:(id)arg0;
- (id)otherNavisResetSignal;
- (id)needsRevoceryMusicSignal;
- (id)selfFeaturesResetSignal;

@end