//
//     Generated by private class-dump
//

@class BDByteCastMulticastCheckResultModel, NSString, BDByteCastUnicastCheckResultModel, BDByteCastPortProbeResultModel, BDByteCastLocalNetworkPermissionCheckResultModel;

@interface BDByteCastEnvInfo : NSObject {
    BOOL _isVPNActive;
    BOOL _isHotspotEnabled;
    BOOL _supportMulticast;
    long long _networkType;
    NSString *_wifiSSID;
    NSString *_wifiBSSID;
    NSString *_ip;
    NSString *_netmask;
    NSString *_gateway;
    BDByteCastLocalNetworkPermissionCheckResultModel *_localNetworkPermissionCheckResultModel;
    BDByteCastMulticastCheckResultModel *_multicastCheckResultModel;
    BDByteCastUnicastCheckResultModel *_unicastCheckResultModel;
    BDByteCastPortProbeResultModel *_portProbeResultModel;
}

@property (nonatomic) long long networkType;
@property (copy, nonatomic) NSString *wifiSSID;
@property (copy, nonatomic) NSString *wifiBSSID;
@property (copy, nonatomic) NSString *ip;
@property (copy, nonatomic) NSString *netmask;
@property (copy, nonatomic) NSString *gateway;
@property (nonatomic) BOOL isVPNActive;
@property (nonatomic) BOOL isHotspotEnabled;
@property (nonatomic) BOOL supportMulticast;
@property (retain, nonatomic) BDByteCastLocalNetworkPermissionCheckResultModel *localNetworkPermissionCheckResultModel;
@property (retain, nonatomic) BDByteCastMulticastCheckResultModel *multicastCheckResultModel;
@property (retain, nonatomic) BDByteCastUnicastCheckResultModel *unicastCheckResultModel;
@property (retain, nonatomic) BDByteCastPortProbeResultModel *portProbeResultModel;

- (void)setIsVPNActive:(BOOL)arg0;
- (BOOL)isHotspotEnabled;
- (void)setIsHotspotEnabled:(BOOL)arg0;
- (BOOL)supportMulticast;
- (void)setSupportMulticast:(BOOL)arg0;
- (id)multicastCheckResultModel;
- (void)setMulticastCheckResultModel:(id)arg0;
- (void)setUnicastCheckResultModel:(id)arg0;
- (void)setPortProbeResultModel:(id)arg0;
- (void)setNetmask:(id)arg0;
- (void)setLocalNetworkPermissionCheckResultModel:(id)arg0;
- (id)localNetworkPermissionCheckResultModel;
- (id)unicastCheckResultModel;
- (id)portProbeResultModel;
- (id)gateway;
- (void).cxx_destruct;
- (void)setNetworkType:(long long)arg0;
- (void)setWifiSSID:(id)arg0;
- (BOOL)isVPNActive;
- (id)description;
- (void)setGateway:(id)arg0;
- (id)wifiSSID;
- (long long)networkType;
- (id)netmask;
- (id)wifiBSSID;
- (void)setWifiBSSID:(id)arg0;
- (void)setIp:(id)arg0;
- (id)ip;

@end
