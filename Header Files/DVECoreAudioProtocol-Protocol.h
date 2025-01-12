//
//     Generated by private class-dump
//

@protocol DVECoreAudioProtocol <DVECoreProtocol>

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

@end
