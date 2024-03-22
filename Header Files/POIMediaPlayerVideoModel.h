//
//     Generated by private class-dump
//

@class NSString, NSNumber, NSArray;

@interface POIMediaPlayerVideoModel : MTLModel <MTLJSONSerializing> {
    NSString *_vid;
    NSNumber *_width;
    NSNumber *_height;
    NSNumber *_urlExpire;
    NSArray *_playURLList;
    NSString *_posterImage;
    NSString *_musicURL;
}

@property (copy, nonatomic) NSString *vid;
@property (retain, nonatomic) NSNumber *width;
@property (retain, nonatomic) NSNumber *height;
@property (retain, nonatomic) NSNumber *urlExpire;
@property (copy, nonatomic) NSArray *playURLList;
@property (copy, nonatomic) NSString *posterImage;
@property (copy, nonatomic) NSString *musicURL;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (id)vid;
- (void)setVid:(id)arg0;
- (id)playURLList;
- (id)musicURL;
- (void)setMusicURL:(id)arg0;
- (void)setUrlExpire:(id)arg0;
- (id)urlExpire;
- (void)setPlayURLList:(id)arg0;
- (void).cxx_destruct;
- (id)height;
- (id)posterImage;
- (void)setWidth:(id)arg0;
- (void)setHeight:(id)arg0;
- (id)width;
- (void)setPosterImage:(id)arg0;

@end
