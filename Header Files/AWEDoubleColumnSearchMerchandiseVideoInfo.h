//
//     Generated by private class-dump
//

@class NSString, NSNumber;

@interface AWEDoubleColumnSearchMerchandiseVideoInfo : AWEBaseApiModel {
    NSString *_videoID;
    NSString *_mainUrl;
    NSString *_backupUrl;
    NSNumber *_width;
    NSNumber *_height;
    NSNumber *_duration;
    NSNumber *_urlExpiredTime;
    long long _awemeType;
}

@property (copy, nonatomic) NSString *videoID;
@property (copy, nonatomic) NSString *mainUrl;
@property (copy, nonatomic) NSString *backupUrl;
@property (retain, nonatomic) NSNumber *width;
@property (retain, nonatomic) NSNumber *height;
@property (retain, nonatomic) NSNumber *duration;
@property (retain, nonatomic) NSNumber *urlExpiredTime;
@property (nonatomic) long long awemeType;

+ (id)JSONKeyPathsByPropertyKey;

- (long long)awemeType;
- (void)setAwemeType:(long long)arg0;
- (id)urlExpiredTime;
- (void)setUrlExpiredTime:(id)arg0;
- (id)mainUrl;
- (void)setMainUrl:(id)arg0;
- (id)backupUrl;
- (void)setBackupUrl:(id)arg0;
- (void).cxx_destruct;
- (id)height;
- (id)duration;
- (void)setWidth:(id)arg0;
- (void)setHeight:(id)arg0;
- (id)width;
- (void)setDuration:(id)arg0;
- (id)videoID;
- (void)setVideoID:(id)arg0;

@end
