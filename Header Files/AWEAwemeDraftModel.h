//
//     Generated by private class-dump
//

@class NSNumber, NSString;

@interface AWEAwemeDraftModel : ACCBaseApiModel {
    NSNumber *_awemeId;
    NSString *_videoId;
    NSNumber *_draftId;
}

@property (copy, nonatomic) NSNumber *awemeId;
@property (copy, nonatomic) NSString *videoId;
@property (retain, nonatomic) NSNumber *draftId;

+ (id)JSONKeyPathsByPropertyKey;

- (void)setAwemeId:(id)arg0;
- (id)awemeId;
- (id)draftId;
- (void)setDraftId:(id)arg0;
- (void)setVideoId:(id)arg0;
- (void).cxx_destruct;
- (id)videoId;

@end
