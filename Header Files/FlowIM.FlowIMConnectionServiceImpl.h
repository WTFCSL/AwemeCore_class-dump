//
//     Generated by private class-dump
//

@interface FlowIM.FlowIMConnectionServiceImpl : NSObject <IESLCConnectService> {
    void /* unknown type, empty encoding */ firstConnectTrackerStages;
    void /* unknown type, empty encoding */ connectionState;
    void /* unknown type, empty encoding */ delegateArray;
}

- (void)ieslc_onConnectionStateChanged:(id)arg0 connectionState:(unsigned long long)arg1 url:(id)arg2;
- (void)ieslc_onConnectionErrorWithState:(id)arg0 connectionState:(unsigned long long)arg1 url:(id)arg2 errorStr:(id)arg3 errorDict:(id)arg4;
- (void)onChangeConnectionStatus:(id)arg0;
- (void)onConnectionFailed:(id)arg0;
- (id)init;
- (void).cxx_destruct;
- (void)dealloc;

@end
