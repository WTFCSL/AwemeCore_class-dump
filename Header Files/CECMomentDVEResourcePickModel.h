//
//     Generated by private class-dump
//

@class NSString, AVURLAsset, UIImage, NSURL;

@interface CECMomentDVEResourcePickModel : NSObject <DVEResourcePickerModel> {
    AVURLAsset *_videoAsset;
    UIImage *_image;
    NSURL *_URL;
    long long _type;
    struct { long long value; int timescale; unsigned int flags; long long epoch; } _imageDuration;
}

@property (retain, nonatomic) AVURLAsset *videoAsset;
@property (retain, nonatomic) UIImage *image;
@property (retain, nonatomic) NSURL *URL;
@property (nonatomic) long long type;
@property (nonatomic) struct { long long value; int timescale; unsigned int flags; long long epoch; } imageDuration;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (struct { long long x0; int x1; unsigned int x2; long long x3; })imageDuration;
- (void)setImageDuration:(struct { long long x0; int x1; unsigned int x2; long long x3; })arg0;
- (void).cxx_destruct;
- (id)image;
- (long long)type;
- (void)setURL:(id)arg0;
- (void)setType:(long long)arg0;
- (void)setImage:(id)arg0;
- (id)URL;
- (id)videoAsset;
- (void)setVideoAsset:(id)arg0;

@end