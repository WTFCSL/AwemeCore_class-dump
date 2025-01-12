//
//     Generated by private class-dump
//

@class NSArray, NSString;

@interface POIMediaPlayerAlbumModel : MTLModel <MTLJSONSerializing> {
    NSArray *_photos;
    NSString *_musicURL;
}

@property (copy, nonatomic) NSArray *photos;
@property (copy, nonatomic) NSString *musicURL;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (id)musicURL;
- (void)setMusicURL:(id)arg0;
- (void).cxx_destruct;
- (id)photos;
- (void)setPhotos:(id)arg0;

@end
