//
//     Generated by private class-dump
//

@class NSString;

@interface CJPayResultPayInfo : JSONModel {
    NSString *_typeMark;
    NSString *_amount;
    NSString *_payType;
    NSString *_desc;
    NSString *_halfScreenDesc;
    NSString *_name;
    NSString *_colorType;
    NSString *_payTypeShowName;
}

@property (copy, nonatomic) NSString *typeMark;
@property (copy, nonatomic) NSString *amount;
@property (copy, nonatomic) NSString *payType;
@property (copy, nonatomic) NSString *desc;
@property (copy, nonatomic) NSString *halfScreenDesc;
@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSString *colorType;
@property (copy, nonatomic) NSString *payTypeShowName;

+ (id)keyMapper;
+ (BOOL)propertyIsOptional:(id)arg0;

- (id)payType;
- (void)setPayType:(id)arg0;
- (id)typeMark;
- (id)payTypeShowName;
- (id)halfScreenDesc;
- (void)setTypeMark:(id)arg0;
- (void)setHalfScreenDesc:(id)arg0;
- (void)setPayTypeShowName:(id)arg0;
- (id)desc;
- (void).cxx_destruct;
- (void)setName:(id)arg0;
- (void)setDesc:(id)arg0;
- (id)name;
- (id)amount;
- (void)setAmount:(id)arg0;
- (id)colorType;
- (void)setColorType:(id)arg0;

@end
