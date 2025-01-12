//
//     Generated by private class-dump
//

@protocol ACCRecordButtonServiceSubscriber <NSObject>

@optional

- (void)executePropPanelRecordBeganTask;
- (void)recordButtonView:(id)arg0 touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)recordButtonView:(id)arg0 touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)recordButtonView:(id)arg0 touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)recordButtonView:(id)arg0 touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)startRecordButtonEventWithType:(long long)arg0;
- (void)stopRecordButtonEvent;
- (void)startRecordFromCountdown;
- (void)startPictureFromVolumnButton;
- (void)startRecordFromVolumnButton;
- (void)stopRecordFromVolumnButton;
- (void)recordButtonServiceStateDidChange;
- (void)recordButtonServiceMixSubTypeDidChange;

@end
