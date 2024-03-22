//
//     Generated by private class-dump
//

@class NSData, NSMutableDictionary;
@protocol LynxDynamicComponentFetcher, LynxTemplateProvider, LynxImageFetcher, LynxResourceFetcher;

@interface PuzzleContextExtraModel : NSObject {
    BOOL _disableJSRuntime;
    NSData *_templateData;
    Class _moduleClass;
    id<LynxTemplateProvider> _templateProvider;
    id<LynxImageFetcher> _imageFetcher;
    id<LynxResourceFetcher> _resourceFetcher;
    id<LynxDynamicComponentFetcher> _dynamicComponentFetcher;
    NSMutableDictionary *_customElement;
}

@property (retain, nonatomic) NSData *templateData;
@property (nonatomic) BOOL disableJSRuntime;
@property (retain, nonatomic) Class moduleClass;
@property (weak, nonatomic) id<LynxTemplateProvider> templateProvider;
@property (weak, nonatomic) id<LynxImageFetcher> imageFetcher;
@property (weak, nonatomic) id<LynxResourceFetcher> resourceFetcher;
@property (weak, nonatomic) id<LynxDynamicComponentFetcher> dynamicComponentFetcher;
@property (retain, nonatomic) NSMutableDictionary *customElement;

- (void)setTemplateData:(id)arg0;
- (id)templateData;
- (void)setImageFetcher:(id)arg0;
- (void)setResourceFetcher:(id)arg0;
- (Class)moduleClass;
- (void)setModuleClass:(Class)arg0;
- (id)resourceFetcher;
- (id)customElement;
- (void)setCustomElement:(id)arg0;
- (id)dynamicComponentFetcher;
- (void)setDynamicComponentFetcher:(id)arg0;
- (BOOL)disableJSRuntime;
- (void)setDisableJSRuntime:(BOOL)arg0;
- (void).cxx_destruct;
- (id)templateProvider;
- (void)setTemplateProvider:(id)arg0;
- (id)imageFetcher;

@end