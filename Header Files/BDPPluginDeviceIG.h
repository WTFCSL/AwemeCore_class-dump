//
//     Generated by private class-dump
//

@class BDPScreenOnLock, BDPUniqueID;

@interface BDPPluginDeviceIG : BDPBridgeInstancePlugin {
    BDPUniqueID *_uniqueID;
    BDPScreenOnLock *_screenOnLock;
}

@property (retain, nonatomic) BDPUniqueID *uniqueID;
@property (retain, nonatomic) BDPScreenOnLock *screenOnLock;

- (void)getSystemInfoWithParam:(id)arg0 callback:(id /* block */)arg1 instance:(id)arg2;
- (void)getSystemInfoSyncWithParam:(id)arg0 callback:(id /* block */)arg1 instance:(id)arg2;
- (void)setKeepScreenOnWithParam:(id)arg0 callback:(id /* block */)arg1 instance:(id)arg2;
- (void)setScreenOnLock:(id)arg0;
- (id)screenOnLock;
- (void).cxx_destruct;
- (id)uniqueID;
- (void)setUniqueID:(id)arg0;
- (void)dealloc;

@end