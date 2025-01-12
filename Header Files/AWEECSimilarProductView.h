//
//     Generated by private class-dump
//

@class NSString, UIImageView, AWEECSimilarProductModel, UILabel;

@interface AWEECSimilarProductView : UIView <AWECommentListCustomExtraViewProtocol> {
    BOOL _isBGColorWhite;
    AWEECSimilarProductModel *_model;
    UIImageView *_iconImageView;
    UILabel *_searchSameTitle;
    UILabel *_searchSameContent;
}

@property (retain, nonatomic) AWEECSimilarProductModel *model;
@property (retain, nonatomic) UIImageView *iconImageView;
@property (retain, nonatomic) UILabel *searchSameTitle;
@property (retain, nonatomic) UILabel *searchSameContent;
@property (nonatomic) BOOL isBGColorWhite;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setIsBGColorWhite:(BOOL)arg0;
- (BOOL)isBGColorWhite;
- (double)customViewHeightInCommentListHeader;
- (void)updateUITheme;
- (id)initWithModel:(id)arg0 isBGColorWhite:(BOOL)arg1;
- (id)searchSameContent;
- (void)handleTapView:(id)arg0;
- (id)searchSameTitle;
- (void)p_trackVSCommentShow;
- (id)p_baseParams;
- (void)p_trackVSCommentClicked;
- (void)setSearchSameTitle:(id)arg0;
- (void)setSearchSameContent:(id)arg0;
- (void)setModel:(id)arg0;
- (void).cxx_destruct;
- (id)model;
- (void)refreshUI;
- (id)iconImageView;
- (void)setIconImageView:(id)arg0;
- (void)_setupUI;

@end
