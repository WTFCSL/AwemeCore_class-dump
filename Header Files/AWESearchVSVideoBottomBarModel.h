//
//     Generated by private class-dump
//

@class NSString, AWEURLModel;

@interface AWESearchVSVideoBottomBarModel : AWEBaseApiModel {
    NSString *_title;
    NSString *_subTitle;
    AWEURLModel *_posterURL;
    NSString *_linkTo;
}

@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *subTitle;
@property (retain, nonatomic) AWEURLModel *posterURL;
@property (copy, nonatomic) NSString *linkTo;

+ (id)posterURLJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (id)posterURL;
- (void)setPosterURL:(id)arg0;
- (id)linkTo;
- (void)setLinkTo:(id)arg0;
- (void).cxx_destruct;
- (id)title;
- (void)setSubTitle:(id)arg0;
- (id)subTitle;
- (void)setTitle:(id)arg0;

@end
