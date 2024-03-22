//
//     Generated by private class-dump
//

@protocol RTVVoipObserver <NSObject>

@optional

- (void)voipServiceWillBegin:(id)arg0 voip:(id)arg1;
- (void)voipServiceDidBegin:(id)arg0 voip:(id)arg1;
- (void)voipServiceDidDismiss:(id)arg0 voip:(id)arg1;
- (void)voipServiceWillFinish:(id)arg0 voip:(id)arg1;
- (void)voipServiceDidFinish:(id)arg0 voip:(id)arg1;
- (void)voipService:(id)arg0 voip:(id)arg1 switchNarrow:(BOOL)arg2;
- (void)voipServiceDidReceiveVoip:(id)arg0 voip:(id)arg1;
- (void)voipServiceChangeToOccupied:(id)arg0 voip:(id)arg1;
- (void)notifyHasStashed:(id)arg0 voip:(id)arg1;
- (void)voipServiceDidChangeType:(id)arg0 voip:(id)arg1 fromType:(long long)arg2;
- (void)voipServiceRequireToAutoAccept:(id)arg0 voip:(id)arg1;
- (void)voipServiceWillPresentVoipViewController:(id)arg0 voip:(id)arg1;
- (void)voipServiceDidPresentVoipViewController:(id)arg0 voip:(id)arg1;
- (void)voipService:(id)arg0 didPerformAction:(id)arg1 voip:(id)arg2;

@end