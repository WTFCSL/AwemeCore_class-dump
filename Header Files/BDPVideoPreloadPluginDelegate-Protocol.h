//
//     Generated by private class-dump
//

@protocol BDPVideoPreloadPluginDelegate <BDPBasePluginDelegate>

- (void)bdp_addPreloadTaskWithModelSrc:(id)arg0 completion:(id /* block */)arg1 stateDelegate:(id)arg2;
- (void)bdp_addPreloadTaskWithModelVid:(id)arg0 completion:(id /* block */)arg1 stateDelegate:(id)arg2;
- (void)bdp_addPreloadTaskWithModelVideoModel:(id)arg0 completion:(id /* block */)arg1 stateDelegate:(id)arg2;
- (void)bdp_cancelPreloadTaskWithKey:(id)arg0 completion:(id /* block */)arg1;
- (void)bdp_cancelPreloadTaskWithVid:(id)arg0 completion:(id /* block */)arg1;

@end
