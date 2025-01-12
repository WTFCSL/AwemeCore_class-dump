//
//     Generated by private class-dump
//

@protocol ACCFilterProtocol <ACCCameraWrapper>

- (void)acc_removeAllFilter;
- (void)acc_removeFilterEffect:(id)arg0;
- (float)acc_filterEffectOriginIndensity:(id)arg0;
- (void)acc_applyFilterEffect:(id)arg0;
- (void)acc_applyFilterEffect:(id)arg0 intensity:(float)arg1;
- (BOOL)switchColorLeftFilter:(id)arg0 rightFilter:(id)arg1 inPosition:(float)arg2 inLeftIntensity:(float)arg3 inRightIntensity:(float)arg4;
- (void)addSubscriber:(id)arg0;
- (void)removeSubscriber:(id)arg0;

@end
