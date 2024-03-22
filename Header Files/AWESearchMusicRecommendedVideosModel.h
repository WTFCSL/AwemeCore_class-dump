//
//     Generated by private class-dump
//

@class NSString, NSArray, AWESearchMusicRecommendedVideosControlModel;

@interface AWESearchMusicRecommendedVideosModel : AWEBaseApiModel <ACCSearchMusicRecommendedVideosModelProtocol> {
    NSString *_aladdinSource;
    NSString *_docID;
    AWESearchMusicRecommendedVideosControlModel *_playStatus;
    NSString *_title;
    NSArray *_videoList;
}

@property (copy, nonatomic) NSString *aladdinSource;
@property (copy, nonatomic) NSString *docID;
@property (copy, nonatomic) NSString *title;
@property (retain, nonatomic) NSArray *videoList;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (copy, nonatomic) NSString *aladdinSource;
@property (copy, nonatomic) NSString *docID;
@property (retain, nonatomic) AWESearchMusicRecommendedVideosControlModel *playStatus;
@property (copy, nonatomic) NSString *title;
@property (retain, nonatomic) NSArray *videoList;

+ (id)docIDJSONTransformer;
+ (id)playStatusJSONTransformer;
+ (id)videoListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void)setVideoList:(id)arg0;
- (id)videoList;
- (id)playStatus;
- (void)setPlayStatus:(id)arg0;
- (id)aladdinSource;
- (void)setAladdinSource:(id)arg0;
- (void).cxx_destruct;
- (id)title;
- (void)setTitle:(id)arg0;
- (id)docID;
- (void)setDocID:(id)arg0;

@end