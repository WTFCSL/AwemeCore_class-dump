//
//     Generated by private class-dump
//

@class NSString;

@interface CJPayCardSignInfoModel : JSONModel {
    NSString *_sign;
    NSString *_signOrderNo;
    NSString *_smchId;
}

@property (copy, nonatomic) NSString *sign;
@property (copy, nonatomic) NSString *signOrderNo;
@property (copy, nonatomic) NSString *smchId;

+ (id)keyMapper;
+ (BOOL)propertyIsOptional:(id)arg0;

- (id)sign;
- (void)setSign:(id)arg0;
- (id)signOrderNo;
- (void)setSignOrderNo:(id)arg0;
- (id)smchId;
- (void)setSmchId:(id)arg0;
- (void).cxx_destruct;

@end
