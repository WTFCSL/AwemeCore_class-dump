//
//     Generated by private class-dump
//

@class NSString;

@interface CJPaySignCardInfo : JSONModel {
    NSString *_titleMsg;
    NSString *_buttonText;
}

@property (copy, nonatomic) NSString *titleMsg;
@property (copy, nonatomic) NSString *buttonText;

+ (id)keyMapper;
+ (BOOL)propertyIsOptional:(id)arg0;

- (id)titleMsg;
- (void)setTitleMsg:(id)arg0;
- (void).cxx_destruct;
- (id)buttonText;
- (void)setButtonText:(id)arg0;

@end