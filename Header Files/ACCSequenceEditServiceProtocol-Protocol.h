//
//     Generated by private class-dump
//

@class NSString, NSArray, ACCSequenceEditBGM, UIView, NLEMediaSession_OC;
@protocol ACCSequenceMediaContainerViewProtocol;

@protocol ACCSequenceEditServiceProtocol <NSObject>

@property (readonly, nonatomic) BOOL previewMode;
@property (copy, nonatomic) id /* block */ prepareBlk;
@property (readonly, nonatomic) long long index;
@property (readonly, copy, nonatomic) NSString *UUID;
@property (readonly, nonatomic) unsigned long long transferStatus;
@property (readonly, nonatomic) NSArray *editServices;
@property (readonly, nonatomic) UIView<ACCSequenceMediaContainerViewProtocol> *mediaContainerView;
@property (readonly, nonatomic) NLEMediaSession_OC *mediaSession;
@property (nonatomic) BOOL disableSwitchNextWithAnimation;
@property (readonly, nonatomic) ACCSequenceEditBGM *sequenceBGM;

- (void)activeAtIndex:(long long)arg0 completion:(id /* block */)arg1;
- (void)unactiveAll;
- (void)tryDeactive;
- (id)mediaContainerView;
- (void)buildEditSession;
- (id)playControl;
- (void)switchNext;
- (void)switchProjectWithIndex:(long long)arg0 autoTransfer:(BOOL)arg1;
- (void)transferToPreferredInitialIndex:(long long)arg0;
- (void)bindEditServicesWithWorkspace:(id)arg0;
- (void)movePieceFromIndex:(long long)arg0 toIndex:(long long)arg1;
- (void)addViewProvider:(id)arg0;
- (void)removePieceAtIndexs:(id)arg0;
- (void)replaceAllWithProjects:(id)arg0;
- (id)addAudioPlayerTimeObserver:(id /* block */)arg0;
- (void)removeAudioPlayerTimeObserver:(id)arg0;
- (id)allEditService;
- (void)didStopDragScrollAtIndex:(long long)arg0;
- (id)sequencePreview;
- (void)preActiveIndex:(long long)arg0 completion:(id /* block */)arg1;
- (void)deActiveIndex:(long long)arg0;
- (void)deActiveForcedIndex:(long long)arg0;
- (void)captureAll;
- (void)updateContextAtIndex:(long long)arg0;
- (void)captureCurrentOnCompletion:(id /* block */)arg0;
- (void)capturePreviewImageAtIndex:(long long)arg0 completion:(id /* block */)arg1;
- (void)didLoadVideoSourceAtIndex:(long long)arg0;
- (void)prefetchActiveAtIndex:(long long)arg0;
- (void)keepActive:(id)arg0;
- (void)unkeepActive:(id)arg0;
- (void)captureProcessedImageAtIndex:(long long)arg0 preferredSize:(struct CGSize { double x0; double x1; })arg1 completion:(id /* block */)arg2;
- (void)updateBGM;
- (void)changeBGMToWorkspace;
- (void)changeBGMToProject;
- (void)configPreviewMode:(BOOL)arg0 forEditPage:(BOOL)arg1;
- (BOOL)shouldForceCloseTransferAnimation;
- (void)playModeDidChanged:(BOOL)arg0;
- (id /* block */)prepareBlk;
- (void)setPrepareBlk:(id /* block */)arg0;
- (id)editServices;
- (BOOL)disableSwitchNextWithAnimation;
- (void)setDisableSwitchNextWithAnimation:(BOOL)arg0;
- (id)sequenceBGM;
- (id)UUID;
- (long long)index;
- (void)addSubscriber:(id)arg0;
- (void)removeSubscriber:(id)arg0;
- (unsigned long long)transferStatus;
- (BOOL)previewMode;
- (id)mediaSession;

@end
