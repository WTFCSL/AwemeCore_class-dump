//
//     Generated by private class-dump
//

@class NSString;

@interface AWERepoImageTemplateInfoModel : NSObject {
    NSString *_uniqueId;
    NSString *_originImgPath;
    NSString *_imageTemplateId;
    NSString *_editDataInfo;
    NSString *_editDataInfoPath;
    NSString *_mediaId;
}

@property (copy, nonatomic) NSString *uniqueId;
@property (copy, nonatomic) NSString *originImgPath;
@property (copy, nonatomic) NSString *imageTemplateId;
@property (copy, nonatomic) NSString *editDataInfo;
@property (copy, nonatomic) NSString *editDataInfoPath;
@property (copy, nonatomic) NSString *mediaId;

- (id)originImgPath;
- (void)setOriginImgPath:(id)arg0;
- (id)imageTemplateId;
- (void)setImageTemplateId:(id)arg0;
- (void)setEditDataInfoPath:(id)arg0;
- (id)editDataInfoPath;
- (void)setEditDataInfo:(id)arg0;
- (id)editDataInfo;
- (id)init;
- (id)uniqueId;
- (void)setUniqueId:(id)arg0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)arg0;
- (id)mediaId;
- (void)setMediaId:(id)arg0;

@end
