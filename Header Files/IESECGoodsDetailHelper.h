//
//     Generated by private class-dump
//

@interface IESECGoodsDetailHelper : NSObject

+ (void)showGoodsDetail:(id)arg0;
+ (void)preRequestWithParams:(id)arg0;
+ (id)entranceInfoJSONStringFromRequest:(id)arg0;
+ (id)mergedMetaParamFromMetaParams:(id)arg0 entranceInfoJSONString:(id)arg1;
+ (id)requestWithSchema:(id)arg0;
+ (void)addNativeParams:(id)arg0;
+ (void)showPDPWithRequest:(id)arg0;
+ (void)reportFissionBackFlowIfNeededWithParams:(id)arg0 secActivityInfo:(id)arg1;
+ (void)trackReflowEvent:(id)arg0;
+ (id)setupParametersWithNewRequest:(id)arg0;
+ (void)registerServiceForParameters:(id)arg0;
+ (void)showPdpWithSchemaBuilder:(id)arg0;
+ (id)pdpType:(id)arg0;
+ (void)trackGoodsDetailStartWithRequest:(id)arg0;
+ (void)trackGoodsDetailShowWithRequest:(id)arg0 status:(id)arg1 extraParams:(id)arg2;
+ (id)eztfEnterParams:(id)arg0;
+ (void)showGoodsDetailWithPreview:(id)arg0;
+ (id)parametersSetup:(id)arg0;
+ (void)showLiveFloatOnTopIfNeeded:(id)arg0 containerViewController:(id)arg1 from:(id)arg2;
+ (void)showGoodsDetailWithParams:(id)arg0 source:(id)arg1 completion:(id /* block */)arg2;
+ (void)showParams:(id)arg0 from:(id)arg1 qualityInfo:(id)arg2 completion:(id /* block */)arg3;

@end
