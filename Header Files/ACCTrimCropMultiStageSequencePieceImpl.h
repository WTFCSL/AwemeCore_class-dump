//
//     Generated by private class-dump
//

@class NLEInterface_OC, ACCTrimCropMultiStageMediaPlayer, NSString, ACCCameraSubscription, AWEVideoPublishViewModel, ACCSequenceSwitchProxy, NSDictionary, NSArray;
@protocol ACCTrimCropMediaPlayerProtocol, ACCSequenceEditServiceProtocol, ACCTrimEditAudioServiceProtocol;

@interface ACCTrimCropMultiStageSequencePieceImpl : NSObject <ACCEditPreviewMessageProtocol, ACCTrimCropSequencePieceServiceProtocol> {
    BOOL _isLockActive;
    ACCSequenceSwitchProxy *_pieceProxy;
    id<ACCTrimEditAudioServiceProtocol> _audioService;
    id<ACCSequenceEditServiceProtocol> _sequenceEditService;
    AWEVideoPublishViewModel *_publishViewModel;
    NLEInterface_OC *_cropEditorNLE;
    ACCTrimCropMultiStageMediaPlayer *_player;
    ACCCameraSubscription *_subscription;
    double _currentPlayerTime;
    NSDictionary *_slotUUIDToIdexDic;
    id /* block */ _copyPieceHandler;
    id /* block */ _copyPieceCompletion;
    id /* block */ _commitRenderCompletion;
}

@property (weak, nonatomic) id<ACCSequenceEditServiceProtocol> sequenceEditService;
@property (weak, nonatomic) AWEVideoPublishViewModel *publishViewModel;
@property (retain, nonatomic) NLEInterface_OC *cropEditorNLE;
@property (retain, nonatomic) ACCTrimCropMultiStageMediaPlayer *player;
@property (retain, nonatomic) ACCCameraSubscription *subscription;
@property (nonatomic) double currentPlayerTime;
@property (retain, nonatomic) NSDictionary *slotUUIDToIdexDic;
@property (nonatomic) BOOL isLockActive;
@property (copy, nonatomic) id /* block */ copyPieceHandler;
@property (copy, nonatomic) id /* block */ copyPieceCompletion;
@property (copy, nonatomic) id /* block */ commitRenderCompletion;
@property (retain, nonatomic) ACCSequenceSwitchProxy *pieceProxy;
@property (weak, nonatomic) id<ACCTrimEditAudioServiceProtocol> audioService;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) long long index;
@property (readonly, copy, nonatomic) NSString *uuid;
@property (readonly, copy, nonatomic) NSArray *pieceArray;
@property (readonly, nonatomic) id<ACCTrimCropMediaPlayerProtocol> mediaPlayer;
@property (readonly, nonatomic) BOOL isPieceDeletable;
@property (readonly, nonatomic) BOOL isTimeLabelShown;
@property (readonly, nonatomic) BOOL isAllowTrim;

- (id)publishViewModel;
- (double)currentPlayerTime;
- (void)setCurrentPlayerTime:(double)arg0;
- (void)setIsLockActive:(BOOL)arg0;
- (BOOL)isLockActive;
- (void)setPublishViewModel:(id)arg0;
- (id)sequenceEditService;
- (void)setSequenceEditService:(id)arg0;
- (void)switchNext;
- (void)removePieceAtIndexs:(id)arg0;
- (void)playerCurrentPlayTimeChanged:(double)arg0;
- (id)pieceArray;
- (BOOL)isTimeLabelShown;
- (void)buildSequencePieceService;
- (void)copySequencePieces:(id /* block */)arg0 copyPieceCompletion:(id /* block */)arg1 commitRenderCompletion:(id /* block */)arg2;
- (void)syncSequencePieceCopies:(id /* block */)arg0 completion:(id /* block */)arg1;
- (void)resetCurrentPieceWithCopyHandler:(id /* block */)arg0 completion:(id /* block */)arg1;
- (void)makeSequencePiecesCopyDone;
- (void)switchPrevious;
- (void)switchPieceToIndex:(unsigned long long)arg0 animated:(BOOL)arg1;
- (void)movePieceAtIndex:(unsigned long long)arg0 toIndex:(unsigned long long)arg1;
- (void)addPieceWithAssets:(id)arg0 atIndex:(unsigned long long)arg1;
- (void)lockSegmentSeekWithId:(id)arg0;
- (void)unlockSegmentSeek;
- (void)clearPieceCache;
- (BOOL)isPieceDeletable;
- (BOOL)isAllowTrim;
- (id)audioService;
- (void)setAudioService:(id)arg0;
- (id)initWithEditService:(id)arg0 viewModel:(id)arg1;
- (void)setPieceProxy:(id)arg0;
- (id)pieceProxy;
- (id)pieceWithNLE:(id)arg0 slot:(id)arg1 uuid:(id)arg2 idx:(unsigned long long)arg3;
- (void)setCopyPieceHandler:(id /* block */)arg0;
- (void)setCopyPieceCompletion:(id /* block */)arg0;
- (void)setCommitRenderCompletion:(id /* block */)arg0;
- (void)copyPiece:(id)arg0 copyDone:(BOOL)arg1;
- (void)makePieceCopyDoneWithPiece:(id)arg0;
- (void)switchPieceToIndex:(unsigned long long)arg0 animated:(BOOL)arg1 isAutoTransfer:(BOOL)arg2 force:(BOOL)arg3;
- (void)p_switchPieceToIndex:(unsigned long long)arg0 animated:(BOOL)arg1 isAutoTransfer:(BOOL)arg2 force:(BOOL)arg3;
- (void)updatePieceTrimCropEditorIdx;
- (void)trackEventMoveDuration:(double)arg0;
- (long long)indexForSlot:(id)arg0;
- (id /* block */)copyPieceHandler;
- (id /* block */)copyPieceCompletion;
- (id /* block */)commitRenderCompletion;
- (void)setSlotUUIDToIdexDic:(id)arg0;
- (id)cropEditorNLE;
- (id)slotUUIDToIdexDic;
- (void)seekToCurrentPlayerTime;
- (BOOL)time:(double)arg0 isEqualTo:(double)arg1;
- (void)setCropEditorNLE:(id)arg0;
- (void).cxx_destruct;
- (void)setPlayer:(id)arg0;
- (long long)index;
- (void)setSubscription:(id)arg0;
- (id)uuid;
- (void)addSubscriber:(id)arg0;
- (id)player;
- (id)subscription;
- (void)removeSubscriber:(id)arg0;
- (id)mediaPlayer;
- (struct { long long x0; int x1; unsigned int x2; long long x3; })timePerFrame;

@end
