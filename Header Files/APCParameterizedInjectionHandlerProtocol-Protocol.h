//
//     Generated by private class-dump
//

@class NSString, NSArray;

@protocol APCParameterizedInjectionHandlerProtocol <APCBaseInjectionHandlerProtocol>

@property (copy, nonatomic) id /* block */ beforeTransition;
@property (copy, nonatomic) id /* block */ customTransition;
@property (nonatomic) BOOL disableLoading;
@property (copy, nonatomic) NSString *loadingTitle;
@property (copy, nonatomic) NSString *sourceURL;
@property (copy, nonatomic) NSArray *inputAssets;

- (void)setNativeConfigByClass:(id)arg0;
- (void)setDisableLoading:(BOOL)arg0;
- (void)setCustomTransition:(id /* block */)arg0;
- (id /* block */)customTransition;
- (id)injectionUnitManager;
- (id /* block */)beforeTransition;
- (void)setBeforeTransition:(id /* block */)arg0;
- (BOOL)disableLoading;
- (id)inputAssets;
- (void)setInputAssets:(id)arg0;
- (id)sourceURL;
- (void)setSourceURL:(id)arg0;
- (void)setLoadingTitle:(id)arg0;
- (id)loadingTitle;

@end
