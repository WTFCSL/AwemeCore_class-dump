//
//     Generated by private class-dump
//

@protocol RTVCompactStateMachineDelegate <NSObject>

@optional

- (void)stateMachine:(id)arg0 willTransferFrom:(id)arg1 to:(id)arg2 transition:(id)arg3;
- (void)stateMachine:(id)arg0 didTransferFrom:(id)arg1 to:(id)arg2 transition:(id)arg3;
- (void)stateMachine:(id)arg0 willFireEvent:(id)arg1 transition:(id)arg2;
- (void)stateMachine:(id)arg0 didFireEvent:(id)arg1 result:(BOOL)arg2 transition:(id)arg3;

@end
