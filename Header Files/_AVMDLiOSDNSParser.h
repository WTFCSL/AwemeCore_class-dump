//
//     Generated by private class-dump
//

@class NSObject, NSMutableDictionary, AVMDLiOSDNSCache;
@protocol OS_dispatch_queue, AVMDLCustomHttpDNSParser;

@interface _AVMDLiOSDNSParser : NSObject {
    NSMutableDictionary *_parsers;
    NSMutableDictionary *_sameParsers;
    AVMDLiOSDNSCache *_cache;
    unsigned long long _networkState;
    NSObject<OS_dispatch_queue> *_dnsQueue;
    id<AVMDLCustomHttpDNSParser> _customHttpDNS;
}

@property (retain, nonatomic) NSMutableDictionary *parsers;
@property (retain, nonatomic) NSMutableDictionary *sameParsers;
@property (retain, nonatomic) AVMDLiOSDNSCache *cache;
@property (nonatomic) unsigned long long networkState;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dnsQueue;
@property (weak, nonatomic) id<AVMDLCustomHttpDNSParser> customHttpDNS;

+ (id)shareInstance;

- (void)_networkDidChangeEvent:(id)arg0;
- (void)_startParese:(id)arg0 result:(id /* block */)arg1;
- (id)_sameHostParsering:(id)arg0;
- (void)_saveSameParser:(id)arg0;
- (void)_addParser:(id)arg0;
- (void)_removeParser:(id)arg0;
- (id)_clearSameParsers:(id)arg0;
- (id)sameParsers;
- (id)parsers;
- (void)setParsers:(id)arg0;
- (void)setSameParsers:(id)arg0;
- (void)cancelParser:(id)arg0;
- (void)setCustomHttpDNS:(id)arg0;
- (id)getIpWithHost:(id)arg0 parserType:(long long)arg1 result:(id /* block */)arg2;
- (id)getItemInfoWithHost:(id)arg0 parserType:(long long)arg1 result:(id /* block */)arg2;
- (id)_startPareserAction:(id)arg0 parserType:(long long)arg1 result:(id /* block */)arg2;
- (void)invokeOutResultBlock:(id)arg0 info:(id)arg1 error:(id)arg2;
- (id)dnsQueue;
- (void)setDnsQueue:(id)arg0;
- (id)customHttpDNS;
- (void)setCache:(id)arg0;
- (id)cache;
- (id)init;
- (void).cxx_destruct;
- (unsigned long long)networkState;
- (void)dealloc;
- (void)setNetworkState:(unsigned long long)arg0;

@end