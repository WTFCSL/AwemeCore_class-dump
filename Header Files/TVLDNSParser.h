//
//     Generated by private class-dump
//

@class TVLHTTPDNSParser, NSString, TVLLocalDNSParser, TVLBaseDNSParser;
@protocol TVLDNSParserDelegate, TVLDNSCaching;

@interface TVLDNSParser : NSObject <TVLDNSParserDelegate, TVLDNSParsing> {
    TVLHTTPDNSParser *_httpDNSParser;
    TVLLocalDNSParser *_localDNSParser;
    TVLBaseDNSParser *_currentDNSParser;
    BOOL _canceled;
    BOOL _tryCachedAddresses;
    BOOL _preferredToHTTPDNS;
    id<TVLDNSCaching> _cache;
    id<TVLDNSParserDelegate> _delegate;
    NSString *_hostname;
}

@property (weak, nonatomic) id<TVLDNSCaching> cache;
@property (weak, nonatomic) id<TVLDNSParserDelegate> delegate;
@property (copy, nonatomic) NSString *hostname;
@property (nonatomic, getter=shouldTryCachedAddresses) BOOL tryCachedAddresses;
@property (nonatomic, getter=isPreferredToHTTPDNS) BOOL preferredToHTTPDNS;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)requestDNSServerWithCompletion:(id /* block */)arg0;

- (BOOL)shouldTryCachedAddresses;
- (void)parser:(id)arg0 didGetRecordWithHostname:(id)arg1 parsedAddresses:(id)arg2 timeToLive:(double)arg3;
- (void)parser:(id)arg0 didFinishParsingHostname:(id)arg1 withParesedAddresses:(id)arg2 error:(id)arg3;
- (void)setPreferredToHTTPDNS:(BOOL)arg0;
- (BOOL)isPreferredToHTTPDNS;
- (void)setTryCachedAddresses:(BOOL)arg0;
- (void)setCache:(id)arg0;
- (id)cache;
- (void)setHostname:(id)arg0;
- (void).cxx_destruct;
- (id)hostname;
- (id)delegate;
- (void)cancel;
- (void)start;
- (void)setDelegate:(id)arg0;
- (id)initWithHostname:(id)arg0;

@end