//
//     Generated by private class-dump
//

@protocol UniGCDAsyncSocketDelegate <NSObject>

@optional

- (void)socket:(id)arg0 didConnectToUrl:(id)arg1;
- (id)newSocketQueueForConnectionFromAddress:(id)arg0 onSocket:(id)arg1;
- (void)socket:(id)arg0 didAcceptNewSocket:(id)arg1;
- (void)socket:(id)arg0 didConnectToHost:(id)arg1 port:(unsigned short)arg2;
- (void)socket:(id)arg0 didReadData:(id)arg1 withTag:(long long)arg2;
- (void)socket:(id)arg0 didReadPartialDataOfLength:(unsigned long long)arg1 tag:(long long)arg2;
- (void)socket:(id)arg0 didWriteDataWithTag:(long long)arg1;
- (void)socket:(id)arg0 didWritePartialDataOfLength:(unsigned long long)arg1 tag:(long long)arg2;
- (double)socket:(id)arg0 shouldTimeoutReadWithTag:(long long)arg1 elapsed:(double)arg2 bytesDone:(unsigned long long)arg3;
- (double)socket:(id)arg0 shouldTimeoutWriteWithTag:(long long)arg1 elapsed:(double)arg2 bytesDone:(unsigned long long)arg3;
- (void)socketDidCloseReadStream:(id)arg0;
- (void)socketDidDisconnect:(id)arg0 withError:(id)arg1;
- (void)socketDidSecure:(id)arg0;
- (void)socket:(id)arg0 didReceiveTrust:(struct __SecTrust { } *)arg1 completionHandler:(id /* block */)arg2;

@end
