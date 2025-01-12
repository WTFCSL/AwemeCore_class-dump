//
//     Generated by private class-dump
//

@class AWEPOIEntryViewReusePool, NSMutableArray, UIImageView, UIView, AWEPOIEXP3ButtonView, AWEPOIEntryViewLayout;

@interface AWEPOIEXP3AnchorView : AWEPOITradeEntryAnchorView {
    BOOL _isBGColorWhite;
    BOOL _shouldShowDetail;
    UIView *_containerView;
    UIImageView *_iconImageView;
    UIView *_firstLineView;
    UIView *_firstDetailLineView;
    UIView *_detailView;
    AWEPOIEXP3ButtonView *_buttonView;
    AWEPOIEntryViewLayout *_entryViewLayout;
    AWEPOIEntryViewReusePool *_reusePool;
    double _firstFullExpandWidth;
    double _firstFullTruncatedWidth;
    double _firstDetailFullExpandWidth;
    double _firstDetailFullTruncatedWidth;
    double _secondFullExpandWidth;
    double _secondFullTruncatedWidth;
    NSMutableArray *_firstItemsArray;
    NSMutableArray *_firstDetailItemsArray;
    NSMutableArray *_detailItemsArray;
    long long _scene;
    id /* block */ _buttonViewClickBlock;
    struct CGSize { double width; double height; } _contentSize;
}

@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) UIImageView *iconImageView;
@property (retain, nonatomic) UIView *firstLineView;
@property (retain, nonatomic) UIView *firstDetailLineView;
@property (retain, nonatomic) UIView *detailView;
@property (retain, nonatomic) AWEPOIEXP3ButtonView *buttonView;
@property (retain, nonatomic) AWEPOIEntryViewLayout *entryViewLayout;
@property (retain, nonatomic) AWEPOIEntryViewReusePool *reusePool;
@property (nonatomic) BOOL shouldShowDetail;
@property (nonatomic) struct CGSize { double width; double height; } contentSize;
@property (nonatomic) double firstFullExpandWidth;
@property (nonatomic) double firstFullTruncatedWidth;
@property (nonatomic) double firstDetailFullExpandWidth;
@property (nonatomic) double firstDetailFullTruncatedWidth;
@property (nonatomic) double secondFullExpandWidth;
@property (nonatomic) double secondFullTruncatedWidth;
@property (retain, nonatomic) NSMutableArray *firstItemsArray;
@property (retain, nonatomic) NSMutableArray *firstDetailItemsArray;
@property (retain, nonatomic) NSMutableArray *detailItemsArray;
@property (nonatomic) long long scene;
@property (copy, nonatomic) id /* block */ buttonViewClickBlock;

- (void)setIsBGColorWhite:(BOOL)arg0;
- (BOOL)isBGColorWhite;
- (double)customViewHeightInCommentListHeader;
- (void)showDetailInfo;
- (void)hideDetailInfo;
- (void)layoutWithOriginalStyle;
- (void)layoutWithNewStyleWithModel:(id)arg0;
- (void)clickMultiAnchorEventHandler:(id /* block */)arg0;
- (void)configMultiAnchorCount:(long long)arg0 useSeperate:(BOOL)arg1;
- (void)hiddenExtendView;
- (void)updateAnchorViewBackgroundColor:(id)arg0;
- (void)p_updateUI;
- (void)setMarkImageURLs:(id)arg0;
- (void)setMarkImageURLs:(id)arg0 placeholder:(id)arg1;
- (id)firstLineView;
- (void)setFirstLineView:(id)arg0;
- (BOOL)shouldShowDetail;
- (void)p_setupA11y;
- (void)setShouldShowDetail:(BOOL)arg0;
- (void)p_updateUILayout;
- (id)entryViewLayout;
- (id)detailItemsArray;
- (void)p_resetItemsArray;
- (void)p_addViews;
- (void)p_addSubviewsWithItemsArray:(id)arg0 toView:(id)arg1;
- (void)p_calculateContentSize;
- (void)p_updateA11y;
- (double)p_calculateViewWidthWithItemsArray:(id)arg0;
- (double)p_calculateItemWidth:(id)arg0;
- (BOOL)isShowingDetail;
- (void)setEntryViewLayout:(id)arg0;
- (void)setDetailItemsArray:(id)arg0;
- (id)firstDetailLineView;
- (id)firstDetailItemsArray;
- (id)firstItemsArray;
- (void)processFirstContentModel:(id)arg0 toElements:(id)arg1;
- (void)processModelsInFirstLineWithItemArray:(id)arg0 fullExpandWidth:(double *)arg1 fullTruncatedWidth:(double *)arg2;
- (void)p_updateSubviewWithItemsArray:(id)arg0 toView:(id)arg1;
- (void)p_processOverWidthWithItemArray:(id)arg0;
- (void)p_calculateSubviewsWidthWithItemArray:(id)arg0 fullExpandWidth:(double *)arg1 fullTruncatedWidth:(double *)arg2;
- (void)p_calculateContentWithItemArray:(id)arg0 fullExpandWidth:(double)arg1 fullTruncatedWidth:(double)arg2;
- (double)p_calculateItemMinWidth:(id)arg0;
- (id)p_changeLengthText:(id)arg0 length:(long long)arg1;
- (double)maxDetailViewWidthWithArray:(id)arg0;
- (void)p_calculateContentMinLengthAndTextWithItemArray:(id)arg0;
- (void)configAnchorContentDataWithData:(id)arg0;
- (void)setFirstDetailLineView:(id)arg0;
- (double)firstFullExpandWidth;
- (void)setFirstFullExpandWidth:(double)arg0;
- (double)firstFullTruncatedWidth;
- (void)setFirstFullTruncatedWidth:(double)arg0;
- (double)firstDetailFullExpandWidth;
- (void)setFirstDetailFullExpandWidth:(double)arg0;
- (double)firstDetailFullTruncatedWidth;
- (void)setFirstDetailFullTruncatedWidth:(double)arg0;
- (void)setFirstItemsArray:(id)arg0;
- (void)setFirstDetailItemsArray:(id)arg0;
- (void)setButtonViewClickBlock:(id /* block */)arg0;
- (void)processDetailContentModel:(id)arg0 toElements:(id)arg1;
- (void)processModelsInSecondLineWithItemArray:(id)arg0 anchorType:(unsigned long long)arg1;
- (void)p_calculatePOISubviewsWidthWithItemArray:(id)arg0 fullExpandWidth:(double *)arg1 fullTruncatedWidth:(double *)arg2;
- (double)secondFullExpandWidth;
- (double)secondFullTruncatedWidth;
- (id /* block */)buttonViewClickBlock;
- (void)p_buttonViewClicked;
- (void)clickExplorationButtonEventHandler:(id /* block */)arg0;
- (void)setSecondFullExpandWidth:(double)arg0;
- (void)setSecondFullTruncatedWidth:(double)arg0;
- (id)initWithScene:(long long)arg0;
- (id)buttonView;
- (id)reusePool;
- (struct CGSize { double x0; double x1; })contentSize;
- (void)setScene:(long long)arg0;
- (void).cxx_destruct;
- (void)setContentSize:(struct CGSize { double x0; double x1; })arg0;
- (void)setContainerView:(id)arg0;
- (id)containerView;
- (id)iconImageView;
- (void)setButtonView:(id)arg0;
- (long long)scene;
- (void)setReusePool:(id)arg0;
- (void)setIconImageView:(id)arg0;
- (void)setupUI;
- (id)detailView;
- (void)setDetailView:(id)arg0;

@end
