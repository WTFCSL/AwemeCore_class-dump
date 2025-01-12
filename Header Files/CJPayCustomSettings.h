//
//     Generated by private class-dump
//

@class NSString, NSDictionary;

@interface CJPayCustomSettings : JSONModel {
    NSString *_withdrawPageTitle;
    NSString *_withdrawPageMiddleText;
    NSString *_withdrawPageBottomText;
    NSDictionary *_withdrawResultPageDescDict;
    NSDictionary *_withdrawPageMiddleTextDict;
}

@property (copy, nonatomic) NSString *withdrawPageTitle;
@property (copy, nonatomic) NSString *withdrawPageMiddleText;
@property (copy, nonatomic) NSString *withdrawPageBottomText;
@property (copy, nonatomic) NSDictionary *withdrawResultPageDescDict;
@property (copy, nonatomic) NSDictionary *withdrawPageMiddleTextDict;

+ (id)keyMapper;
+ (BOOL)propertyIsOptional:(id)arg0;

- (id)withdrawPageTitle;
- (void)setWithdrawPageTitle:(id)arg0;
- (id)withdrawPageMiddleText;
- (void)setWithdrawPageMiddleText:(id)arg0;
- (id)withdrawPageBottomText;
- (void)setWithdrawPageBottomText:(id)arg0;
- (id)withdrawResultPageDescDict;
- (void)setWithdrawResultPageDescDict:(id)arg0;
- (id)withdrawPageMiddleTextDict;
- (void)setWithdrawPageMiddleTextDict:(id)arg0;
- (void).cxx_destruct;

@end
