//
//     Generated by private class-dump
//

@class SonicView, NSString, BDPRuntimeInteractGame, BDPUniqueID;

@interface BDPInteractGameSubView : UIView <SonicViewPaintListener> {
    BOOL _isFirstFrame;
    NSString *_sonicId;
    SonicView *_sonicView;
    BDPUniqueID *_uniqueID;
    BDPRuntimeInteractGame *_runtime;
}

@property (retain, nonatomic) BDPUniqueID *uniqueID;
@property (weak, nonatomic) BDPRuntimeInteractGame *runtime;
@property (nonatomic) BOOL isFirstFrame;
@property (retain, nonatomic) NSString *sonicId;
@property (retain, nonatomic) SonicView *sonicView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setSonicView:(id)arg0;
- (id)sonicView;
- (void)onFrame;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0 runtime:(id)arg1 uniqueID:(id)arg2;
- (BOOL)isFirstFrame;
- (void)setIsFirstFrame:(BOOL)arg0;
- (id)sonicId;
- (void)setSonicId:(id)arg0;
- (void).cxx_destruct;
- (id)uniqueID;
- (void)setUniqueID:(id)arg0;
- (id)runtime;
- (void)setRuntime:(id)arg0;

@end
