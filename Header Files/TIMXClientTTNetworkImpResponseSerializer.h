//
//     Generated by private class-dump
//

@class NSString;

@interface TIMXClientTTNetworkImpResponseSerializer : NSObject <TTBinaryResponseSerializerProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)serializer;

- (id)responseObjectForResponse:(id)arg0 data:(id)arg1 responseError:(id)arg2 resultError:(id *)arg3;

@end
