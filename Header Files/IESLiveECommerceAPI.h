//
//     Generated by private class-dump
//

@class NSString;
@protocol IESLiveMonitor;

@interface IESLiveECommerceAPI : HTSLiveApi {
    NSString *_baseURL;
    id<IESLiveMonitor> _monitor;
}

@property (retain, nonatomic) id<IESLiveMonitor> monitor;
@property (retain, nonatomic) NSString *baseURL;

- (void)bindPickedGoods:(id)arg0 userId:(id)arg1 toRoomId:(id)arg2 callback:(id /* block */)arg3;
- (void)fetchAnchorPickedGoodsFor:(id)arg0 toRoomId:(id)arg1 otherParams:(id)arg2 callback:(id /* block */)arg3;
- (void)ecomTrackMonitorEvent:(id)arg0 metricParams:(id)arg1 categoryParams:(id)arg2 extraParams:(id)arg3;
- (void)reportShopCartTaskWithTaskId:(id)arg0 taskMetaId:(id)arg1 scene:(long long)arg2 callback:(id /* block */)arg3;
- (void)request:(id)arg0 apiPath:(id)arg1 postMethod:(BOOL)arg2 parameters:(id)arg3 modelClass:(Class)arg4 monitor:(id)arg5 callback:(id /* block */)arg6;
- (void)trackService:(id)arg0 status:(long long)arg1 extra:(id)arg2 response:(id)arg3 error:(id)arg4;
- (void)fetchPickedGoodsFor:(id)arg0 toRoomId:(id)arg1 otherParams:(id)arg2 callback:(id /* block */)arg3;
- (void)newRequest:(id)arg0 apiPath:(id)arg1 postMethod:(BOOL)arg2 parameters:(id)arg3 modelClass:(Class)arg4 monitor:(id)arg5 callback:(id /* block */)arg6;
- (void)request:(id)arg0 postMethod:(BOOL)arg1 parameters:(id)arg2 modelClass:(Class)arg3 monitor:(id)arg4 callback:(id /* block */)arg5;
- (id)getShopCartTaskScene:(long long)arg0;
- (void)fetchShopCartShouldShowFor:(id)arg0 toRoomId:(id)arg1 callback:(id /* block */)arg2;
- (id)init;
- (void).cxx_destruct;
- (id)monitor;
- (void)setMonitor:(id)arg0;
- (id)baseURL;
- (void)setBaseURL:(id)arg0;

@end
