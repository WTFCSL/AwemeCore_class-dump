//
//     Generated by private class-dump
//

@class AWEPOIFeedUgcItemModel, NSAttributedString;

@interface AWEPOIDetailUGCPhotosPreviewRateLayoutInfo : NSObject {
    BOOL _isExpanded;
    BOOL _didCalculate;
    unsigned long long _expandedStatus;
    double _viewHeight;
    double _nameHeight;
    double _contentTagsHeight;
    double _scoreTagsHeight;
    double _contentHeight;
    double _collapsedContentHeight;
    double _expandedContentHeight;
    double _feedBackViewHeight;
    double _contentTagsTop;
    double _scoreTagsTop;
    double _contentTop;
    double _feedBackViewTop;
    NSAttributedString *_contentRichText;
    double _feedbackSpacing;
    AWEPOIFeedUgcItemModel *_model;
}

@property (nonatomic) BOOL didCalculate;
@property (nonatomic) double feedbackSpacing;
@property (weak, nonatomic) AWEPOIFeedUgcItemModel *model;
@property (nonatomic) BOOL isExpanded;
@property (nonatomic) unsigned long long expandedStatus;
@property (nonatomic) double viewHeight;
@property (nonatomic) double nameHeight;
@property (nonatomic) double contentTagsHeight;
@property (nonatomic) double scoreTagsHeight;
@property (nonatomic) double contentHeight;
@property (nonatomic) double collapsedContentHeight;
@property (nonatomic) double expandedContentHeight;
@property (nonatomic) double feedBackViewHeight;
@property (nonatomic) double contentTagsTop;
@property (nonatomic) double scoreTagsTop;
@property (nonatomic) double contentTop;
@property (nonatomic) double feedBackViewTop;
@property (retain, nonatomic) NSAttributedString *contentRichText;

- (void)setViewHeight:(double)arg0;
- (id)contentRichText;
- (double)contentTagsTop;
- (double)contentTagsHeight;
- (double)scoreTagsHeight;
- (double)scoreTagsTop;
- (void)setContentTagsTop:(double)arg0;
- (void)setScoreTagsTop:(double)arg0;
- (double)collapsedContentHeight;
- (void)setContentTop:(double)arg0;
- (void)setContentRichText:(id)arg0;
- (void)setExpandedContentHeight:(double)arg0;
- (void)setCollapsedContentHeight:(double)arg0;
- (void)calculateContentHeightWithModel:(id)arg0;
- (unsigned long long)expandedStatus;
- (void)setExpandedStatus:(unsigned long long)arg0;
- (void)calculateSizeWithItem:(id)arg0;
- (void)calculateNameWithModel:(id)arg0;
- (void)calculateContentTagsHeightWithModel:(id)arg0;
- (void)calculateScoreTagsHeightWithModel:(id)arg0;
- (void)calculateFeedbackSizeWithModel:(id)arg0;
- (void)calculateViewHeightWithModel:(id)arg0;
- (void)setDidCalculate:(BOOL)arg0;
- (BOOL)didCalculate;
- (void)setNameHeight:(double)arg0;
- (void)setContentTagsHeight:(double)arg0;
- (void)setScoreTagsHeight:(double)arg0;
- (void)setFeedbackSpacing:(double)arg0;
- (void)setFeedBackViewHeight:(double)arg0;
- (double)nameHeight;
- (double)feedbackSpacing;
- (void)setFeedBackViewTop:(double)arg0;
- (double)feedBackViewTop;
- (double)feedBackViewHeight;
- (id)initWithModel:(id)arg0;
- (void)setModel:(id)arg0;
- (void).cxx_destruct;
- (double)contentHeight;
- (void)setIsExpanded:(BOOL)arg0;
- (id)model;
- (BOOL)isExpanded;
- (void)setContentHeight:(double)arg0;
- (double)viewHeight;
- (double)contentTop;
- (double)expandedContentHeight;

@end
