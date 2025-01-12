//
//     Generated by private class-dump
//

@class NSMutableDictionary;

@interface ACCAdvanceEditResourceRegister : NSObject {
    NSMutableDictionary *_resourceIdToPath;
    NSMutableDictionary *_resourceIdToEffect;
}

@property (retain, nonatomic) NSMutableDictionary *resourceIdToPath;
@property (retain, nonatomic) NSMutableDictionary *resourceIdToEffect;

+ (id)sharedRegister;

- (void)registResourceId:(id)arg0 effectModel:(id)arg1;
- (id)pathForResourceId:(id)arg0;
- (id)resourceIdToPath;
- (id)resourceIdToEffect;
- (id)effectForResourceId:(id)arg0;
- (void)setResourceIdToPath:(id)arg0;
- (void)setResourceIdToEffect:(id)arg0;
- (id)init;
- (void).cxx_destruct;

@end
