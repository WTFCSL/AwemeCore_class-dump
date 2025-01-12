//
//     Generated by private class-dump
//

@class ZimGatewayForPop, NSString;

@interface AliyunFaceAuthRPC : NSObject <DTFRPCProxyProtocol> {
    ZimGatewayForPop *_gatewayForPop;
}

@property (retain, nonatomic) ZimGatewayForPop *gatewayForPop;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)dictionaryIsContainKey:(id)arg0 key:(id)arg1;
- (id)gatewayForPop;
- (void)zimInit:(id)arg0 completionBlock:(id /* block */)arg1;
- (void)zimValidate:(id)arg0 completionBlock:(id /* block */)arg1;
- (void)zimNFCValidate:(id)arg0 completionBlock:(id /* block */)arg1;
- (void)zimOCRIdentify:(id)arg0 completionBlock:(id /* block */)arg1;
- (void)setGatewayForPop:(id)arg0;
- (void).cxx_destruct;

@end
