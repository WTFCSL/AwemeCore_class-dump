//
//     Generated by private class-dump
//

@class UIView, NSString, NSArray, IESGCPPBCommentPrimaryTag, UIButton, IESGCPDetailCommentLabelFilterViewCell, UICollectionView, UILabel;

@interface IESGCPDetailCommentHeaderView : UITableViewHeaderFooterView <UICollectionViewDelegate, UICollectionViewDataSource, UICollectionViewDelegateFlowLayout, IESGCPEvaluationHeaderViewProtocol> {
    BOOL _isAnchor;
    NSString *_headerTitle;
    long long _currentSelectedIndex;
    IESGCPPBCommentPrimaryTag *_currentTag;
    id /* block */ _commentTagCellReportParams;
    id /* block */ _reportTracker;
    UILabel *_titleLabel;
    UIView *_buttonContainer;
    UIButton *_defaultButton;
    UIButton *_newestButton;
    UICollectionView *_labelFilter;
    IESGCPDetailCommentLabelFilterViewCell *_preSelectedFilterCell;
    NSArray *_tagListArray;
    double _labelFilterViewHeight;
}

@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIView *buttonContainer;
@property (retain, nonatomic) UIButton *defaultButton;
@property (retain, nonatomic) UIButton *newestButton;
@property (retain, nonatomic) UICollectionView *labelFilter;
@property (retain, nonatomic) IESGCPDetailCommentLabelFilterViewCell *preSelectedFilterCell;
@property (copy, nonatomic) NSArray *tagListArray;
@property (nonatomic) double labelFilterViewHeight;
@property (copy, nonatomic) IESGCPPBCommentPrimaryTag *currentTag;
@property (copy, nonatomic) NSString *headerTitle;
@property (nonatomic) long long currentSelectedIndex;
@property (nonatomic) BOOL isAnchor;
@property (copy, nonatomic) id /* block */ commentTagCellReportParams;
@property (copy, nonatomic) id /* block */ reportTracker;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setIsAnchor:(BOOL)arg0;
- (void)configWithModel:(id)arg0;
- (long long)currentSelectedIndex;
- (void)setCurrentSelectedIndex:(long long)arg0;
- (void)reportTrackerWithEvent:(id)arg0 extra:(id)arg1;
- (void)rightButtonDidClicked:(id)arg0;
- (id /* block */)reportTracker;
- (void)setTagListArray:(id)arg0;
- (id)tagListArray;
- (void)initUserInterface;
- (void)setReportTracker:(id /* block */)arg0;
- (void)setLabelFilterViewHeight:(double)arg0;
- (id)labelFilter;
- (double)labelFilterViewHeight;
- (id)newestButton;
- (id)preSelectedFilterCell;
- (void)setPreSelectedFilterCell:(id)arg0;
- (id /* block */)commentTagCellReportParams;
- (void)reloadHeaderViewWithFilterHeight:(double)arg0 tagList:(id)arg1;
- (void)setSegmentIsHidden:(BOOL)arg0;
- (void)setCommentTagCellReportParams:(id /* block */)arg0;
- (void)setNewestButton:(id)arg0;
- (void)setLabelFilter:(id)arg0;
- (BOOL)collectionView:(id)arg0 shouldSelectItemAtIndexPath:(id)arg1;
- (void)collectionView:(id)arg0 didSelectItemAtIndexPath:(id)arg1;
- (void)setHeaderTitle:(id)arg0;
- (long long)collectionView:(id)arg0 numberOfItemsInSection:(long long)arg1;
- (id)headerTitle;
- (struct CGSize { double x0; double x1; })collectionView:(id)arg0 layout:(id)arg1 sizeForItemAtIndexPath:(id)arg2;
- (void).cxx_destruct;
- (id)collectionView:(id)arg0 cellForItemAtIndexPath:(id)arg1;
- (id)buttonContainer;
- (BOOL)isAnchor;
- (id)titleLabel;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (BOOL)collectionView:(id)arg0 shouldHighlightItemAtIndexPath:(id)arg1;
- (void)setButtonContainer:(id)arg0;
- (void)setTitleLabel:(id)arg0;
- (id)initWithReuseIdentifier:(id)arg0;
- (id)defaultButton;
- (void)setDefaultButton:(id)arg0;
- (id)currentTag;
- (void)setCurrentTag:(id)arg0;

@end
