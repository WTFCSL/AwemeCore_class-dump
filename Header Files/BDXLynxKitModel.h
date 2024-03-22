//
//     Generated by private class-dump
//

@class BDIntegerParam, BDStringParam, BDDoubleParam, NSString, BDBooleanParam;

@interface BDXLynxKitModel : NSObject <BDSchemaModelProtocol> {
    BDStringParam *_bundle;
    BDStringParam *_channel;
    BDStringParam *_durl;
    BDBooleanParam *_disableAutoExpose;
    BDBooleanParam *_disableJsCtxShare;
    BDBooleanParam *_disableShare;
    BDIntegerParam *_dynamic;
    BDStringParam *_geckoUpdatePolicy;
    BDBooleanParam *_enableCanvas;
    BDBooleanParam *_enableCanvasOptimization;
    BDBooleanParam *_enableAnimaX;
    BDStringParam *_group;
    BDStringParam *_initialData;
    BDDoubleParam *_lynxPresetHeight;
    BDDoubleParam *_lynxPresetWidth;
    BDBooleanParam *_presetSafePoint;
    BDStringParam *_surl;
    BDIntegerParam *_threadStrategy;
    BDBooleanParam *_enableAirStrictMode;
    BDStringParam *_url;
    BDBooleanParam *_prefetchToGlobalProps;
}

@property (retain, nonatomic) BDStringParam *bundle;
@property (retain, nonatomic) BDStringParam *channel;
@property (retain, nonatomic) BDStringParam *durl;
@property (retain, nonatomic) BDBooleanParam *disableAutoExpose;
@property (retain, nonatomic) BDBooleanParam *disableJsCtxShare;
@property (retain, nonatomic) BDBooleanParam *disableShare;
@property (retain, nonatomic) BDIntegerParam *dynamic;
@property (retain, nonatomic) BDStringParam *geckoUpdatePolicy;
@property (retain, nonatomic) BDBooleanParam *enableCanvas;
@property (retain, nonatomic) BDBooleanParam *enableCanvasOptimization;
@property (retain, nonatomic) BDBooleanParam *enableAnimaX;
@property (retain, nonatomic) BDStringParam *group;
@property (retain, nonatomic) BDStringParam *initialData;
@property (retain, nonatomic) BDDoubleParam *lynxPresetHeight;
@property (retain, nonatomic) BDDoubleParam *lynxPresetWidth;
@property (retain, nonatomic) BDBooleanParam *presetSafePoint;
@property (retain, nonatomic) BDStringParam *surl;
@property (retain, nonatomic) BDIntegerParam *threadStrategy;
@property (retain, nonatomic) BDBooleanParam *enableAirStrictMode;
@property (retain, nonatomic) BDStringParam *url;
@property (retain, nonatomic) BDBooleanParam *prefetchToGlobalProps;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)modelWithSchemaData:(id)arg0;

- (id)initialData;
- (void)setInitialData:(id)arg0;
- (id)disableShare;
- (id)surl;
- (void)setSurl:(id)arg0;
- (void)updateWithSchemaData:(id)arg0;
- (id)enableCanvas;
- (void)setEnableCanvas:(id)arg0;
- (void)setDisableShare:(id)arg0;
- (void)setEnableAirStrictMode:(id)arg0;
- (id)threadStrategy;
- (void)setThreadStrategy:(id)arg0;
- (id)disableAutoExpose;
- (void)setDisableAutoExpose:(id)arg0;
- (id)disableJsCtxShare;
- (id)enableAirStrictMode;
- (id)presetSafePoint;
- (id)lynxPresetWidth;
- (id)lynxPresetHeight;
- (id)prefetchToGlobalProps;
- (void)setPrefetchToGlobalProps:(id)arg0;
- (id)enableCanvasOptimization;
- (id)durl;
- (id)enableAnimaX;
- (void)setEnableAnimaX:(id)arg0;
- (id)geckoUpdatePolicy;
- (void)setGeckoUpdatePolicy:(id)arg0;
- (void)setDurl:(id)arg0;
- (void)setDisableJsCtxShare:(id)arg0;
- (void)setEnableCanvasOptimization:(id)arg0;
- (void)setLynxPresetHeight:(id)arg0;
- (void)setLynxPresetWidth:(id)arg0;
- (void)setPresetSafePoint:(id)arg0;
- (id)bundle;
- (id)channel;
- (void).cxx_destruct;
- (void)setChannel:(id)arg0;
- (void)setBundle:(id)arg0;
- (void)setUrl:(id)arg0;
- (id)group;
- (id)url;
- (void)setGroup:(id)arg0;
- (id)dynamic;
- (void)setDynamic:(id)arg0;

@end