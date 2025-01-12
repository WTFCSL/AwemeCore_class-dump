//
//     Generated by private class-dump
//

@class NSString, NSNumber, AWEURLModel;

@interface AWEVideoTagModel : AWEBaseApiModel {
    long long _type;
    NSString *_title;
    NSString *_textColor;
    NSString *_backgroundColor;
    AWEURLModel *_iconImageURL;
    NSNumber *_leftRightPadding;
}

@property (nonatomic) long long type;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *textColor;
@property (copy, nonatomic) NSString *backgroundColor;
@property (copy, nonatomic) AWEURLModel *iconImageURL;
@property (retain, nonatomic) NSNumber *leftRightPadding;

+ (id)iconImageURLJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (id)leftRightPadding;
- (void)setLeftRightPadding:(id)arg0;
- (void).cxx_destruct;
- (long long)type;
- (id)title;
- (void)setType:(long long)arg0;
- (id)backgroundColor;
- (void)setTextColor:(id)arg0;
- (void)setBackgroundColor:(id)arg0;
- (id)textColor;
- (void)setTitle:(id)arg0;
- (id)iconImageURL;
- (void)setIconImageURL:(id)arg0;

@end
