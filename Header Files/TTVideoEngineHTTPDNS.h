//
//     Generated by private class-dump
//

@class TTVideoEngineNetwork;

@interface TTVideoEngineHTTPDNS : TTVideoEngineDNSBase {
    TTVideoEngineNetwork *_networkSession;
    unsigned long long _hostDnsType;
}

@property (retain, nonatomic) TTVideoEngineNetwork *networkSession;
@property (nonatomic) unsigned long long hostDnsType;

+ (void)setHttpDNSServerIP:(id)arg0;

- (void)notifyError:(id)arg0;
- (id)networkSession;
- (void)setNetworkSession:(id)arg0;
- (id)initWithHostname:(id)arg0 andType:(unsigned long long)arg1;
- (unsigned long long)hostDnsType;
- (void)setHostDnsType:(unsigned long long)arg0;
- (void).cxx_destruct;
- (void)cancel;
- (void)handleResponse:(id)arg0 error:(id)arg1;
- (void)start;
- (void)dealloc;

@end
