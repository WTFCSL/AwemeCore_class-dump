//
//     Generated by private class-dump
//

@class NSString;

@interface BDCastServiceInfo : NSObject {
    NSString *_ip;
    long long _port;
    NSString *_serviceName;
    NSString *_uuid;
    long long _serverId;
    NSString *_connectId;
    NSString *_browseId;
    long long _sdkType;
}

@property (copy, nonatomic) NSString *ip;
@property (nonatomic) long long port;
@property (copy, nonatomic) NSString *serviceName;
@property (copy, nonatomic) NSString *uuid;
@property (nonatomic) long long serverId;
@property (copy, nonatomic) NSString *connectId;
@property (copy, nonatomic) NSString *browseId;
@property (nonatomic) long long sdkType;

- (long long)sdkType;
- (id)connectId;
- (void)setConnectId:(id)arg0;
- (void)setBrowseId:(id)arg0;
- (void)setSdkType:(long long)arg0;
- (id)browseId;
- (long long)port;
- (id)init;
- (void)setPort:(long long)arg0;
- (void).cxx_destruct;
- (void)setUuid:(id)arg0;
- (id)serviceName;
- (id)description;
- (id)uuid;
- (void)setServiceName:(id)arg0;
- (long long)serverId;
- (void)setServerId:(long long)arg0;
- (void)setIp:(id)arg0;
- (id)ip;

@end
