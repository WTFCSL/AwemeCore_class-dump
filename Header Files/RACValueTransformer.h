//
//     Generated by private class-dump
//

@interface RACValueTransformer : NSValueTransformer {
    id /* block */ transformBlock;
}

@property (copy, nonatomic) id /* block */ transformBlock;

+ (BOOL)allowsReverseTransformation;
+ (id)transformerWithBlock:(id /* block */)arg0;

- (void).cxx_destruct;
- (id)transformedValue:(id)arg0;
- (id /* block */)transformBlock;
- (void)setTransformBlock:(id /* block */)arg0;

@end
