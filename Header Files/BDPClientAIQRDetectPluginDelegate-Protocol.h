//
//     Generated by private class-dump
//

@protocol BDPClientAIQRDetectPluginDelegate <BDPBasePluginDelegate>

- (void)bdp_runQRCodeRecognizerWithInputImage:(id)arg0 pagePath:(id)arg1 completion:(id /* block */)arg2;
- (void)bdp_registerQRCodeServiceWithCallback:(id /* block */)arg0;
- (void)bdp_releaseQRCodeService;
- (void)bdp_runQRCodeRecognizerWithInputImage:(id)arg0 completion:(id /* block */)arg1;

@end