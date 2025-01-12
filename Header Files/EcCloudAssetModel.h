//
//     Generated by private class-dump
//

@class NSString, NSArray, NSDictionary, EcMetaInfoModel;

@interface EcCloudAssetModel : EcWCDBBase <WCTTableCoding> {
    unsigned long long _cloud_id;
    long long _status;
    unsigned long long _creator;
    NSString *_mime;
    NSString *_subType;
    unsigned long long _taken_utc;
    unsigned long long _generated_at_utc;
    unsigned long long _uploaded_at_utc;
    NSArray *_ios_ids;
    long long _width;
    long long _height;
    long long _orientation;
    NSString *_source_path;
    NSArray *_tags_v2;
    NSDictionary *_photo;
    NSDictionary *_video;
    NSArray *_tagsList;
    EcMetaInfoModel *_photoInfo;
    EcMetaInfoModel *_videoInfo;
    EcMetaInfoModel *_metaInfo;
}

@property (nonatomic) unsigned long long cloud_id;
@property (nonatomic) long long status;
@property (nonatomic) unsigned long long creator;
@property (copy, nonatomic) NSString *mime;
@property (copy, nonatomic) NSString *subType;
@property (nonatomic) unsigned long long taken_utc;
@property (nonatomic) unsigned long long generated_at_utc;
@property (nonatomic) unsigned long long uploaded_at_utc;
@property (retain, nonatomic) NSArray *ios_ids;
@property (nonatomic) long long width;
@property (nonatomic) long long height;
@property (nonatomic) long long orientation;
@property (copy, nonatomic) NSString *source_path;
@property (retain, nonatomic) NSArray *tags_v2;
@property (retain, nonatomic) NSDictionary *photo;
@property (retain, nonatomic) NSDictionary *video;
@property (retain, nonatomic) NSArray *tagsList;
@property (retain, nonatomic) EcMetaInfoModel *photoInfo;
@property (retain, nonatomic) EcMetaInfoModel *videoInfo;
@property (retain, nonatomic) EcMetaInfoModel *metaInfo;

+ (id)modelCustomPropertyMapper;
+ (const void *)objectRelationalMappingForWCDB;
+ (const void *)AllProperties;
+ (const void *)AnyProperty;
+ (id /* block */)PropertyNamed;
+ (const void *)cloud_id;
+ (const void *)tags_v2;
+ (const void *)generated_at_utc;
+ (const void *)uploaded_at_utc;
+ (const void *)source_path;
+ (const void *)ios_ids;
+ (const void *)taken_utc;
+ (const void *)height;
+ (const void *)status;
+ (const void *)subType;
+ (const void *)orientation;
+ (const void *)video;
+ (const void *)width;
+ (const void *)creator;
+ (const void *)photo;
+ (const void *)mime;

- (id)videoInfo;
- (void)setVideoInfo:(id)arg0;
- (void)setTaken_utc:(unsigned long long)arg0;
- (unsigned long long)cloud_id;
- (id)tags_v2;
- (id)photoInfo;
- (unsigned long long)generated_at_utc;
- (unsigned long long)uploaded_at_utc;
- (id)source_path;
- (void)setGenerated_at_utc:(unsigned long long)arg0;
- (void)setUploaded_at_utc:(unsigned long long)arg0;
- (void)setIos_ids:(id)arg0;
- (void)setSource_path:(id)arg0;
- (void)setTags_v2:(id)arg0;
- (void)setTagsList:(id)arg0;
- (void)setPhotoInfo:(id)arg0;
- (id)tagsList;
- (void)setCloud_id:(unsigned long long)arg0;
- (id)ios_ids;
- (unsigned long long)taken_utc;
- (void).cxx_destruct;
- (void)setSubType:(id)arg0;
- (long long)height;
- (long long)status;
- (id)subType;
- (void)setVideo:(id)arg0;
- (long long)orientation;
- (void)setStatus:(long long)arg0;
- (void)setOrientation:(long long)arg0;
- (void)setWidth:(long long)arg0;
- (id)video;
- (void)setHeight:(long long)arg0;
- (long long)width;
- (unsigned long long)creator;
- (void)setCreator:(unsigned long long)arg0;
- (id)photo;
- (void)setPhoto:(id)arg0;
- (id)metaInfo;
- (void)setMetaInfo:(id)arg0;
- (id)mime;
- (void)setMime:(id)arg0;

@end
