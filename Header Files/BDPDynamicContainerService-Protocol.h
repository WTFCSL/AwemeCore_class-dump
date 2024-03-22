//
//     Generated by private class-dump
//

@protocol BDPDynamicContainerService <BDPService>

- (void)openDynamicContainerWithParams:(id)arg0 callback:(id /* block */)arg1 instance:(id)arg2;
- (void)sendBulletContainerEventWithParams:(id)arg0 callback:(id /* block */)arg1 instance:(id)arg2;
- (void)closeDynamicContainerWithParams:(id)arg0 callback:(id /* block */)arg1 instance:(id)arg2;
- (void)getBulletContainerExtraWithParams:(id)arg0 callback:(id /* block */)arg1 instance:(id)arg2;
- (void)invokeEvent:(id)arg0 uniqueID:(id)arg1 containerId:(id)arg2 param:(id)arg3 completion:(id /* block */)arg4;
- (void)applicationReadyToBoot:(id)arg0;
- (void)updateLiveVideoContainer:(id)arg0 status:(long long)arg1;
- (void)preloadBulletResourcesWithParam:(id)arg0 callback:(id /* block */)arg1 instance:(id)arg2;
- (void)getContainerInfosWithParams:(id)arg0 callback:(id /* block */)arg1 instance:(id)arg2;
- (void)enableTransmitEventWithParams:(id)arg0 callback:(id /* block */)arg1 instance:(id)arg2;
- (void)disableTransmitEventWithParams:(id)arg0 callback:(id /* block */)arg1 instance:(id)arg2;

@end
