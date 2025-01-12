//
//     Generated by private class-dump
//

@class NSString;

@interface AWEU18VerificationResourceModel : AWEBaseApiModel <NSSecureCoding> {
    NSString *_title;
    NSString *_content;
    NSString *_imageURLStr;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *content;
@property (copy, nonatomic) NSString *imageURLStr;

+ (BOOL)supportsSecureCoding;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;
- (id)content;
- (id)title;
- (void)setContent:(id)arg0;
- (void)setTitle:(id)arg0;
- (id)imageURLStr;
- (void)setImageURLStr:(id)arg0;

@end
