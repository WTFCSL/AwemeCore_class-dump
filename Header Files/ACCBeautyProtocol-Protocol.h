//
//     Generated by private class-dump
//

@protocol ACCBeautyProtocol <ACCCameraWrapper>

@property (nonatomic) BOOL forceApply;

- (BOOL)updateComposerNode:(id)arg0 key:(id)arg1 value:(double)arg2;
- (void)appendComposerNodesWithTags:(id)arg0;
- (void)removeComposerNodesWithTags:(id)arg0;
- (BOOL)replaceComposerNodesWithNewTag:(id)arg0 old:(id)arg1;
- (BOOL)forceApply;
- (void)setForceApply:(BOOL)arg0;
- (void)addSubscriber:(id)arg0;
- (void)removeSubscriber:(id)arg0;

@end