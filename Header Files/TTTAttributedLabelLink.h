//
//     Generated by private class-dump
//

@class NSDictionary, NSString, NSTextCheckingResult;

@interface TTTAttributedLabelLink : NSObject <NSCoding> {
    NSTextCheckingResult *_result;
    NSDictionary *_attributes;
    NSDictionary *_activeAttributes;
    NSDictionary *_inactiveAttributes;
    NSString *_accessibilityValue;
    id /* block */ _linkTapBlock;
    id /* block */ _linkLongPressBlock;
}

@property (readonly, nonatomic) NSTextCheckingResult *result;
@property (readonly, copy, nonatomic) NSDictionary *attributes;
@property (readonly, copy, nonatomic) NSDictionary *activeAttributes;
@property (readonly, copy, nonatomic) NSDictionary *inactiveAttributes;
@property (copy, nonatomic) NSString *accessibilityValue;
@property (copy, nonatomic) id /* block */ linkTapBlock;
@property (copy, nonatomic) id /* block */ linkLongPressBlock;

- (id)initWithAttributes:(id)arg0 activeAttributes:(id)arg1 inactiveAttributes:(id)arg2 textCheckingResult:(id)arg3;
- (id)activeAttributes;
- (id)inactiveAttributes;
- (id /* block */)linkTapBlock;
- (id /* block */)linkLongPressBlock;
- (id)initWithAttributesFromLabel:(id)arg0 textCheckingResult:(id)arg1;
- (void)setLinkTapBlock:(id /* block */)arg0;
- (void)setLinkLongPressBlock:(id /* block */)arg0;
- (void).cxx_destruct;
- (id)attributes;
- (id)result;
- (id)initWithCoder:(id)arg0;
- (void)encodeWithCoder:(id)arg0;
- (id)accessibilityValue;
- (void)setAccessibilityValue:(id)arg0;

@end
