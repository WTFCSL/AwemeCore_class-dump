//
//     Generated by private class-dump
//

@protocol ACCRecordFlowControlServiceSubscriber <NSObject>

@optional

- (void)flowControlServiceWillStartRecordFlow:(unsigned long long)arg0;
- (void)flowControlServiceDidStartRecordFlow:(unsigned long long)arg0 source:(id)arg1;
- (void)flowControlServiceWillStopRecordFlow:(unsigned long long)arg0;
- (void)flowControlServiceWillCompleteRecordFlow:(unsigned long long)arg0;
- (void)flowControlServiceDidFinishFlow:(unsigned long long)arg0;
- (void)flowControlServiceFlowTypeDidChange:(unsigned long long)arg0 from:(unsigned long long)arg1;
- (void)flowControlServiceDidHandleTouchBeganWithShootSource:(id)arg0;
- (void)flowControlServiceDidHandleTouchHoldWithShootSource:(id)arg0;
- (void)flowControlServiceDidHandleTouchEndWithShootSource:(id)arg0;

@end