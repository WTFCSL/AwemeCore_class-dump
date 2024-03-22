//
//     Generated by private class-dump
//

@class NSString;
@protocol DVENLEInterfaceProtocol, DVEEditingContextProtocol, DVECoreDraftServiceProtocol, DVECoreActionServiceProtocol, IESServiceProvider;

@interface DVEAudioEditor : NSObject <DVECoreAudioProtocol> {
    id<IESServiceProvider> _serviceProvider;
    id<DVECoreDraftServiceProtocol> _draftService;
    id<DVECoreActionServiceProtocol> _actionService;
    id<DVENLEInterfaceProtocol> _nle;
    id<DVEEditingContextProtocol> _mediaContext;
}

@property (weak, nonatomic) id<DVECoreDraftServiceProtocol> draftService;
@property (weak, nonatomic) id<DVECoreActionServiceProtocol> actionService;
@property (weak, nonatomic) id<DVENLEInterfaceProtocol> nle;
@property (weak, nonatomic) id<DVEEditingContextProtocol> mediaContext;
@property (weak, nonatomic) id<IESServiceProvider> serviceProvider;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)actionService;
- (id)addAudioResource:(id)arg0 audioName:(id)arg1 audioId:(id)arg2 clipedStart:(struct { long long x0; int x1; unsigned int x2; long long x3; })arg3 clipedDuration:(struct { long long x0; int x1; unsigned int x2; long long x3; })arg4;
- (void)removeAudioSegment:(id)arg0 autoCommit:(BOOL)arg1 completion:(id /* block */)arg2;
- (void)audioSplitForSlot:(id)arg0 autoCommit:(BOOL)arg1 completion:(id /* block */)arg2;
- (void)audioSplitForSlot:(id)arg0 newSlotName:(id)arg1 autoCommit:(BOOL)arg2 completion:(id /* block */)arg3;
- (void)changeAudioSpeed:(double)arg0 slot:(id)arg1 shouldKeepTone:(BOOL)arg2;
- (void)trimAudio:(id)arg0 targetStartTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })arg1 autoCommit:(BOOL)arg2;
- (void)trimAudio:(id)arg0 targetEndTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })arg1 autoCommit:(BOOL)arg2;
- (void)moveAudioSlot:(id)arg0 insertSection:(long long)arg1 targetTimeRange:(struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })arg2 isNewInsert:(BOOL)arg3 autoCommit:(BOOL)arg4;
- (void)trimAudioAfterMainDurationChanged;
- (void)replenishBgmAfterAddVideo:(id)arg0;
- (id)mediaContext;
- (void)setMediaContext:(id)arg0;
- (void)setActionService:(id)arg0;
- (id)nle;
- (void)setNle:(id)arg0;
- (void)p_adjustFadeInOutWithSlot:(id)arg0;
- (void)p_splitAudioSlot:(id)arg0 newSlotName:(id)arg1 splitTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })arg2 commit:(BOOL)arg3 completion:(id /* block */)arg4;
- (void)p_splitAudioSlot:(id)arg0 splitTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })arg1 commit:(BOOL)arg2 completion:(id /* block */)arg3;
- (void)removeAudioSegmentSpecial:(id)arg0;
- (id)draftService;
- (void)setDraftService:(id)arg0;
- (id)initWithContext:(id)arg0;
- (void).cxx_destruct;
- (void)setServiceProvider:(id)arg0;
- (id)serviceProvider;

@end
