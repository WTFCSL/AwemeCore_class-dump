//
//     Generated by private class-dump
//

@class AWEVideoPublishViewModel;

@interface ACCVoiceChangerTracker : NSObject {
    AWEVideoPublishViewModel *_repoContainer;
}

@property (weak, nonatomic) AWEVideoPublishViewModel *repoContainer;

- (id)repoContainer;
- (void)setRepoContainer:(id)arg0;
- (id)initWithRepoContainer:(id)arg0;
- (id)commonParamsWithExtra:(id)arg0;
- (void)appendTextReaderEffectInfo:(id)arg0 effect:(id)arg1;
- (void)logPanelShowExtraParams:(id)arg0;
- (void)logApplyEffect:(id)arg0 extraParams:(id)arg1;
- (void)logCollectEffect:(id)arg0 extraParams:(id)arg1;
- (void)logCancelCollectEffect:(id)arg0 extraParams:(id)arg1;
- (void).cxx_destruct;

@end