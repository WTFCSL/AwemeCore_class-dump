//
//     Generated by private class-dump
//

@interface IESECLiveAnchorStorageManager : NSObject

@property (nonatomic) BOOL hasShownExplainProductReplayGuide;

+ (id)shared;

- (void)setHasShownSettingSubHint:(BOOL)arg0 withName:(id)arg1 withUID:(id)arg2;
- (BOOL)hasShownSettingSubHintWithName:(id)arg0 withUID:(id)arg1;
- (id)getSettingGuideBubbleDataWithUID:(id)arg0;
- (void)setSettingsGuideBubbleDataWithUID:(id)arg0 bubbleDataDic:(id)arg1;
- (BOOL)hasShownExplainProductReplayGuide;
- (void)setHasShownExplainProductReplayGuide:(BOOL)arg0;
- (BOOL)askExplainGuideEverShowWithUID:(id)arg0;
- (void)setAskExplainGuideEverShow:(BOOL)arg0 withUID:(id)arg1;
- (BOOL)hasShownAnchorSettingGuideWithUID:(id)arg0;
- (void)setHasShownAnchorSettingGuide:(BOOL)arg0 withUID:(id)arg1;

@end
