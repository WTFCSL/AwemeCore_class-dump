//
//     Generated by private class-dump
//

@class NSDictionary, BDXContext, NSString;

@interface AnnieLiveBizSchema : NSObject <BDSchemaInterceptorProtocol> {
    NSDictionary *_params;
    BDXContext *_context;
}

@property (copy, nonatomic) NSDictionary *params;
@property (retain, nonatomic) BDXContext *context;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)convertLiveSchemaToAnnie:(id)arg0;
+ (id)addSchemaParamsToAnnie:(id)arg0;
+ (id)convertSchemaParamsToAnnie:(id)arg0;
+ (BOOL)disableUseForest:(id)arg0;
+ (BOOL)enableDefaultForestPreload;

- (void)handleContextWithSchemaData:(id)arg0 context:(id)arg1;
- (double)parseWidth;
- (double)parseHeight:(id)arg0;
- (BOOL)isPadAdaptionMode;
- (BOOL)isLightModeForPageWithSchemaParam:(id)arg0;
- (long long)modeForPageWithSchemaParam:(id)arg0;
- (BOOL)isPadAdaptionMode:(id)arg0;
- (BOOL)isUrlInLightAdapterAllowList:(id)arg0;
- (BOOL)shouldUseLandscapeSize;
- (BOOL)isIpadPortraitMode;
- (BOOL)hasRightOrBottomMargin;
- (BOOL)isBottomPopup;
- (double)upStatusBarHeight;
- (double)homeIndicatorHeight:(id)arg0;
- (BOOL)isLightModeForPopup;
- (double)defaultHeight;
- (void).cxx_destruct;
- (void)setContext:(id)arg0;
- (id)context;
- (BOOL)isLandscape;
- (id)params;
- (id)errorMessage;
- (double)defaultWidth;
- (void)setParams:(id)arg0;
- (BOOL)convert:(id)arg0;

@end
