//
//     Generated by private class-dump
//

@class NSString, TVLNetworkClient;

@interface TVLHTTPDNSParser : TVLBaseDNSParser {
    TVLNetworkClient *_client;
    unsigned long long _provider;
}

@property (class, nonatomic) NSString *serverHost;

@property (nonatomic) unsigned long long provider;

+ (id)serverHost;
+ (void)setServerHost:(id)arg0;

- (id)requestURLWithHost:(id)arg0 provider:(unsigned long long)arg1;
- (void)setProvider:(unsigned long long)arg0;
- (unsigned long long)provider;
- (void).cxx_destruct;
- (void)cancel;
- (void)handleResponse:(id)arg0 error:(id)arg1;
- (void)start;
- (id)initWithHostname:(id)arg0;

@end