//
//     Generated by private class-dump
//

@class NSString;

@interface AWEU18VerificationLogEventModel : AWEBaseApiModel <NSSecureCoding> {
    NSString *_enterFrom;
    NSString *_scene;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *enterFrom;
@property (copy, nonatomic) NSString *scene;

+ (BOOL)supportsSecureCoding;
+ (id)JSONKeyPathsByPropertyKey;

- (void)setEnterFrom:(id)arg0;
- (id)enterFrom;
- (void)setScene:(id)arg0;
- (void).cxx_destruct;
- (id)scene;

@end
