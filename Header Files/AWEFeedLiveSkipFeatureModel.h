//
//     Generated by private class-dump
//

@class NSString, NSNumber;

@interface AWEFeedLiveSkipFeatureModel : AWEFeedBaseSequenceFeatureModel {
    NSString *_gid;
    NSString *_aid;
    NSNumber *_live_time_gap;
    NSNumber *_live_duration;
    NSNumber *_live_window_stay_duration;
    NSNumber *_live_show_time;
}

@property (copy, nonatomic) NSString *gid;
@property (copy, nonatomic) NSString *aid;
@property (copy, nonatomic) NSNumber *live_time_gap;
@property (copy, nonatomic) NSNumber *live_duration;
@property (copy, nonatomic) NSNumber *live_window_stay_duration;
@property (copy, nonatomic) NSNumber *live_show_time;

- (void)updateFeature:(id)arg0 forKey:(id)arg1 extra:(id)arg2;
- (void)setLive_show_time:(id)arg0;
- (id)live_show_time;
- (void)setLive_time_gap:(id)arg0;
- (void)setLive_duration:(id)arg0;
- (void)setLive_window_stay_duration:(id)arg0;
- (id)live_time_gap;
- (id)live_duration;
- (id)live_window_stay_duration;
- (void)setGid:(id)arg0;
- (id)gid;
- (void).cxx_destruct;
- (void)setAid:(id)arg0;
- (id)aid;

@end