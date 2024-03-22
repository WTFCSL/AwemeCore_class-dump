//
//     Generated by private class-dump
//

@class AWEAudioClipFeatureManager, ACCRecordCutMusicViewModel;
@protocol ACCEditMusicServiceProtocol, ACCRecorderViewContainer, ACCRecordConfigService;

@interface ACCRecordCutMusicComponent : ACCFeatureComponent {
    id<ACCRecorderViewContainer> _viewContainer;
    AWEAudioClipFeatureManager *_clipManager;
    id<ACCEditMusicServiceProtocol> _recordMusicService;
    ACCRecordCutMusicViewModel *_viewModel;
    id<ACCRecordConfigService> _recordConfigService;
}

@property (retain, nonatomic) id<ACCRecorderViewContainer> viewContainer;
@property (retain, nonatomic) AWEAudioClipFeatureManager *clipManager;
@property (weak, nonatomic) id<ACCEditMusicServiceProtocol> recordMusicService;
@property (retain, nonatomic) ACCRecordCutMusicViewModel *viewModel;
@property (retain, nonatomic) id<ACCRecordConfigService> recordConfigService;

- (void)bindViewModel;
- (void)componentDidMount;
- (id)serviceBinding;
- (void)bindServices:(id)arg0;
- (void)setRecordConfigService:(id)arg0;
- (id)recordMusicService;
- (void)setRecordMusicService:(id)arg0;
- (id)recordConfigService;
- (void)p_audioRangeDidChange:(struct _HTSAudioRange { double x0; double x1; })arg0 changeType:(long long)arg1;
- (void)p_showContainerViewIfNeeded;
- (void)showMusicClipView;
- (void).cxx_destruct;
- (void)setViewModel:(id)arg0;
- (id)viewModel;
- (id)clipManager;
- (void)setClipManager:(id)arg0;
- (id)viewContainer;
- (void)setViewContainer:(id)arg0;

@end