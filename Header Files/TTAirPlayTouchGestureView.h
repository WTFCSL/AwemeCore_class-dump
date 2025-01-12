//
//     Generated by private class-dump
//

@class NSMutableDictionary;

@interface TTAirPlayTouchGestureView : UIView {
    NSMutableDictionary *_pointerDict;
}

@property (retain, nonatomic) NSMutableDictionary *pointerDict;

- (id)pointerDict;
- (void)sendMotionEventsWithTouch:(id)arg0 event:(id)arg1 state:(unsigned long long)arg2;
- (void)sendEventList:(id)arg0 withAction:(unsigned long long)arg1 state:(unsigned long long)arg2;
- (id)pointerIdArray;
- (void)setPointerDict:(id)arg0;
- (id)init;
- (void).cxx_destruct;
- (void)touchesBegan:(id)arg0 withEvent:(id)arg1;
- (void)touchesEnded:(id)arg0 withEvent:(id)arg1;
- (void)touchesMoved:(id)arg0 withEvent:(id)arg1;
- (void)touchesCancelled:(id)arg0 withEvent:(id)arg1;

@end
