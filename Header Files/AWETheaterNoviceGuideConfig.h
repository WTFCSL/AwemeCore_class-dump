//
//     Generated by private class-dump
//

@class NSString, AWEURLModel;

@interface AWETheaterNoviceGuideConfig : MTLModel <MTLJSONSerializing> {
    NSString *_title;
    NSString *_subtitle;
    NSString *_buttonTitle;
    NSString *_backgroundColor;
    AWEURLModel *_cover;
}

@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *subtitle;
@property (copy, nonatomic) NSString *buttonTitle;
@property (copy, nonatomic) NSString *backgroundColor;
@property (retain, nonatomic) AWEURLModel *cover;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)coverJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (id)cover;
- (void)setCover:(id)arg0;
- (void).cxx_destruct;
- (id)title;
- (id)buttonTitle;
- (id)backgroundColor;
- (id)subtitle;
- (void)setBackgroundColor:(id)arg0;
- (void)setSubtitle:(id)arg0;
- (void)setTitle:(id)arg0;
- (void)setButtonTitle:(id)arg0;

@end
