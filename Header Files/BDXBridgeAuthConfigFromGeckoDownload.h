//
//     Generated by private class-dump
//

@class NSString, NSDictionary;

@interface BDXBridgeAuthConfigFromGeckoDownload : NSObject <BDXBridgeAuthConfigDownload> {
    NSString *_requestURLString;
    NSString *_accessKey;
    NSDictionary *_params;
    long long _retryCount;
}

@property (copy, nonatomic) NSString *requestURLString;
@property (copy, nonatomic) NSString *accessKey;
@property (copy, nonatomic) NSDictionary *params;
@property (nonatomic) long long retryCount;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)requestURLString;
- (void)setRequestURLString:(id)arg0;
- (void)fetchBridgeAuthConfigCompletion:(id /* block */)arg0 retryCount:(long long)arg1;
- (void)fetchBridgeAuthConfigCompletion:(id /* block */)arg0;
- (id)initWithAccessKey:(id)arg0 requestURLString:(id)arg1 params:(id)arg2;
- (void).cxx_destruct;
- (void)setRetryCount:(long long)arg0;
- (long long)retryCount;
- (id)params;
- (id)accessKey;
- (void)setAccessKey:(id)arg0;
- (void)setParams:(id)arg0;

@end
