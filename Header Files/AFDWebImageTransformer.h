//
//     Generated by private class-dump
//

@class NSString;

@interface AFDWebImageTransformer : NSObject <AWEWebImageTransformProtocol> {
    double _cornerRadius;
    NSString *_extCacheKey;
    struct CGSize { double width; double height; } _size;
}

@property (nonatomic) double cornerRadius;
@property (nonatomic) struct CGSize { double width; double height; } size;
@property (copy, nonatomic) NSString *extCacheKey;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)transformWithSize:(struct CGSize { double x0; double x1; })arg0 cornerRadius:(double)arg1;

- (id)appendingStringForCacheKey;
- (id)transformImageBeforeStoreWithImage:(id)arg0;
- (void)setExtCacheKey:(id)arg0;
- (id)extCacheKey;
- (void).cxx_destruct;
- (double)cornerRadius;
- (struct CGSize { double x0; double x1; })size;
- (void)setSize:(struct CGSize { double x0; double x1; })arg0;
- (void)setCornerRadius:(double)arg0;

@end
