//
//     Generated by private class-dump
//

@class NSString, UIImage, AWEECOMIMBaseMsgModel;

@interface AWEECOMIMVideoItemModel : NSObject {
    NSString *_vid;
    NSString *_localFilePath;
    NSString *_coverURLString;
    double _duration;
    double _videoWidth;
    double _videoHeight;
    long long _state;
    UIImage *_coverImg;
    long long _senderRole;
    AWEECOMIMBaseMsgModel *_msgModel;
    struct CGSize { double width; double height; } _videoSize;
}

@property (copy, nonatomic) NSString *vid;
@property (copy, nonatomic) NSString *localFilePath;
@property (copy, nonatomic) NSString *coverURLString;
@property (nonatomic) double duration;
@property (nonatomic) double videoWidth;
@property (nonatomic) double videoHeight;
@property (nonatomic) long long state;
@property (retain, nonatomic) UIImage *coverImg;
@property (nonatomic) struct CGSize { double width; double height; } videoSize;
@property (nonatomic) long long senderRole;
@property (weak, nonatomic) AWEECOMIMBaseMsgModel *msgModel;

+ (struct CGSize { double x0; double x1; })videoSizeWithModel:(id)arg0;

- (id)vid;
- (void)setVid:(id)arg0;
- (id)coverImg;
- (void)setCoverImg:(id)arg0;
- (id)coverURLString;
- (void)setCoverURLString:(id)arg0;
- (long long)senderRole;
- (void)setSenderRole:(long long)arg0;
- (id)msgModel;
- (void)setMsgModel:(id)arg0;
- (void).cxx_destruct;
- (long long)state;
- (void)setVideoHeight:(double)arg0;
- (void)setState:(long long)arg0;
- (double)duration;
- (double)videoHeight;
- (void)setVideoWidth:(double)arg0;
- (double)videoWidth;
- (void)setDuration:(double)arg0;
- (struct CGSize { double x0; double x1; })videoSize;
- (void)setVideoSize:(struct CGSize { double x0; double x1; })arg0;
- (id)localFilePath;
- (void)setLocalFilePath:(id)arg0;

@end
