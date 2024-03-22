//
//     Generated by private class-dump
//

@class NSString, NSNumber, NSDictionary;

@interface IESECLiveGoodsBackGroundLeftModel : MTLModel <MTLJSONSerializing> {
    NSString *_iconUrl;
    NSNumber *_iconWidth;
    NSNumber *_iconHeight;
    NSString *_title;
    NSString *_titleColor;
    NSNumber *_titleSize;
    NSString *_jumpURL;
    NSDictionary *_extra;
}

@property (copy, nonatomic) NSString *iconUrl;
@property (retain, nonatomic) NSNumber *iconWidth;
@property (retain, nonatomic) NSNumber *iconHeight;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *titleColor;
@property (retain, nonatomic) NSNumber *titleSize;
@property (copy, nonatomic) NSString *jumpURL;
@property (retain, nonatomic) NSDictionary *extra;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void)setExtra:(id)arg0;
- (id)iconUrl;
- (void)setIconUrl:(id)arg0;
- (void)setJumpURL:(id)arg0;
- (id)jumpURL;
- (void)setTitleSize:(id)arg0;
- (void).cxx_destruct;
- (id)titleColor;
- (id)extra;
- (id)title;
- (void)setTitleColor:(id)arg0;
- (id)iconWidth;
- (void)setTitle:(id)arg0;
- (id)iconHeight;
- (id)titleSize;
- (void)setIconWidth:(id)arg0;
- (void)setIconHeight:(id)arg0;

@end
