//
//     Generated by private class-dump
//

@interface IESECCartBusinessLineCount : IESECBaseApiModel {
    long long _businessLineID;
    long long _cartCount;
}

@property (nonatomic) long long businessLineID;
@property (nonatomic) long long cartCount;

+ (id)JSONKeyPathsByPropertyKey;

- (long long)cartCount;
- (void)setCartCount:(long long)arg0;
- (long long)businessLineID;
- (void)setBusinessLineID:(long long)arg0;

@end
