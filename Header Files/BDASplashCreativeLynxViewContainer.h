//
//     Generated by private class-dump
//

@class AdInnovationManager, NSDictionary, NSString, LynxView;
@protocol BDASplashComplianceBaseDelegate;

@interface BDASplashCreativeLynxViewContainer : NSObject <LynxTemplateProvider, LynxResourceProvider, LynxResourceFetcher, LynxViewLifecycle, LynxImageFetcher, AdInnovationContainerProtocol, AdInnovationEventReporterProtocol> {
    LynxView *_lynxView;
    AdInnovationManager *_innovationManager;
    NSDictionary *_lynxData;
    NSDictionary *_lynxConfig;
    NSDictionary *_config;
    id<BDASplashComplianceBaseDelegate> _delegate;
    double _parseStartTime;
    double _loadStartTime;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _frame;
}

@property (weak, nonatomic) LynxView *lynxView;
@property (retain, nonatomic) AdInnovationManager *innovationManager;
@property (copy, nonatomic) NSDictionary *lynxData;
@property (copy, nonatomic) NSDictionary *lynxConfig;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } frame;
@property (copy, nonatomic) NSDictionary *config;
@property (weak, nonatomic) id<BDASplashComplianceBaseDelegate> delegate;
@property (nonatomic) double parseStartTime;
@property (nonatomic) double loadStartTime;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)lynxData;
- (id)lynxView;
- (void)loadTemplateWithUrl:(id)arg0 onComplete:(id /* block */)arg1;
- (void)lynxViewDidStartLoading:(id)arg0;
- (void)lynxView:(id)arg0 didLoadFinishedWithUrl:(id)arg1;
- (void)lynxViewDidFirstScreen:(id)arg0;
- (void)lynxView:(id)arg0 didLoadFailedWithUrl:(id)arg1 error:(id)arg2;
- (void)lynxView:(id)arg0 didRecieveError:(id)arg1;
- (id /* block */)loadResourceWithURL:(id)arg0 type:(long long)arg1 completion:(id /* block */)arg2;
- (void)request:(id)arg0 onComplete:(id /* block */)arg1;
- (void)jsbRegister:(id)arg0 registerHandlerBlock:(id /* block */)arg1 forJSMethod:(id)arg2;
- (void)jsbRegister:(id)arg0 fireEvent:(id)arg1 params:(id)arg2;
- (void)setLynxView:(id)arg0;
- (void)setParseStartTime:(double)arg0;
- (void)loadLynxConfig;
- (id)loadLynxView;
- (void)loadInnovation;
- (void)setLynxData:(id)arg0;
- (void)setLynxConfig:(id)arg0;
- (void)setInnovationManager:(id)arg0;
- (id)innovationManager;
- (id)lynxConfig;
- (double)loadStartTime;
- (void)setLoadStartTime:(double)arg0;
- (double)parseStartTime;
- (id)contentViewOfInnovationAd;
- (void)loadInnovationAdWithUrl:(id)arg0;
- (id)innovationAdAppInfo;
- (void)innovationAdCloseContainer;
- (void)innovationAd:(id)arg0 clickParams:(id)arg1;
- (void)innovationAd:(id)arg0 appendGlobalProps:(id)arg1;
- (void)innovationAd:(id)arg0 notificationParams:(id)arg1;
- (void)innovationAdTrackWithContext:(id)arg0;
- (id)createCreativeViewWithConfig:(id)arg0 frame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg1 delegate:(id)arg2;
- (void)cancel:(id)arg0;
- (void)setConfig:(id)arg0;
- (void).cxx_destruct;
- (id)config;
- (id)delegate;
- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (void)setDelegate:(id)arg0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (id)appInfo;

@end
