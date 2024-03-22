//
//     Generated by private class-dump
//

@class LynxView;
@protocol BDXLynxResourceProviderDelegate, LynxTemplateProvider;

@protocol BDXLynxResourceProviderProtocol <LynxTemplateProvider, LynxImageFetcher, LynxDynamicComponentFetcher, LynxResourceFetcher, LynxResourceProvider>

@property (weak, nonatomic) LynxView *lynxView;
@property (weak, nonatomic) id<BDXLynxResourceProviderDelegate> delegate;
@property (weak, nonatomic) id<LynxTemplateProvider> customTemplateProvider;

- (id)lynxView;
- (void)setLynxView:(id)arg0;
- (void)updateLoaderConfig:(id)arg0;
- (void)updateWithLynxParams:(id)arg0;
- (id)customTemplateProvider;
- (id)initWithLynxParams:(id)arg0;
- (void)setCustomTemplateProvider:(id)arg0;
- (id)delegate;
- (void)setDelegate:(id)arg0;

@end
