//
//     Generated by private class-dump
//

@class NSString, NSArray, NSDictionary;

@interface AWEScreenCastVideoInfo : MTLModel <MTLJSONSerializing> {
    NSString *_videoID;
    NSString *_imageUrl;
    NSArray *_cutImageUrlList;
    NSArray *_playInfos;
    double _duration;
}

@property (copy, nonatomic) NSString *videoID;
@property (copy, nonatomic) NSString *imageUrl;
@property (copy, nonatomic) NSArray *cutImageUrlList;
@property (copy, nonatomic) NSArray *playInfos;
@property (nonatomic) double duration;
@property (readonly, copy, nonatomic) NSDictionary *dictionaryValue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)playInfosJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (id)playInfos;
- (id)cutImageUrlList;
- (void)setCutImageUrlList:(id)arg0;
- (void)setPlayInfos:(id)arg0;
- (BOOL)isExpired;
- (void).cxx_destruct;
- (double)duration;
- (void)setDuration:(double)arg0;
- (id)imageUrl;
- (void)setImageUrl:(id)arg0;
- (id)videoID;
- (void)setVideoID:(id)arg0;

@end