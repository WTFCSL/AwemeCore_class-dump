//
//     Generated by private class-dump
//

@class NSString;

@interface CJPayOCRFileResponseModel : JSONModel {
    NSString *_mediaType;
    NSString *_size;
    NSString *_filePath;
    NSString *_metaFile;
    NSString *_metaFilePrefix;
}

@property (copy, nonatomic) NSString *mediaType;
@property (copy, nonatomic) NSString *size;
@property (copy, nonatomic) NSString *filePath;
@property (copy, nonatomic) NSString *metaFile;
@property (copy, nonatomic) NSString *metaFilePrefix;

+ (id)keyMapper;
+ (BOOL)propertyIsOptional:(id)arg0;

- (void)setMetaFilePrefix:(id)arg0;
- (void)setMetaFile:(id)arg0;
- (id)metaFile;
- (id)metaFilePrefix;
- (void)setMediaType:(id)arg0;
- (id)filePath;
- (void).cxx_destruct;
- (void)setFilePath:(id)arg0;
- (id)mediaType;
- (id)size;
- (void)setSize:(id)arg0;

@end
