//
//     Generated by private class-dump
//

@class NSArray, NSString, IESGCPImagesView, IESGCPEvaluationItem, IESGCPFoldLabel;

@interface IESGCPEvaluationDetailContentView : UIView <IESGCPFoldLabelDelegate> {
    BOOL _canShowOriginImage;
    BOOL _needShowFoldLabel;
    BOOL _isFold;
    id /* block */ _needsUpdateViewConstraints;
    id /* block */ _unfoldHandler;
    IESGCPFoldLabel *_evaluationLabel;
    IESGCPImagesView *_contentImagesView;
    IESGCPEvaluationItem *_evaluationItem;
    NSArray *_currentEvaluationLabelHighlightIndexArray;
    unsigned long long _style;
    double _viewWidth;
}

@property (retain, nonatomic) IESGCPFoldLabel *evaluationLabel;
@property (retain, nonatomic) IESGCPImagesView *contentImagesView;
@property (retain, nonatomic) IESGCPEvaluationItem *evaluationItem;
@property (copy, nonatomic) NSArray *currentEvaluationLabelHighlightIndexArray;
@property (nonatomic) unsigned long long style;
@property (nonatomic) double viewWidth;
@property (copy, nonatomic) id /* block */ needsUpdateViewConstraints;
@property (copy, nonatomic) id /* block */ unfoldHandler;
@property (nonatomic) BOOL canShowOriginImage;
@property (nonatomic) BOOL needShowFoldLabel;
@property (nonatomic) BOOL isFold;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)contentAttributedStringWithContentString:(id)arg0 style:(unsigned long long)arg1;

- (id)evaluationLabel;
- (void)setEvaluationLabel:(id)arg0;
- (void)setViewWidth:(double)arg0;
- (BOOL)isFold;
- (void)setIsFold:(BOOL)arg0;
- (void)updateViewWidth:(double)arg0;
- (id)evaluationItem;
- (void)setCanShowOriginImage:(BOOL)arg0;
- (void)setNeedsUpdateViewConstraints:(id /* block */)arg0;
- (void)setUnfoldHandler:(id /* block */)arg0;
- (void)foldLabel:(id)arg0 didChangeFoldStatus:(BOOL)arg1;
- (void)makeTrackNode;
- (BOOL)needShowFoldLabel;
- (void)setNeedShowFoldLabel:(BOOL)arg0;
- (id /* block */)needsUpdateViewConstraints;
- (void)refreshEvaluationDetailContent;
- (void)needUpdateViewWidth;
- (void)refreshContentText;
- (void)refreshContentImages;
- (id)contentImagesView;
- (id /* block */)unfoldHandler;
- (id)currentEvaluationLabelHighlightIndexArray;
- (void)setCurrentEvaluationLabelHighlightIndexArray:(id)arg0;
- (void)updateEvaluationLabelHeight;
- (void)unfoldButtonDidClicked;
- (void)updateWithEvaluationItem:(id)arg0 style:(unsigned long long)arg1;
- (BOOL)canShowOriginImage;
- (void)setContentImagesView:(id)arg0;
- (void)setEvaluationItem:(id)arg0;
- (unsigned long long)style;
- (id)init;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)setStyle:(unsigned long long)arg0;
- (double)viewWidth;
- (void)setupLayout;

@end
