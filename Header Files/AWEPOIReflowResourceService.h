//
//     Generated by private class-dump
//

@class NSMutableDictionary, NSMutableArray;

@interface AWEPOIReflowResourceService : NSObject {
    BOOL _bInterceptor;
    NSMutableDictionary *_configs;
    NSMutableArray *_components;
}

@property (retain, nonatomic) NSMutableDictionary *configs;
@property (retain, nonatomic) NSMutableArray *components;
@property (nonatomic) BOOL bInterceptor;

- (void)setConfigs:(id)arg0;
- (void)setupReflowConfig;
- (void)filterReflowComponent;
- (void)setupReflowComponent;
- (void)setBInterceptor:(BOOL)arg0;
- (id)shareReflowComponent;
- (id)findReflowComponentWithSchema:(id)arg0;
- (BOOL)switchRouterWithComponent:(id)arg0 schema:(id)arg1;
- (BOOL)bInterceptor;
- (id)components;
- (id)init;
- (void).cxx_destruct;
- (void)setComponents:(id)arg0;
- (id)configs;

@end
