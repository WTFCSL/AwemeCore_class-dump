//
//     Generated by private class-dump
//

@class NSArray, NSString;

@interface AWEPropRecommendMusicReponseModel : ACCBaseApiModel {
    NSArray *_recommendMusicList;
    NSString *_bubbleTitle;
}

@property (copy, nonatomic) NSArray *recommendMusicList;
@property (copy, nonatomic) NSString *bubbleTitle;

+ (id)recommendMusicListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (id)bubbleTitle;
- (void)setBubbleTitle:(id)arg0;
- (id)recommendMusicList;
- (void)setRecommendMusicList:(id)arg0;
- (void).cxx_destruct;

@end