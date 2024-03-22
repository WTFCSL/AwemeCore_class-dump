//
//     Generated by private class-dump
//

@class NSString, NSArray, UIImage, NSNumber;

@interface IESLiveEmoticonModel : IESLiveDynamicMTLModel {
    BOOL _isCustom;
    NSString *_emoticonID;
    NSString *_emoticonGroupID;
    NSString *_defaultEmoticonTitle;
    NSArray *_relatedWords;
    NSArray *_imageUrlList;
    UIImage *_cachedEmoticonImage;
    NSNumber *_identifier;
    NSNumber *_width;
    NSNumber *_height;
    NSString *_localPath;
    NSString *_display_name;
    NSString *_animate_url;
    NSString *_static_url;
    NSString *_animate_uri;
    NSString *_static_uri;
    NSString *_static_type;
    NSString *_animate_type;
}

@property (copy, nonatomic) NSString *emoticonIcon;
@property (copy, nonatomic) NSString *emoticonTitle;
@property (copy, nonatomic) NSString *resourcePath;
@property (nonatomic) BOOL hide;
@property (nonatomic) unsigned long long type;
@property (copy, nonatomic) NSString *emoticonID;
@property (copy, nonatomic) NSString *emoticonGroupID;
@property (copy, nonatomic) NSString *defaultEmoticonTitle;
@property (copy, nonatomic) NSArray *relatedWords;
@property (copy, nonatomic) NSArray *imageUrlList;
@property (retain, nonatomic) UIImage *cachedEmoticonImage;
@property (retain, nonatomic) NSNumber *identifier;
@property (retain, nonatomic) NSNumber *width;
@property (retain, nonatomic) NSNumber *height;
@property (copy, nonatomic) NSString *localPath;
@property (nonatomic) BOOL isCustom;
@property (copy, nonatomic) NSString *display_name;
@property (copy, nonatomic) NSString *animate_url;
@property (copy, nonatomic) NSString *static_url;
@property (copy, nonatomic) NSString *animate_uri;
@property (copy, nonatomic) NSString *static_uri;
@property (retain, nonatomic) NSString *static_type;
@property (retain, nonatomic) NSString *animate_type;

- (id)imageUrlList;
- (id)display_name;
- (void)setDisplay_name:(id)arg0;
- (void)setImageUrlList:(id)arg0;
- (id)animate_type;
- (id)animate_url;
- (id)animate_uri;
- (id)static_url;
- (id)static_uri;
- (id)static_type;
- (void)setAnimate_url:(id)arg0;
- (void)setStatic_url:(id)arg0;
- (void)setStatic_type:(id)arg0;
- (void)setAnimate_type:(id)arg0;
- (void)setAnimate_uri:(id)arg0;
- (void)setStatic_uri:(id)arg0;
- (id)relatedWords;
- (void)setRelatedWords:(id)arg0;
- (id)initWithDefaultEmoticonTitle:(id)arg0 emoticonTitle:(id)arg1;
- (id)mapEmotionJson;
- (id)emoticonID;
- (void)setEmoticonID:(id)arg0;
- (id)emoticonGroupID;
- (void)setEmoticonGroupID:(id)arg0;
- (id)defaultEmoticonTitle;
- (void)setDefaultEmoticonTitle:(id)arg0;
- (id)cachedEmoticonImage;
- (void)setCachedEmoticonImage:(id)arg0;
- (id)init;
- (void).cxx_destruct;
- (id)height;
- (id)identifier;
- (void)setWidth:(id)arg0;
- (void)setHeight:(id)arg0;
- (id)width;
- (void)setIdentifier:(id)arg0;
- (id)localPath;
- (BOOL)isCustom;
- (void)setIsCustom:(BOOL)arg0;
- (void)setLocalPath:(id)arg0;

@end
