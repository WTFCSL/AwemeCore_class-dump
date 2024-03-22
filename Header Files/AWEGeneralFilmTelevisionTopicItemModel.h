//
//     Generated by private class-dump
//

@class NSString, NSArray, NSNumber, AWEURLModel;

@interface AWEGeneralFilmTelevisionTopicItemModel : AWEBaseApiModel {
    BOOL _isCommerce;
    NSString *_topicID;
    NSString *_name;
    AWEURLModel *_posterURL;
    NSNumber *_videoCount;
    NSNumber *_type;
    NSArray *_videoListArray;
}

@property (copy, nonatomic) NSString *topicID;
@property (nonatomic) BOOL isCommerce;
@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) AWEURLModel *posterURL;
@property (copy, nonatomic) NSNumber *videoCount;
@property (retain, nonatomic) NSNumber *type;
@property (retain, nonatomic) NSArray *videoListArray;

+ (id)posterURLJSONTransformer;
+ (id)videoListArrayJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (BOOL)isCommerce;
- (void)setIsCommerce:(BOOL)arg0;
- (id)posterURL;
- (void)setPosterURL:(id)arg0;
- (id)videoListArray;
- (void)setVideoListArray:(id)arg0;
- (id)topicID;
- (void)setTopicID:(id)arg0;
- (void).cxx_destruct;
- (id)type;
- (void)setType:(id)arg0;
- (void)setName:(id)arg0;
- (id)name;
- (id)videoCount;
- (void)setVideoCount:(id)arg0;

@end