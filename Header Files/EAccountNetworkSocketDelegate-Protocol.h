//
//     Generated by private class-dump
//

@protocol EAccountNetworkSocketDelegate <NSObject>

@optional

- (void)eaCcountNetworkSocket_state_obsever_failedWithError:(id)arg0;
- (void)eaCcountNetworkSocket_Connection_state_waiting;
- (void)eaCcountNetworkSocket_Connection_state_failed;
- (void)eaCcountNetworkSocket_Connection_state_ready;
- (void)eaCcountNetworkSocket_Connection_state_cancelled;
- (void)eaCcountNetworkSocketdidWriteDataWithError:(id)arg0;
- (void)eaCcountNetworkSocketdidReadData:(id)arg0 WithError:(id)arg1;

@end
