//
//     Generated by private class-dump
//

@class AUCDTOBasicAlbumSelectControlMediaSource;

@interface AUCDTOBasicAlbumSelectControl : MTLModel {
    long long _minCount;
    long long _maxCount;
    long long _minVideoCount;
    long long _maxVideoCount;
    long long _minPhotoCount;
    long long _maxPhotoCount;
    double _minVideoDuration;
    double _maxVideoDuration;
    AUCDTOBasicAlbumSelectControlMediaSource *_mediaSource;
}

@property (nonatomic) long long minCount;
@property (nonatomic) long long maxCount;
@property (nonatomic) long long minVideoCount;
@property (nonatomic) long long maxVideoCount;
@property (nonatomic) long long minPhotoCount;
@property (nonatomic) long long maxPhotoCount;
@property (nonatomic) double minVideoDuration;
@property (nonatomic) double maxVideoDuration;
@property (retain, nonatomic) AUCDTOBasicAlbumSelectControlMediaSource *mediaSource;

- (void)setMediaSource:(id)arg0;
- (double)maxVideoDuration;
- (id)mediaSource;
- (void)setMaxVideoCount:(long long)arg0;
- (void)setMinVideoCount:(long long)arg0;
- (long long)minVideoCount;
- (long long)maxVideoCount;
- (long long)minPhotoCount;
- (void)setMinPhotoCount:(long long)arg0;
- (void)setMaxVideoDuration:(double)arg0;
- (long long)minCount;
- (void)setMinCount:(long long)arg0;
- (id)init;
- (void).cxx_destruct;
- (void)setMaxPhotoCount:(long long)arg0;
- (void)setMaxCount:(long long)arg0;
- (void)setMinVideoDuration:(double)arg0;
- (long long)maxPhotoCount;
- (double)minVideoDuration;
- (long long)maxCount;

@end