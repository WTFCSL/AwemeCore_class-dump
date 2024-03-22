//
//     Generated by private class-dump
//

@class NSString;
@protocol TTDownloadRequestProtocol;

@interface TTDownloadNetworkDelegate : NSObject <TTDownloadRequestProtocol> {
    id<TTDownloadRequestProtocol> _customizedNetworkManager;
    id<TTDownloadRequestProtocol> _ttnetworkManager;
}

@property (retain, nonatomic) id<TTDownloadRequestProtocol> customizedNetworkManager;
@property (retain, nonatomic) id<TTDownloadRequestProtocol> ttnetworkManager;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)shareInstance;

- (void)setTtnetworkManager:(id)arg0;
- (void)setCustomizedNetworkManager:(id)arg0;
- (id)realNetManager;
- (id)customizedNetworkManager;
- (id)ttnetworkManager;
- (id)getContentLengthWithModel:(id)arg0;
- (void)tryDynamicThrottle:(id)arg0 speed:(long long)arg1 throttleSpeed:(long long)arg2;
- (void)setNetworkLib:(id)arg0;
- (id)getNetworkLib;
- (id)downloadRequestWithModel:(id)arg0;
- (id)init;
- (void).cxx_destruct;

@end
