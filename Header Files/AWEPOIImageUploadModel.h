//
//     Generated by private class-dump
//

@class NSString, AWEPOICoverImageModel;

@interface AWEPOIImageUploadModel : AWEBaseApiModel {
    BOOL _show;
    NSString *_title;
    AWEPOICoverImageModel *_coverImage;
}

@property (nonatomic) BOOL show;
@property (copy, nonatomic) NSString *title;
@property (retain, nonatomic) AWEPOICoverImageModel *coverImage;

+ (id)JSONKeyPathsByPropertyKey;

- (void)setCoverImage:(id)arg0;
- (void).cxx_destruct;
- (BOOL)show;
- (id)title;
- (void)setTitle:(id)arg0;
- (void)setShow:(BOOL)arg0;
- (id)coverImage;

@end
