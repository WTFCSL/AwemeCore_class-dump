//
//     Generated by private class-dump
//

@interface BDPPluginPublicWifiModule : BDPBridgeInstancePlugin

- (void)getConnectedWifiWithParam:(id)arg0 callback:(id /* block */)arg1 instance:(id)arg2;
- (id)getWifiInfo;
- (void)callBackWifiInfoWithBlock:(id /* block */)arg0 wifiInfo:(id)arg1 uniqueID:(id)arg2;
- (void)p_callBackWifiInfoWithBlock:(id /* block */)arg0 wifiInfo:(id)arg1;
- (BOOL)isValidWIFIInfo:(id)arg0;

@end
