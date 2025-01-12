//
//     Generated by private class-dump
//

@class NSNumber, NSString, NSDictionary;

@interface BDXBridgeOpenPoiMediaMethodParamModel : BDXBridgeModel {
    NSNumber *_scene_type;
    NSNumber *_video_style;
    NSString *_media_id;
    NSNumber *_index;
    NSNumber *_should_show_page_indicator;
    NSNumber *_should_show_scroll_guide;
    NSNumber *_footer_height;
    NSDictionary *_track_data;
    NSDictionary *_extra_params;
    NSDictionary *_page_data;
}

@property (retain, nonatomic) NSNumber *scene_type;
@property (retain, nonatomic) NSNumber *video_style;
@property (copy, nonatomic) NSString *media_id;
@property (retain, nonatomic) NSNumber *index;
@property (retain, nonatomic) NSNumber *should_show_page_indicator;
@property (retain, nonatomic) NSNumber *should_show_scroll_guide;
@property (retain, nonatomic) NSNumber *footer_height;
@property (copy, nonatomic) NSDictionary *track_data;
@property (copy, nonatomic) NSDictionary *extra_params;
@property (copy, nonatomic) NSDictionary *page_data;

+ (id)requiredKeyPaths;
+ (id)defaultValues;
+ (id)JSONKeyPathsByPropertyKey;

- (id)media_id;
- (void)setMedia_id:(id)arg0;
- (id)video_style;
- (void)setVideo_style:(id)arg0;
- (id)extra_params;
- (void)setExtra_params:(id)arg0;
- (id)scene_type;
- (void)setScene_type:(id)arg0;
- (id)track_data;
- (id)page_data;
- (id)should_show_page_indicator;
- (id)should_show_scroll_guide;
- (id)footer_height;
- (void)setShould_show_page_indicator:(id)arg0;
- (void)setShould_show_scroll_guide:(id)arg0;
- (void)setFooter_height:(id)arg0;
- (void)setTrack_data:(id)arg0;
- (void)setPage_data:(id)arg0;
- (void)setIndex:(id)arg0;
- (void).cxx_destruct;
- (id)index;

@end
