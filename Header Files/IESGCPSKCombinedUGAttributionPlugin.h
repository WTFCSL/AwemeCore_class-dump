//
//     Generated by private class-dump
//

@class NSString, IESGCPApi;

@interface IESGCPSKCombinedUGAttributionPlugin : NSObject <IESGCPSKCombinedPluginProtocol> {
    IESGCPApi *_api;
}

@property (retain, nonatomic) IESGCPApi *api;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)handleOpenAppStoreEvent:(id)arg0 doNext:(id /* block */)arg1 finish:(id /* block */)arg2;
- (void)handleEvent:(id)arg0 doNext:(id /* block */)arg1 finish:(id /* block */)arg2;
- (id)appendZlinkCoreParamsWithUrl:(id)arg0 context:(id)arg1;
- (id)zlinkQueryForContext:(id)arg0;
- (void).cxx_destruct;
- (id)api;
- (void)setApi:(id)arg0;

@end
