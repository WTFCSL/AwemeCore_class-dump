//
//     Generated by private class-dump
//

@class NSString, NSNumber;

@interface IESECAddToCartResponse : IESECBaseApiModel {
    NSString *_msg;
    NSString *_cartID;
    NSNumber *_cartNum;
}

@property (copy, nonatomic) NSString *msg;
@property (copy, nonatomic) NSString *cartID;
@property (retain, nonatomic) NSNumber *cartNum;

+ (id)JSONKeyPathsByPropertyKey;

- (id)cartNum;
- (void)setCartNum:(id)arg0;
- (id)cartID;
- (void)setCartID:(id)arg0;
- (void).cxx_destruct;
- (id)msg;
- (void)setMsg:(id)arg0;

@end