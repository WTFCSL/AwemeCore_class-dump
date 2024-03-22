//
//     Generated by private class-dump
//

@class NLEInterface_OC, NSString, NSHashTable, NLETrackSlot_OC;

@interface ACCNLEEditTrimWrapper : NSObject <ACCEditBuildListener, ACCEditTrimProtocol> {
    BOOL _hasShadowSlot;
    unsigned long long _idx;
    NLEInterface_OC *_nle;
    NLETrackSlot_OC *_trimSlot;
    NSHashTable *_shadowTableSlots;
}

@property (weak, nonatomic) NLEInterface_OC *nle;
@property (weak, nonatomic) NLETrackSlot_OC *trimSlot;
@property (nonatomic) BOOL hasShadowSlot;
@property (retain, nonatomic) NSHashTable *shadowTableSlots;
@property (nonatomic) unsigned long long idx;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)nle;
- (void)setNle:(id)arg0;
- (void)setIdx:(unsigned long long)arg0;
- (void)setEditSessionProvider:(id)arg0;
- (id)associatedSlot;
- (void)trimSlotTimeRange:(struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })arg0 completion:(id /* block */)arg1;
- (void)trimSlotClipTimeRange:(struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })arg0 autoCommit:(BOOL)arg1 completion:(id /* block */)arg2;
- (id)shadowSlots;
- (void)updateNLE:(id)arg0 associatedSlot:(id)arg1;
- (void)bindShadowSlots:(id)arg0;
- (void)onEditSessionInit:(id)arg0;
- (void)onNLEEditorInit:(id)arg0;
- (void)setTrimSlot:(id)arg0;
- (void)setHasShadowSlot:(BOOL)arg0;
- (void)setShadowTableSlots:(id)arg0;
- (id)shadowTableSlots;
- (id)trimSlot;
- (BOOL)hasShadowSlot;
- (void)trackEventTrimDuration:(double)arg0;
- (void).cxx_destruct;
- (unsigned long long)idx;

@end