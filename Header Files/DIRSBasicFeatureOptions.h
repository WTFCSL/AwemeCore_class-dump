//
//     Generated by private class-dump
//

@class NSString, DIRSConcurrentCollection, DIRSContext;

@interface DIRSBasicFeatureOptions : DIRSBasicModule <IRISModule, IRISParameterHandler> {
    DIRSConcurrentCollection *featureOptions;
}

@property BOOL isEnabled;
@property long long state;
@property (readonly) DIRSContext *context;
@property (copy, nonatomic) NSString *category;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)moduleId;
+ (id)moduleVersion;

- (id)exportFeatureOptions;
- (void)addFeatureOptions:(id)arg0;
- (void)removeFeatureOptionsKeys:(id)arg0;
- (void).cxx_destruct;
- (void)commonInit;

@end