//
//     Generated by private class-dump
//

@protocol RTVStateMachineInterface, RTVVoipModelStoreInterface;

@interface RTVVoipStateTransferActionHandler : RTVStateTransferActionHandler {
    id<RTVVoipModelStoreInterface> _voipStore;
    id<RTVStateMachineInterface> _stateMachine;
}

@property (readonly, nonatomic) id<RTVVoipModelStoreInterface> voipStore;
@property (readonly, nonatomic) id<RTVStateMachineInterface> stateMachine;

+ (struct _RTVActionTypeRange { long long x0; long long x1; })supportActionTypeRange;

- (void)rxAwakeFromPropertyInjection;
- (id)doHandleAction:(id)arg0;
- (id)handleUpdateVoipAction:(id)arg0 event:(id)arg1;
- (id)voipStore;
- (id)handleUpdateVoipAction:(id)arg0 eventType:(long long)arg1 eventCode:(long long)arg2;
- (id)stateMachine;
- (void).cxx_destruct;

@end
