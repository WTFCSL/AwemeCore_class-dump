//
//     Generated by private class-dump
//

@class NSString;

@interface TTDownloadTTNetManager : NSObject <TTDownloadRequestProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)changeErrorCodeIfCanceledByCronetInternal:(id)arg0;

- (id)getContentLengthWithModel:(id)arg0;
- (void)tryDynamicThrottle:(id)arg0 speed:(long long)arg1 throttleSpeed:(long long)arg2;
- (id)downloadWithChunkedInterface:(id)arg0;
- (id)downloadWithNormalInterface:(id)arg0;
- (id)downloadRequestWithModel:(id)arg0;

@end
