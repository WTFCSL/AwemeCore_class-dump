//
//     Generated by private class-dump
//

@class NSString, UIImage;

@interface BDUGLuckyTabConf : BDUGLuckyJSONModel {
    NSString *_iconUrl;
    UIImage *_iconImage;
    NSString *_iconContent;
    NSString *_iconSize;
}

@property (copy, nonatomic) NSString *iconUrl;
@property (retain, nonatomic) UIImage *iconImage;
@property (copy, nonatomic) NSString *iconContent;
@property (copy, nonatomic) NSString *iconSize;

+ (id)modelCustomPropertyMapper;

- (id)iconUrl;
- (void)setIconUrl:(id)arg0;
- (id)iconContent;
- (void)setIconContent:(id)arg0;
- (void)setIconSize:(id)arg0;
- (id)iconSize;
- (id)iconImage;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)arg0;
- (id)hashString;
- (void)setIconImage:(id)arg0;

@end
