//
//     Generated by private class-dump
//

@interface AWESwitchNetStatusMonitor : NSObject {
    BOOL _isWeakNet;
}

@property (nonatomic) BOOL isWeakNet;

- (BOOL)isWeakNet;
- (BOOL)checkNetworkIsWifi;
- (void)p_addKVO;
- (BOOL)checkIsPoolNet;
- (void)setIsWeakNet:(BOOL)arg0;
- (void)onMultiNetworkStateChanged:(id)arg0;
- (void)wifiToCellularChangedNotification:(id)arg0;
- (id)init;

@end