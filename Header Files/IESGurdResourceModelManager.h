//
//     Generated by private class-dump
//

@class NSMutableDictionary;

@interface IESGurdResourceModelManager : NSObject {
    NSMutableDictionary *_resourceModelsMap;
}

@property (retain, nonatomic) NSMutableDictionary *resourceModelsMap;

+ (id)sharedManager;

- (void)addModels:(id)arg0;
- (id)modelsWithLazyParams:(id)arg0;
- (void)removeModel:(id)arg0 channel:(id)arg1 version:(unsigned long long)arg2;
- (id)getModel:(id)arg0 channel:(id)arg1;
- (void)removeModel:(id)arg0 channel:(id)arg1;
- (void)setResourceModelsMap:(id)arg0;
- (id)resourceModelsMap;
- (void)addModelWithoutLock:(id)arg0;
- (void).cxx_destruct;
- (void)addModel:(id)arg0;

@end
