//
//     Generated by private class-dump
//

@class NSString;

@interface AWERelatedFeedHotSpot : MTLModel <MTLJSONSerializing> {
    NSString *_hotspotTimeLine;
    NSString *_cursor;
    NSString *_lightIconUrl;
    NSString *_darkIconUrl;
    NSString *_timelineSchema;
}

@property (copy, nonatomic) NSString *hotspotTimeLine;
@property (copy, nonatomic) NSString *cursor;
@property (copy, nonatomic) NSString *lightIconUrl;
@property (copy, nonatomic) NSString *darkIconUrl;
@property (copy, nonatomic) NSString *timelineSchema;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (id)lightIconUrl;
- (id)darkIconUrl;
- (void)setLightIconUrl:(id)arg0;
- (void)setDarkIconUrl:(id)arg0;
- (id)hotspotTimeLine;
- (void)setHotspotTimeLine:(id)arg0;
- (id)timelineSchema;
- (void)setTimelineSchema:(id)arg0;
- (id)cursor;
- (void).cxx_destruct;
- (void)setCursor:(id)arg0;

@end