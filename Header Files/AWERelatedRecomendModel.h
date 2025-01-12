//
//     Generated by private class-dump
//

@class NSString, AWERelatedRecomendInfoModel;

@interface AWERelatedRecomendModel : AWEBaseApiModel {
    BOOL _shouldShowRelatedBar;
    int _shouldShowRelatedPanel;
    NSString *_relatedBarContent;
    AWERelatedRecomendInfoModel *_infoModel;
}

@property (nonatomic) BOOL shouldShowRelatedBar;
@property (nonatomic) int shouldShowRelatedPanel;
@property (copy, nonatomic) NSString *relatedBarContent;
@property (retain, nonatomic) AWERelatedRecomendInfoModel *infoModel;

+ (id)infoModelJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (id)infoModel;
- (void)setInfoModel:(id)arg0;
- (BOOL)shouldShowRelatedBar;
- (void)setShouldShowRelatedBar:(BOOL)arg0;
- (int)shouldShowRelatedPanel;
- (void)setShouldShowRelatedPanel:(int)arg0;
- (id)relatedBarContent;
- (void)setRelatedBarContent:(id)arg0;
- (void).cxx_destruct;

@end
