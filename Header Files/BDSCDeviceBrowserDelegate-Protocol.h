//
//     Generated by private class-dump
//

@protocol BDSCDeviceBrowserDelegate <NSObject>

- (void)deviceBrowser:(id)arg0 onError:(id)arg1;
- (void)deviceBrowser:(id)arg0 didFindSCDevices:(id)arg1;
- (void)deviceBrowser:(id)arg0 didFindDeviceType:(unsigned long long)arg1;
- (BOOL)deviceBrowser:(id)arg0 shouldFilterWithPlayerConfig:(id)arg1;
- (void)deviceBrowser:(id)arg0 unavailableDevice:(id)arg1 deviceType:(unsigned long long)arg2;
- (void)deviceBrowser:(id)arg0 willSearchBDLinkByIPWithDevice:(id)arg1;
- (void)deviceBrowser:(id)arg0 didSearchBDLinkByIPWithDevice:(id)arg1 error:(id)arg2;
- (void)deviceBrowser:(id)arg0 didFindInvalidDevices:(id)arg1;
- (void)deviceBrowser:(id)arg0 deviceFiltered:(id)arg1 extraInfo:(id)arg2;

@end
