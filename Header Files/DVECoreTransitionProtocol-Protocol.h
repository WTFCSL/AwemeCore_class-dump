//
//     Generated by private class-dump
//

@protocol DVECoreTransitionProtocol <DVECoreProtocol>

- (id)addTransitionWithEffectResource:(id)arg0 resourceId:(id)arg1 resourceName:(id)arg2 duration:(double)arg3 isOverlap:(BOOL)arg4 forSlot:(id)arg5;
- (struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })transitionTimeForSlot:(id)arg0 duration:(double)arg1;
- (void)playTransitionForSlot:(id)arg0 duration:(double)arg1 completeBlock:(id /* block */)arg2;
- (void)deleteCurrentTransitionForSlot:(id)arg0 commit:(BOOL)arg1 completion:(id /* block */)arg2;
- (double)getMaxTranstisionTimeBySlot:(id)arg0;

@end