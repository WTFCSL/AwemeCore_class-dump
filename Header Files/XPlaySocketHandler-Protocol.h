//
//     Generated by private class-dump
//

@protocol XPlaySocketHandler <NSObject>

@optional

- (void)didSocketStateChanged:(long long)arg0;
- (void)didSocketConnectionFailed:(id)arg0 with:(long long)arg1;
- (void)didReceiveMessage:(id)arg0 ackCallback:(id /* block */)arg1;
- (void)didReceiveAckMessage:(id)arg0 forMessage:(id)arg1;

@end
