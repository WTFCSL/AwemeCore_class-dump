//
//     Generated by private class-dump
//

@protocol NSNetServiceDelegate <NSObject>

@optional

- (void)netService:(id)arg0 didNotPublish:(id)arg1;
- (void)netServiceWillPublish:(id)arg0;
- (void)netService:(id)arg0 didAcceptConnectionWithInputStream:(id)arg1 outputStream:(id)arg2;
- (void)netServiceDidStop:(id)arg0;
- (void)netServiceDidResolveAddress:(id)arg0;
- (void)netService:(id)arg0 didNotResolve:(id)arg1;
- (void)netServiceWillResolve:(id)arg0;
- (void)netServiceDidPublish:(id)arg0;
- (void)netService:(id)arg0 didUpdateTXTRecordData:(id)arg1;

@end
