//
//     Generated by private class-dump
//

@class NSString;

@interface HMDURLSessionManager : NSObject <HMDNetworkProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)asyncRequestWithModel:(id)arg0 callBackWithResponse:(id /* block */)arg1;
- (void)uploadWithModel:(id)arg0 callBackWithResponse:(id /* block */)arg1;

@end
