//
//     Generated by private class-dump
//

@class NSString, AWEPostPageContext, IESContainer, AWEEditServiceFlowHandle, ACCRepositoryWorkspace;
@protocol ACCEditServiceProtocol, ACCSequenceEditServiceProtocol;

@interface AWEPostPagePlayerHandler : NSObject <AWEPostPagePlayerService> {
    BOOL _combinedDidDoneSignal;
    BOOL _playerDidLoadSignal;
    BOOL _isViewDidAppear;
    id /* block */ _resetPlayerViewsBlk;
    ACCRepositoryWorkspace *_combinedWorkspace;
    id<ACCEditServiceProtocol> _combinedEditService;
    id<ACCEditServiceProtocol> _editService;
    id<ACCSequenceEditServiceProtocol> _sequenceEditService;
    IESContainer *_serviceContainer;
    AWEPostPageContext *_context;
    id /* block */ _captureCompletionForMixedSlides;
}

@property (weak, nonatomic) IESContainer *serviceContainer;
@property (retain, nonatomic) AWEPostPageContext *context;
@property (readonly, weak, nonatomic) AWEEditServiceFlowHandle *editServiceHandle;
@property (nonatomic) BOOL playerDidLoadSignal;
@property (nonatomic) BOOL combinedDidDoneSignal;
@property (retain, nonatomic) ACCRepositoryWorkspace *combinedWorkspace;
@property (retain, nonatomic) id<ACCEditServiceProtocol> combinedEditService;
@property (nonatomic) BOOL isViewDidAppear;
@property (copy, nonatomic) id /* block */ captureCompletionForMixedSlides;
@property (retain, nonatomic) id<ACCEditServiceProtocol> editService;
@property (retain, nonatomic) id<ACCSequenceEditServiceProtocol> sequenceEditService;
@property (copy, nonatomic) id /* block */ resetPlayerViewsBlk;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)removeInfoSticker:(long long)arg0;
- (BOOL)isViewDidAppear;
- (void)setServiceContainer:(id)arg0;
- (void)configPlayer;
- (void)setIsViewDidAppear:(BOOL)arg0;
- (void)stopPlayer;
- (id)editService;
- (void)setEditService:(id)arg0;
- (void)bindServices:(id)arg0;
- (id)flowService;
- (struct CGSize { double x0; double x1; })coverSize;
- (id)sequenceEditService;
- (void)setSequenceEditService:(id)arg0;
- (void)resetPlayerAndPreviewEdge;
- (double)captureFrameIndex;
- (void)captureFrameAtIndex:(double)arg0 processed:(BOOL)arg1 preferredSize:(struct CGSize { double x0; double x1; })arg2 compeletion:(id /* block */)arg3;
- (void)restoreBackupCanvas:(id /* block */)arg0;
- (void)recoverPlayerEdgeIfNeed;
- (void)activeCurrentNLEWithCompletion:(id /* block */)arg0;
- (BOOL)playerDidLoadSignal;
- (BOOL)combinedDidDoneSignal;
- (id /* block */)resetPlayerViewsBlk;
- (void)setResetPlayerViewsBlk:(id /* block */)arg0;
- (id)combinedWorkspace;
- (id)combinedEditService;
- (id)editServiceHandle;
- (void)setCombinedEditService:(id)arg0;
- (void)prepareCombinedDataIfNeeded;
- (void)setCaptureCompletionForMixedSlides:(id /* block */)arg0;
- (void)setPlayerDidLoadSignal:(BOOL)arg0;
- (void)trackCombinedEventWithDuration:(double)arg0;
- (void)setCombinedWorkspace:(id)arg0;
- (void)setCombinedDidDoneSignal:(BOOL)arg0;
- (id /* block */)captureCompletionForMixedSlides;
- (void)setPlayMusicRange;
- (void).cxx_destruct;
- (id)serviceContainer;
- (void)setContext:(id)arg0;
- (id)context;
- (void)viewDidAppear;
- (void)viewDidLoad;
- (void)resetPlayer;
- (void)updatePlayer;

@end
