//
//     Generated by private class-dump
//

@class NSDictionary, NSString;

@interface IESECHeadVideoExtraInfoHeadVideoModel : MTLModel <MTLJSONSerializing> {
    long long _videoType;
    NSDictionary *_trackMeta;
    NSDictionary *_floatTrackMeta;
}

@property (nonatomic) long long videoType;
@property (copy, nonatomic) NSDictionary *trackMeta;
@property (copy, nonatomic) NSDictionary *floatTrackMeta;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (id)trackMeta;
- (void)setTrackMeta:(id)arg0;
- (id)floatTrackMeta;
- (void)setFloatTrackMeta:(id)arg0;
- (void).cxx_destruct;
- (long long)videoType;
- (void)setVideoType:(long long)arg0;

@end