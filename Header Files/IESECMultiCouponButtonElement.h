//
//     Generated by private class-dump
//

@class NSArray, NSString;

@interface IESECMultiCouponButtonElement : MTLModel <MTLJSONSerializing> {
    double _space;
    long long _leadingSpace;
    NSArray *_couponButtonElementList;
    long long _couponType;
}

@property (nonatomic) double space;
@property (nonatomic) long long leadingSpace;
@property (copy, nonatomic) NSArray *couponButtonElementList;
@property (nonatomic) long long couponType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)couponButtonElementListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (long long)couponType;
- (void)setCouponType:(long long)arg0;
- (id)couponButtonElementList;
- (void)setCouponButtonElementList:(id)arg0;
- (void).cxx_destruct;
- (double)space;
- (long long)leadingSpace;
- (void)setLeadingSpace:(long long)arg0;
- (void)setSpace:(double)arg0;

@end
