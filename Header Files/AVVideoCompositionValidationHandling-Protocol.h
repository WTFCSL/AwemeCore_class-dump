//
//     Generated by private class-dump
//

@protocol AVVideoCompositionValidationHandling <NSObject>

@optional

- (BOOL)videoComposition:(id)arg0 shouldContinueValidatingAfterFindingInvalidValueForKey:(id)arg1;
- (BOOL)videoComposition:(id)arg0 shouldContinueValidatingAfterFindingEmptyTimeRange:(struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })arg1;
- (BOOL)videoComposition:(id)arg0 shouldContinueValidatingAfterFindingInvalidTimeRangeInInstruction:(id)arg1;
- (BOOL)videoComposition:(id)arg0 shouldContinueValidatingAfterFindingInvalidTrackIDInInstruction:(id)arg1 layerInstruction:(id)arg2 asset:(id)arg3;

@end
