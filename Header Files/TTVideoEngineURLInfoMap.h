//
//     Generated by private class-dump
//

@class TTVideoEngineURLInfo, NSMutableArray;

@interface TTVideoEngineURLInfoMap : NSObject <NSSecureCoding> {
    TTVideoEngineURLInfo *_video1;
    TTVideoEngineURLInfo *_video2;
    TTVideoEngineURLInfo *_video3;
    TTVideoEngineURLInfo *_video4;
    TTVideoEngineURLInfo *_video5;
    TTVideoEngineURLInfo *_video6;
    TTVideoEngineURLInfo *_video7;
    TTVideoEngineURLInfo *_video8;
    NSMutableArray *_videoInfoList;
    long long _videoModelVersion;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) TTVideoEngineURLInfo *video1;
@property (retain, nonatomic) TTVideoEngineURLInfo *video2;
@property (retain, nonatomic) TTVideoEngineURLInfo *video3;
@property (retain, nonatomic) TTVideoEngineURLInfo *video4;
@property (retain, nonatomic) TTVideoEngineURLInfo *video5;
@property (retain, nonatomic) TTVideoEngineURLInfo *video6;
@property (retain, nonatomic) TTVideoEngineURLInfo *video7;
@property (retain, nonatomic) TTVideoEngineURLInfo *video8;
@property (retain, nonatomic) NSMutableArray *videoInfoList;
@property (nonatomic) long long videoModelVersion;

+ (BOOL)supportsSecureCoding;

- (id)initWithDictionary:(id)arg0 mediaType:(id)arg1 key:(id)arg2;
- (void)setUpResolutionMap:(id)arg0;
- (long long)videoModelVersion;
- (void)setVideoModelVersion:(long long)arg0;
- (id)videoForResolutionType:(unsigned long long)arg0 otherCondition:(id)arg1;
- (id)videoForBitrate:(long long)arg0 mediaType:(id)arg1;
- (id)video1;
- (void)setVideo1:(id)arg0;
- (id)video2;
- (void)setVideo2:(id)arg0;
- (id)video3;
- (void)setVideo3:(id)arg0;
- (id)video4;
- (void)setVideo4:(id)arg0;
- (id)video5;
- (void)setVideo5:(id)arg0;
- (id)video6;
- (void)setVideo6:(id)arg0;
- (id)video7;
- (void)setVideo7:(id)arg0;
- (id)video8;
- (void)setVideo8:(id)arg0;
- (id)videoInfoList;
- (void)setVideoInfoList:(id)arg0;
- (id)init;
- (void).cxx_destruct;
- (id)initWithCoder:(id)arg0;
- (id)description;
- (void)encodeWithCoder:(id)arg0;
- (id)initWithDictionary:(id)arg0 mediaType:(id)arg1;

@end
