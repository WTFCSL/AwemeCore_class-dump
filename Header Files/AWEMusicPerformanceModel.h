//
//     Generated by private class-dump
//

@class NSString;

@interface AWEMusicPerformanceModel : AWEBaseApiModel {
    long long _performanceId;
    NSString *_postURL;
    NSString *_title;
    NSString *_time;
    NSString *_location;
    NSString *_schema;
}

@property (nonatomic) long long performanceId;
@property (copy, nonatomic) NSString *postURL;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *time;
@property (copy, nonatomic) NSString *location;
@property (copy, nonatomic) NSString *schema;

+ (id)JSONKeyPathsByPropertyKey;

- (id)postURL;
- (long long)performanceId;
- (void)setPerformanceId:(long long)arg0;
- (void)setPostURL:(id)arg0;
- (void)setSchema:(id)arg0;
- (void).cxx_destruct;
- (id)time;
- (id)location;
- (void)setTime:(id)arg0;
- (id)title;
- (void)setLocation:(id)arg0;
- (id)schema;
- (void)setTitle:(id)arg0;

@end