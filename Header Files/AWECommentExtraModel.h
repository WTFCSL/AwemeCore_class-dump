//
//     Generated by private class-dump
//

@class AWECommentHotspotInfoModel;

@interface AWECommentExtraModel : AWEBaseApiModel {
    BOOL _isFolded;
    AWECommentHotspotInfoModel *_hotspotCommentInfo;
}

@property (retain, nonatomic) AWECommentHotspotInfoModel *hotspotCommentInfo;
@property (nonatomic) BOOL isFolded;

+ (id)hotspotCommentInfoJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (id)hotspotCommentInfo;
- (void)setHotspotCommentInfo:(id)arg0;
- (void)setIsFolded:(BOOL)arg0;
- (void).cxx_destruct;
- (BOOL)isFolded;

@end
