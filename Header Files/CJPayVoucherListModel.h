//
//     Generated by private class-dump
//

@class NSString;

@interface CJPayVoucherListModel : JSONModel {
    NSString *_mixVoucherMsg;
    NSString *_basicVoucherMsg;
}

@property (copy, nonatomic) NSString *mixVoucherMsg;
@property (copy, nonatomic) NSString *basicVoucherMsg;

+ (id)keyMapper;
+ (BOOL)propertyIsOptional:(id)arg0;

- (id)mixVoucherMsg;
- (id)basicVoucherMsg;
- (void)setMixVoucherMsg:(id)arg0;
- (void)setBasicVoucherMsg:(id)arg0;
- (void).cxx_destruct;

@end
