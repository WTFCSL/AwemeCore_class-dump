//
//     Generated by private class-dump
//

@class NSNumber, NSString;

@interface BDXBridgeCreatePOIMediaMaterials : BDXBridgeModel {
    NSNumber *_mediaType;
    NSString *_filePath;
    NSString *_imageBase64;
    NSString *_vid;
}

@property (retain, nonatomic) NSNumber *mediaType;
@property (copy, nonatomic) NSString *filePath;
@property (copy, nonatomic) NSString *imageBase64;
@property (copy, nonatomic) NSString *vid;

+ (id)JSONKeyPathsByPropertyKey;

- (id)vid;
- (void)setVid:(id)arg0;
- (void)setImageBase64:(id)arg0;
- (id)imageBase64;
- (void)setMediaType:(id)arg0;
- (id)filePath;
- (void).cxx_destruct;
- (void)setFilePath:(id)arg0;
- (id)mediaType;

@end
