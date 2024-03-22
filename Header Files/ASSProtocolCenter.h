//
//     Generated by private class-dump
//

@protocol APDynamicProtocol, APDeviceColorProtocol, APRiskConfigServiceProtocol, APRiskLoggerProtocol, APRiskRemoteLoggerProtocol, APRiskSyncServiceProtocol, APRiskFileUploadProtocol, APDIDProtocol, APRiskRPCProtocol, APSignProtocol;

@interface ASSProtocolCenter : NSObject {
    id<APRiskRemoteLoggerProtocol> _remoteLoggerDelegate;
    id<APRiskConfigServiceProtocol> _configServiceDelegate;
    id<APRiskFileUploadProtocol> _fileUploadDelegate;
    id<APRiskRPCProtocol> _rpcDelegate;
    id<APRiskSyncServiceProtocol> _syncServiceDelegate;
    id<APRiskLoggerProtocol> _logDelegate;
    id<APDeviceColorProtocol> _deviceColorDelegate;
    id<APDynamicProtocol> _dynamicDelegate;
    id<APSignProtocol> _signDelegate;
    id<APDIDProtocol> _apdidDelegate;
}

@property (retain, nonatomic) id<APRiskRemoteLoggerProtocol> remoteLoggerDelegate;
@property (retain, nonatomic) id<APRiskConfigServiceProtocol> configServiceDelegate;
@property (retain, nonatomic) id<APRiskFileUploadProtocol> fileUploadDelegate;
@property (retain, nonatomic) id<APRiskRPCProtocol> rpcDelegate;
@property (retain, nonatomic) id<APRiskSyncServiceProtocol> syncServiceDelegate;
@property (retain, nonatomic) id<APRiskLoggerProtocol> logDelegate;
@property (retain, nonatomic) id<APDeviceColorProtocol> deviceColorDelegate;
@property (retain, nonatomic) id<APDynamicProtocol> dynamicDelegate;
@property (retain, nonatomic) id<APSignProtocol> signDelegate;
@property (retain, nonatomic) id<APDIDProtocol> apdidDelegate;

+ (id)sharedCenter;

- (void)setLogDelegate:(id)arg0;
- (id)logDelegate;
- (void)setDelegate:(long long)arg0 implClass:(id)arg1;
- (id)syncServiceDelegate;
- (void)setSignDelegate:(id)arg0;
- (id)dynamicDelegate;
- (id)deviceColorDelegate;
- (id)signDelegate;
- (void)setApdidDelegate:(id)arg0;
- (id)rpcDelegate;
- (void)setRemoteLoggerDelegate:(id)arg0;
- (void)setConfigServiceDelegate:(id)arg0;
- (void)setFileUploadDelegate:(id)arg0;
- (void)setRpcDelegate:(id)arg0;
- (void)setSyncServiceDelegate:(id)arg0;
- (void)setDeviceColorDelegate:(id)arg0;
- (void)setDynamicDelegate:(id)arg0;
- (id)fileUploadDelegate;
- (id)apdidDelegate;
- (id)configServiceDelegate;
- (id)remoteLoggerDelegate;
- (id)init;
- (void).cxx_destruct;

@end
