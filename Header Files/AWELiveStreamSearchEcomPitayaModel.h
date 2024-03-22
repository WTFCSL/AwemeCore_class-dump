//
//     Generated by private class-dump
//

@class NSDictionary, NSString;

@interface AWELiveStreamSearchEcomPitayaModel : MTLModel <MTLJSONSerializing> {
    int _code;
    int _refresh;
    int _enter_inner_channel;
    double _valid_ts;
    NSDictionary *_after_feed_params;
    NSString *_pitaya_upload_info;
    NSString *_room_id;
}

@property (nonatomic) int code;
@property (nonatomic) int refresh;
@property (nonatomic) int enter_inner_channel;
@property (nonatomic) double valid_ts;
@property (retain, nonatomic) NSDictionary *after_feed_params;
@property (copy, nonatomic) NSString *pitaya_upload_info;
@property (copy, nonatomic) NSString *room_id;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (id)room_id;
- (void)setRoom_id:(id)arg0;
- (id)pitaya_upload_info;
- (int)enter_inner_channel;
- (double)valid_ts;
- (id)after_feed_params;
- (void)setAfter_feed_params:(id)arg0;
- (void)setPitaya_upload_info:(id)arg0;
- (void)setEnter_inner_channel:(int)arg0;
- (void)setValid_ts:(double)arg0;
- (void)setCode:(int)arg0;
- (int)refresh;
- (int)code;
- (void).cxx_destruct;
- (void)setRefresh:(int)arg0;

@end