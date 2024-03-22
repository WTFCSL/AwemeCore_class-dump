//
//     Generated by private class-dump
//

@class NSString;
@protocol AVMDLCustomHttpDNSParser;

@interface AVMDLiOSCustomHttpDNSParser : NSObject <AVMDLiOSDNSProtocol> {
    BOOL _isUserCancel;
    id<AVMDLCustomHttpDNSParser> _httpDNSParser;
    NSString *_hostname;
    id /* block */ _result;
}

@property (nonatomic) BOOL isUserCancel;
@property (copy, nonatomic) NSString *hostname;
@property (copy, nonatomic) id /* block */ result;
@property (weak, nonatomic) id<AVMDLCustomHttpDNSParser> httpDNSParser;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)isUserCancel;
- (void)setIsUserCancel:(BOOL)arg0;
- (id)initWithHost:(id)arg0 dnsParser:(id)arg1;
- (id)httpDNSParser;
- (void)setHttpDNSParser:(id)arg0;
- (void)_notifyError:(id)arg0 async:(BOOL)arg1;
- (void)setResult:(id /* block */)arg0;
- (void)setHostname:(id)arg0;
- (void).cxx_destruct;
- (void)start:(id /* block */)arg0;
- (id /* block */)result;
- (id)hostname;
- (id)host;
- (void)cancel;
- (BOOL)cancelled;
- (id)initWithHost:(id)arg0;
- (void)dealloc;
- (long long)parserType;

@end
