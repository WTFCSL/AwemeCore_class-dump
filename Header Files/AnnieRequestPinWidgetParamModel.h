//
//     Generated by private class-dump
//

@interface AnnieRequestPinWidgetParamModel : IESLiveBridgeModel {
    long long _operation;
    long long _key;
}

@property (nonatomic) long long operation;
@property (nonatomic) long long key;

+ (id)modelCustomPropertyMapper;

- (BOOL)modelCustomTransformFromDictionary:(id)arg0;
- (void)setOperation:(long long)arg0;
- (long long)key;
- (long long)operation;
- (void)setKey:(long long)arg0;

@end
