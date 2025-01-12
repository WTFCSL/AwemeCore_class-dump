//
//     Generated by private class-dump
//

@class NSNumber, AWEGPlayerPlayTokenAuthModel, AWEURLModel;

@interface AWEGPlayerVideoInfoModel : AWEBaseApiModel {
    AWEURLModel *_playURL;
    AWEURLModel *_coverURL;
    AWEURLModel *_originCover;
    NSNumber *_height;
    NSNumber *_width;
    NSNumber *_duration;
    NSNumber *_isH265;
    AWEGPlayerPlayTokenAuthModel *_tokenAuth;
    NSNumber *_realDuration;
}

@property (retain, nonatomic) AWEURLModel *playURL;
@property (retain, nonatomic) AWEURLModel *coverURL;
@property (retain, nonatomic) AWEURLModel *originCover;
@property (retain, nonatomic) NSNumber *height;
@property (retain, nonatomic) NSNumber *width;
@property (retain, nonatomic) NSNumber *duration;
@property (retain, nonatomic) NSNumber *isH265;
@property (retain, nonatomic) AWEGPlayerPlayTokenAuthModel *tokenAuth;
@property (retain, nonatomic) NSNumber *realDuration;

- (id)tokenAuth;
- (id)originCover;
- (id)isH265;
- (void)setIsH265:(id)arg0;
- (void)setOriginCover:(id)arg0;
- (void)setTokenAuth:(id)arg0;
- (id)realDuration;
- (void)setRealDuration:(id)arg0;
- (void).cxx_destruct;
- (id)height;
- (id)duration;
- (void)setWidth:(id)arg0;
- (void)setHeight:(id)arg0;
- (id)width;
- (void)setDuration:(id)arg0;
- (id)playURL;
- (void)setPlayURL:(id)arg0;
- (id)coverURL;
- (void)setCoverURL:(id)arg0;

@end
