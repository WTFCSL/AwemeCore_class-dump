//
//     Generated by private class-dump
//

@class NSString, NSDictionary, AWEAwemeModel, AWEBDALokiManager;

@interface AWEAdLandingPageLokiManager : NSObject <BDALokiManagerDelegate, AWEAdLandingPageLokiManager> {
    NSDictionary *_globalProps;
    AWEBDALokiManager *_adLokiManager;
    AWEAwemeModel *_aweme;
}

@property (retain, nonatomic) AWEBDALokiManager *adLokiManager;
@property (retain, nonatomic) AWEAwemeModel *aweme;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)aweme;
- (void)setAweme:(id)arg0;
- (void)sendEvent:(id)arg0 params:(id)arg1 callback:(id /* block */)arg2;
- (void)lokiStartLoad:(id)arg0;
- (void)lokiComponentDowngrade:(id)arg0 errorMsg:(id)arg1;
- (void)lokiRenderFinishComponent:(id)arg0;
- (void)lokiClose:(id)arg0;
- (id)getLynxGlobalProps:(id)arg0;
- (id)configLokiData:(id)arg0;
- (void)setupLokiWithAweme:(id)arg0 globalProps:(id)arg1 container:(id)arg2 url:(id)arg3;
- (id)adLokiManager;
- (void)setAdLokiManager:(id)arg0;
- (void).cxx_destruct;
- (void)reset;

@end
