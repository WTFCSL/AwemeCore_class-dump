//
//     Generated by private class-dump
//

@class NSNumber, NSArray, NSString;

@interface AWEOpenShareAlbumVideoModel : MTLModel <MTLJSONSerializing> {
    BOOL _isTop;
    BOOL _isLastSelected;
    long long _videoHeight;
    long long _videoWidth;
    NSNumber *_selectedNum;
    NSArray *_videoURLs;
    NSArray *_coverURLs;
    NSString *_awemeId;
    NSString *_desc;
    long long _diggCount;
}

@property (nonatomic) long long videoHeight;
@property (nonatomic) long long videoWidth;
@property (retain, nonatomic) NSNumber *selectedNum;
@property (copy, nonatomic) NSArray *videoURLs;
@property (copy, nonatomic) NSArray *coverURLs;
@property (copy, nonatomic) NSString *awemeId;
@property (copy, nonatomic) NSString *desc;
@property (nonatomic) BOOL isTop;
@property (nonatomic) long long diggCount;
@property (nonatomic) BOOL isLastSelected;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (long long)diggCount;
- (void)setDiggCount:(long long)arg0;
- (void)setAwemeId:(id)arg0;
- (id)awemeId;
- (id)coverURLs;
- (void)setCoverURLs:(id)arg0;
- (void)setIsTop:(BOOL)arg0;
- (id)selectedNum;
- (void)setSelectedNum:(id)arg0;
- (id)videoURLs;
- (void)setVideoURLs:(id)arg0;
- (BOOL)isLastSelected;
- (void)setIsLastSelected:(BOOL)arg0;
- (id)desc;
- (void).cxx_destruct;
- (void)setVideoHeight:(long long)arg0;
- (long long)videoHeight;
- (void)setVideoWidth:(long long)arg0;
- (long long)videoWidth;
- (void)setDesc:(id)arg0;
- (BOOL)isTop;

@end
