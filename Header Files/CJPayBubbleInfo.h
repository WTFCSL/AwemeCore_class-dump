//
//     Generated by private class-dump
//

@class NSDictionary;

@interface CJPayBubbleInfo : JSONModel {
    NSDictionary *_button;
    NSDictionary *_paytype;
}

@property (copy, nonatomic) NSDictionary *button;
@property (copy, nonatomic) NSDictionary *paytype;

+ (id)keyMapper;
+ (BOOL)propertyIsOptional:(id)arg0;

- (id)bubbleInfoStringWithType:(unsigned long long)arg0;
- (id)p_getBubbleInfo:(unsigned long long)arg0;
- (id)paytype;
- (void)setPaytype:(id)arg0;
- (void).cxx_destruct;
- (id)button;
- (void)setButton:(id)arg0;

@end