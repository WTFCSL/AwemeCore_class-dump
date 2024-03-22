//
//     Generated by private class-dump
//

@class NSMutableSet, UIPanGestureRecognizer;

@protocol ACCRecordGestureService <ACCGestureService>

@property (retain, nonatomic) NSMutableSet *gesturesSet;
@property (nonatomic) long long sdkGesturesAction;
@property (retain, nonatomic) UIPanGestureRecognizer *dropDownPanGestureRecognizer;

- (id)gesturesNeedAdded;
- (void)disableAllGestures;
- (void)enableAllGestures;
- (void)gesturesOnReceivedTouch:(id)arg0;
- (void)gestureDidRecognized:(id)arg0;
- (void)gestureSwipDirectionUpDidRecognized:(id)arg0;
- (id)gesturesSet;
- (void)setGesturesSet:(id)arg0;
- (long long)sdkGesturesAction;
- (void)setSdkGesturesAction:(long long)arg0;
- (id)dropDownPanGestureRecognizer;
- (void)setDropDownPanGestureRecognizer:(id)arg0;
- (void)addSubscriber:(id)arg0;

@end