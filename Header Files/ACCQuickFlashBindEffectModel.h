//
//     Generated by private class-dump
//

@class NSNumber, NSString, NSArray;

@interface ACCQuickFlashBindEffectModel : MTLModel <MTLJSONSerializing> {
    NSNumber *_statusCode;
    NSString *_statusMsg;
    NSArray *_bindedModels;
}

@property (retain, nonatomic) NSNumber *statusCode;
@property (retain, nonatomic) NSString *statusMsg;
@property (retain, nonatomic) NSArray *bindedModels;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)bindedModelsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (id)statusMsg;
- (void)setStatusMsg:(id)arg0;
- (id)bindedModels;
- (void)setBindedModels:(id)arg0;
- (id)statusCode;
- (void)setStatusCode:(id)arg0;
- (void).cxx_destruct;

@end
