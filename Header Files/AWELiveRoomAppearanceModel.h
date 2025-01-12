//
//     Generated by private class-dump
//

@class NSArray, NSString, AWEURLModel;

@interface AWELiveRoomAppearanceModel : AWEBaseApiModel {
    long long _upRightStatsDisplayType;
    long long _previewStyle;
    NSArray *_contentTags;
    NSString *_tagsForTrack;
    AWEURLModel *_blurPlaceHolderImg;
}

@property (nonatomic) long long upRightStatsDisplayType;
@property (nonatomic) long long previewStyle;
@property (retain, nonatomic) NSArray *contentTags;
@property (retain, nonatomic) NSString *tagsForTrack;
@property (retain, nonatomic) AWEURLModel *blurPlaceHolderImg;

+ (id)parseFromOriginRoomModel:(id)arg0;

- (id)tagsForTrack;
- (id)contentTags;
- (long long)upRightStatsDisplayType;
- (void)setUpRightStatsDisplayType:(long long)arg0;
- (long long)previewStyle;
- (void)setPreviewStyle:(long long)arg0;
- (void)setTagsForTrack:(id)arg0;
- (void)setContentTags:(id)arg0;
- (void)setBlurPlaceHolderImg:(id)arg0;
- (id)blurPlaceHolderImg;
- (void).cxx_destruct;

@end
