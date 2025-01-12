//
//     Generated by private class-dump
//

@protocol DVENLEInterfaceProtocol, DVECoreActionServiceProtocol;

@interface ACCAdvanceEditCanvasEditor : DVECanvasEditor {
    float _prevDoneRotation;
    id<DVECoreActionServiceProtocol> _actionService;
    id<DVENLEInterfaceProtocol> _nle;
}

@property (weak, nonatomic) id<DVECoreActionServiceProtocol> actionService;
@property (weak, nonatomic) id<DVENLEInterfaceProtocol> nle;
@property (nonatomic) float prevDoneRotation;

- (id)actionService;
- (void)setActionService:(id)arg0;
- (void)updateVideoClipTranslation:(struct CGPoint { double x0; double x1; })arg0 forSlot:(id)arg1 isCommit:(BOOL)arg2;
- (void)updateVideoClipScale:(double)arg0 forSlot:(id)arg1 isCommit:(BOOL)arg2;
- (void)updateVideoClipRotation:(double)arg0 forSlot:(id)arg1 isCommit:(BOOL)arg2;
- (id)nle;
- (void)setNle:(id)arg0;
- (float)prevDoneRotation;
- (void)setPrevDoneRotation:(float)arg0;
- (id)initWithContext:(id)arg0;
- (id)init;
- (void).cxx_destruct;

@end
