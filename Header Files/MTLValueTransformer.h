//
//     Generated by private class-dump
//

@class NSString;

@interface MTLValueTransformer : NSValueTransformer <MTLTransformerErrorHandling> {
    id /* block */ _forwardBlock;
    id /* block */ _reverseBlock;
}

@property (readonly, copy, nonatomic) id /* block */ forwardBlock;
@property (readonly, copy, nonatomic) id /* block */ reverseBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)awe_codeGenModelTransformerWithClass:(Class)arg0;
+ (id)bdx_auth_setStringValueTransformer;
+ (id)bdx_auth_arrayStringValueTransformer;
+ (id)bdx_auth_dictionaryValueTransformerWithModelClass:(Class)arg0;
+ (id)bdx_auth_arrayOfDictionaryValueTransformerWithModelClass:(Class)arg0;
+ (BOOL)allowsReverseTransformation;
+ (Class)transformedValueClass;
+ (id)transformerUsingForwardBlock:(id /* block */)arg0 reverseBlock:(id /* block */)arg1;
+ (id)transformerUsingForwardBlock:(id /* block */)arg0;
+ (id)transformerUsingReversibleBlock:(id /* block */)arg0;
+ (id)transformerWithBlock:(id /* block */)arg0;
+ (id)reversibleTransformerWithBlock:(id /* block */)arg0;
+ (id)reversibleTransformerWithForwardBlock:(id /* block */)arg0 reverseBlock:(id /* block */)arg1;

- (void).cxx_destruct;
- (id)transformedValue:(id)arg0;
- (id)transformedValue:(id)arg0 success:(BOOL *)arg1 error:(id *)arg2;
- (id)initWithForwardBlock:(id /* block */)arg0 reverseBlock:(id /* block */)arg1;
- (id /* block */)forwardBlock;
- (id /* block */)reverseBlock;

@end
