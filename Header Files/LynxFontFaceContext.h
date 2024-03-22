//
//     Generated by private class-dump
//

@class NSDictionary, LynxView, NSMutableDictionary;
@protocol LynxResourceFetcher, LynxResourceProvider;

@interface LynxFontFaceContext : NSObject {
    NSMutableDictionary *_dic;
    BOOL _enableLynxResourceServiceLoaderInjection;
    id<LynxResourceFetcher> _resourceFetcher;
    id<LynxResourceProvider> _resourceProvider;
    id<LynxResourceFetcher> _resourceServiceFetcher;
    LynxView *_rootView;
    NSDictionary *_builderRegistedAliasFontMap;
}

@property (weak, nonatomic) id<LynxResourceFetcher> resourceFetcher;
@property (weak, nonatomic) id<LynxResourceProvider> resourceProvider;
@property (weak, nonatomic) id<LynxResourceFetcher> resourceServiceFetcher;
@property (nonatomic) BOOL enableLynxResourceServiceLoaderInjection;
@property (weak, nonatomic) LynxView *rootView;
@property (weak, nonatomic) NSDictionary *builderRegistedAliasFontMap;

- (void)setResourceFetcher:(id)arg0;
- (id)resourceFetcher;
- (void)addFontFace:(id)arg0;
- (id)getFontFaceWithFamilyName:(id)arg0;
- (id)getGenericResourceFetcher;
- (id)resourceServiceFetcher;
- (void)setResourceServiceFetcher:(id)arg0;
- (BOOL)enableLynxResourceServiceLoaderInjection;
- (void)setEnableLynxResourceServiceLoaderInjection:(BOOL)arg0;
- (id)builderRegistedAliasFontMap;
- (void)setBuilderRegistedAliasFontMap:(id)arg0;
- (void).cxx_destruct;
- (id)resourceProvider;
- (id)rootView;
- (void)setRootView:(id)arg0;
- (void)setResourceProvider:(id)arg0;

@end