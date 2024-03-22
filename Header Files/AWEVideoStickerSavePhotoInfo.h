//
//     Generated by private class-dump
//

@class NSArray, NSString;

@interface AWEVideoStickerSavePhotoInfo : MTLModel <MTLJSONSerializing> {
    BOOL _shouldRemoveLabel;
    NSArray *_photoNames;
    NSString *_toastText;
    NSString *_waterMarkPath;
}

@property (copy, nonatomic) NSArray *photoNames;
@property (copy, nonatomic) NSString *toastText;
@property (copy, nonatomic) NSString *waterMarkPath;
@property (nonatomic) BOOL shouldRemoveLabel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (id)toastText;
- (void)setToastText:(id)arg0;
- (id)propSavePhoto;
- (id)waterMarkPath;
- (void)setWaterMarkPath:(id)arg0;
- (BOOL)shouldRemoveLabel;
- (void)setShouldRemoveLabel:(BOOL)arg0;
- (id)photoNames;
- (void)setPhotoNames:(id)arg0;
- (id)initWithPropSavePhoto:(id)arg0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)arg0;

@end