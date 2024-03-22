//
//     Generated by private class-dump
//

@class AWESearchNormalCardSummary, NSString, AWESearchNormalCardInfo, AWESearchNormalCardTitle;

@interface AWESearchNormalCardModel : AWEBaseApiModel {
    NSString *_contentOrigin;
    AWESearchNormalCardInfo *_info;
    AWESearchNormalCardSummary *_summary;
    AWESearchNormalCardTitle *_title;
}

@property (copy, nonatomic) NSString *contentOrigin;
@property (retain, nonatomic) AWESearchNormalCardInfo *info;
@property (retain, nonatomic) AWESearchNormalCardSummary *summary;
@property (retain, nonatomic) AWESearchNormalCardTitle *title;

+ (id)JSONKeyPathsByPropertyKey;

- (id)info;
- (void).cxx_destruct;
- (id)contentOrigin;
- (void)setSummary:(id)arg0;
- (void)setInfo:(id)arg0;
- (id)title;
- (id)summary;
- (void)setContentOrigin:(id)arg0;
- (void)setTitle:(id)arg0;

@end
