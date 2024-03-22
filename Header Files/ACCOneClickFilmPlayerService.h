//
//     Generated by private class-dump
//

@class NSString, ACCOneClickFilmControlView, AWEVideoPublishViewModel, UIView;
@protocol ACCEditorOneClickFilmingApplyDiffService, ACCSequenceEditServiceProtocol, IESServiceProvider, ACCSequencePlayControlServiceProtocol, ACCEditorOneClickFilmingViewModelProtocol;

@interface ACCOneClickFilmPlayerService : NSObject <LVPlayerDelegate, ACCEditPreviewMessageProtocol, ACCSequenceEditServicePlayerSubscriber, ACCOneClickFilmPlayerService> {
    BOOL _pauseByGesture;
    BOOL _hasEnteredBackground;
    UIView *_previewContainer;
    id<IESServiceProvider> _serviceProvider;
    AWEVideoPublishViewModel *_repository;
    ACCOneClickFilmControlView *_controlView;
    id<ACCSequenceEditServiceProtocol> _sequenceEditService;
    id<ACCEditorOneClickFilmingApplyDiffService> _oneClickFilmingApplyDiffService;
    id<ACCSequencePlayControlServiceProtocol> _sequencePlayControl;
    id<ACCEditorOneClickFilmingViewModelProtocol> _oneClickViewModel;
}

@property (weak, nonatomic) id<IESServiceProvider> serviceProvider;
@property (weak, nonatomic) AWEVideoPublishViewModel *repository;
@property (retain, nonatomic) ACCOneClickFilmControlView *controlView;
@property (weak, nonatomic) id<ACCSequenceEditServiceProtocol> sequenceEditService;
@property (weak, nonatomic) id<ACCEditorOneClickFilmingApplyDiffService> oneClickFilmingApplyDiffService;
@property (nonatomic) BOOL pauseByGesture;
@property (nonatomic) BOOL hasEnteredBackground;
@property (weak, nonatomic) id<ACCSequencePlayControlServiceProtocol> sequencePlayControl;
@property (weak, nonatomic) id<ACCEditorOneClickFilmingViewModelProtocol> oneClickViewModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) UIView *previewContainer;

- (void)setPreviewContainer:(id)arg0;
- (void)playStatusChanged:(long long)arg0;
- (void)playerDidPlay;
- (id)sequenceEditService;
- (void)setSequenceEditService:(id)arg0;
- (id)sequencePlayControl;
- (void)setSequencePlayControl:(id)arg0;
- (id)preView;
- (id)initWithServiceProvider:(id)arg0 repository:(id)arg1;
- (void)playIfPauseByEnterBackground;
- (BOOL)pauseByGesture;
- (void)setPauseByGesture:(BOOL)arg0;
- (void)playerDidPause;
- (BOOL)hasEnteredBackground;
- (void)setHasEnteredBackground:(BOOL)arg0;
- (void)pauseByGestureAction;
- (id)oneClickViewModel;
- (id)oneClickFilmingApplyDiffService;
- (void)setOneClickViewModel:(id)arg0;
- (void)setOneClickFilmingApplyDiffService:(id)arg0;
- (void)setupOneClickPreviewEditPlayer;
- (BOOL)isMultiToOneTemplate;
- (void)updatePreviewWithWorkspaceStatus:(BOOL)arg0;
- (void)updatePreviewPlayStatusWithWorkspaceStatus:(BOOL)arg0;
- (void).cxx_destruct;
- (void)setServiceProvider:(id)arg0;
- (id)previewContainer;
- (void)setRepository:(id)arg0;
- (id)serviceProvider;
- (id)repository;
- (id)controlView;
- (BOOL)isPlaying;
- (void)play;
- (void)pause;
- (void)setControlView:(id)arg0;
- (void)resetPlayer;

@end
