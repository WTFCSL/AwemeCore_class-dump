//
//     Generated by private class-dump
//

@class NSString, NSMutableArray;

@interface IESLiveActivityMagicGestureFragment : IESLiveRoomComponent <IESLiveSEIListener> {
    NSMutableArray *_magicGestures;
}

@property (retain, nonatomic) NSMutableArray *magicGestures;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)p_addGesture;
- (void)componentBindService;
- (void)componentCreate;
- (void)componentMount;
- (id)magicGestures;
- (void)p_removeTimeoutMagicGesture:(id)arg0;
- (void)p_trackEventWithGestureModel:(id)arg0 eventName:(id)arg1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })p_activityMagicGestureAreaInPlayerWithCenterPoint:(struct CGPoint { double x0; double x1; })arg0 radius:(double)arg1;
- (BOOL)p_needResponseMagicGestureTap;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })p_pkVideoAreaFrame;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })p_multiLinkerVideoAreaFrame;
- (unsigned long long)supportSeiTypes;
- (void)onParseredWithSEIResult:(id)arg0;
- (void)setMagicGestures:(id)arg0;
- (void).cxx_destruct;
- (BOOL)shouldReceiveTouch:(id)arg0;
- (void)dealloc;

@end
