//
//     Generated by private class-dump
//

@class NSString;

@interface AWEXBridgeOpenService : NSObject <BDXBridgeOpenServiceProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)scanCodeWithParamModel:(id)arg0 completionHandler:(id /* block */)arg1;
- (BOOL)downloadWithAccessKey:(id)arg0 channel:(id)arg1;
- (void)updateGeckoWithParamModel:(id)arg0 completionHandler:(id /* block */)arg1;
- (void)getGeckoInfoWithParamModel:(id)arg0 completionHandler:(id /* block */)arg1;

@end
