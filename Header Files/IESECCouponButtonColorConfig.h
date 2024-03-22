//
//     Generated by private class-dump
//

@class NSString;

@interface IESECCouponButtonColorConfig : MTLModel <MTLJSONSerializing> {
    NSString *_leftTextColor;
    NSString *_rightTextColor;
    NSString *_leftBackgroundColor;
    NSString *_rightBackgroundColor;
    NSString *_borderColor;
}

@property (retain, nonatomic) NSString *leftTextColor;
@property (retain, nonatomic) NSString *rightTextColor;
@property (retain, nonatomic) NSString *leftBackgroundColor;
@property (retain, nonatomic) NSString *rightBackgroundColor;
@property (retain, nonatomic) NSString *borderColor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (id)rightTextColor;
- (void)setRightTextColor:(id)arg0;
- (id)leftTextColor;
- (void)setLeftTextColor:(id)arg0;
- (id)rightBackgroundColor;
- (id)leftBackgroundColor;
- (void)setLeftBackgroundColor:(id)arg0;
- (void)setRightBackgroundColor:(id)arg0;
- (void).cxx_destruct;
- (id)borderColor;
- (void)setBorderColor:(id)arg0;

@end