//
//     Generated by private class-dump
//

@class NSString, AWEBDARifleViewDelegateProxy, BUPlayableAdJSBRegister, AWEAwemeModel, AWEBDARifleViewConfiguration, AWEOriginalAdModel, NSArray;
@protocol AWEBDARifleViewDelegate;

@interface AWEBDARifleView : BDARifleView <BDAPUProtocol, AWEBDARifleViewDelegate, BUPlayableAdJSBRegisterDelegate, AWEBDARifleView> {
    BOOL _lynxLoadSuccess;
    BOOL _lynxLoadFirstScreen;
    BOOL _lynxJSRuntimeReady;
    AWEBDARifleViewConfiguration *_config;
    id<AWEBDARifleViewDelegate> _lifecycleDelegate;
    NSString *_componentType;
    AWEBDARifleViewDelegateProxy *_lifeDelegateProxy;
    id<AWEBDARifleViewDelegate> _realLifecycleDelegate;
    BUPlayableAdJSBRegister *_jsbRegister;
    AWEAwemeModel *_aweme;
    AWEOriginalAdModel *_adModel;
    NSArray *_processors;
    NSString *_accessKey;
    NSString *_channel;
    NSString *_bundle;
    double _firstScreenLoadTime;
}

@property (retain, nonatomic) AWEBDARifleViewConfiguration *config;
@property (retain, nonatomic) AWEBDARifleViewDelegateProxy *lifeDelegateProxy;
@property (weak, nonatomic) id<AWEBDARifleViewDelegate> realLifecycleDelegate;
@property (retain, nonatomic) BUPlayableAdJSBRegister *jsbRegister;
@property (retain, nonatomic) AWEAwemeModel *aweme;
@property (retain, nonatomic) AWEOriginalAdModel *adModel;
@property (retain, nonatomic) NSArray *processors;
@property (retain, nonatomic) NSString *accessKey;
@property (retain, nonatomic) NSString *channel;
@property (retain, nonatomic) NSString *bundle;
@property (nonatomic) BOOL lynxLoadSuccess;
@property (nonatomic) BOOL lynxLoadFirstScreen;
@property (nonatomic) BOOL lynxJSRuntimeReady;
@property (nonatomic) double firstScreenLoadTime;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy, nonatomic) NSString *currentURL;
@property (readonly, copy, nonatomic) NSString *containerID;
@property (weak, nonatomic) id<AWEBDARifleViewDelegate> lifecycleDelegate;
@property (copy, nonatomic) NSString *componentType;

- (void)handleBecomeActive;
- (void)handleResignActive;
- (id)aweme;
- (void)setAweme:(id)arg0;
- (id)adModel;
- (id)lifecycleDelegate;
- (void)setLifecycleDelegate:(id)arg0;
- (BOOL)lynxLoadSuccess;
- (BOOL)lynxLoadFirstScreen;
- (BOOL)lynxJSRuntimeReady;
- (double)firstScreenLoadTime;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0 withAweme:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0 withAdModel:(id)arg1;
- (void)updateAweme:(id)arg0;
- (void)loadURL:(id)arg0 withConfiguration:(id)arg1;
- (id)getBDXLynxView;
- (id)lynxView;
- (void)updateScreenMetrics;
- (void)setAdModel:(id)arg0;
- (void)setJsbRegister:(id)arg0;
- (id)jsbRegister;
- (void)jsbRegister:(id)arg0 registerHandlerBlock:(id /* block */)arg1 forJSMethod:(id)arg2;
- (void)jsbRegister:(id)arg0 fireEvent:(id)arg1 params:(id)arg2;
- (void)setProcessors:(id)arg0;
- (void)setLifeDelegateProxy:(id)arg0;
- (id)lifeDelegateProxy;
- (void)updateConfiguration:(id)arg0 withURLString:(id)arg1;
- (void)registerJSBPlugins;
- (void)loadSchemaModel:(id)arg0 withConfiguration:(id)arg1;
- (void)apuOpenAdLandPageLinks:(id)arg0 callback:(id /* block */)arg1;
- (void)apuSendAdLog:(id)arg0 callback:(id /* block */)arg1;
- (id)realLifecycleDelegate;
- (void)setRealLifecycleDelegate:(id)arg0;
- (void)setLynxLoadSuccess:(BOOL)arg0;
- (void)setLynxLoadFirstScreen:(BOOL)arg0;
- (void)setLynxJSRuntimeReady:(BOOL)arg0;
- (void)setFirstScreenLoadTime:(double)arg0;
- (id)bundle;
- (id)channel;
- (void)setConfig:(id)arg0;
- (void).cxx_destruct;
- (void)setChannel:(id)arg0;
- (void)setBundle:(id)arg0;
- (id)config;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (id)componentType;
- (void)setComponentType:(id)arg0;
- (id)accessKey;
- (void)setAccessKey:(id)arg0;
- (id)processors;

@end
