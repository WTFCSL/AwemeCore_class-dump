//
//     Generated by private class-dump
//

@interface AWEPOICubeAdapter : NSObject {
    Class _poiLynxNativeModule;
    id /* block */ _bizGlobalPropsWithSchemaBlock;
    id /* block */ _schemaInterceptorBlock;
    id /* block */ _fetchUniqueKeyBlock;
}

@property (retain, nonatomic) Class poiLynxNativeModule;
@property (copy, nonatomic) id /* block */ bizGlobalPropsWithSchemaBlock;
@property (copy, nonatomic) id /* block */ schemaInterceptorBlock;
@property (copy, nonatomic) id /* block */ fetchUniqueKeyBlock;

+ (id)sharedInstance;

- (Class)poiLynxNativeModule;
- (void)setPoiLynxNativeModule:(Class)arg0;
- (id /* block */)bizGlobalPropsWithSchemaBlock;
- (void)setBizGlobalPropsWithSchemaBlock:(id /* block */)arg0;
- (id /* block */)schemaInterceptorBlock;
- (void)setSchemaInterceptorBlock:(id /* block */)arg0;
- (id /* block */)fetchUniqueKeyBlock;
- (void)setFetchUniqueKeyBlock:(id /* block */)arg0;
- (void).cxx_destruct;

@end
