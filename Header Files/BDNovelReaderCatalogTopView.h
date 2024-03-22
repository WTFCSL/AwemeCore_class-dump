//
//     Generated by private class-dump
//

@class UIImageView, UILabel, UIView, UIButton;
@protocol BDNovelReaderCatalogTopViewDelegate;

@interface BDNovelReaderCatalogTopView : UIView {
    id<BDNovelReaderCatalogTopViewDelegate> _delegate;
    UIImageView *_bookImageView;
    UILabel *_bookNameLabel;
    UILabel *_authorNameLabel;
    UILabel *_statusLabel;
    UIButton *_orderIconButton;
    UIView *_bookDescCoverView;
    UIView *_orderContainer;
    UIView *_statusLineView;
    UILabel *_chapterCountLabel;
}

@property (retain, nonatomic) UIView *bookDescCoverView;
@property (retain, nonatomic) UIView *orderContainer;
@property (retain, nonatomic) UIView *statusLineView;
@property (retain, nonatomic) UILabel *chapterCountLabel;
@property (weak, nonatomic) id<BDNovelReaderCatalogTopViewDelegate> delegate;
@property (retain, nonatomic) UIImageView *bookImageView;
@property (retain, nonatomic) UILabel *bookNameLabel;
@property (retain, nonatomic) UILabel *authorNameLabel;
@property (retain, nonatomic) UILabel *statusLabel;
@property (retain, nonatomic) UIButton *orderIconButton;

- (void)setBookNameLabel:(id)arg0;
- (id)bookNameLabel;
- (id)statusLineView;
- (id)chapterCountLabel;
- (id)bookDescCoverView;
- (id)orderContainer;
- (void)updateWithBackgroudType:(unsigned long long)arg0;
- (void)updateCataLogData:(id)arg0;
- (void)setBookDescCoverView:(id)arg0;
- (void)setOrderContainer:(id)arg0;
- (void)setStatusLineView:(id)arg0;
- (void)setChapterCountLabel:(id)arg0;
- (void)onCatalogBookDescClick;
- (void)setBookImageView:(id)arg0;
- (void)setAuthorNameLabel:(id)arg0;
- (void)onOrderClick;
- (void)setOrderIconButton:(id)arg0;
- (id)bookImageView;
- (id)authorNameLabel;
- (id)orderIconButton;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (id)delegate;
- (void)layoutSubviews;
- (void)setDelegate:(id)arg0;
- (void)setReverse:(BOOL)arg0;
- (id)statusLabel;
- (void)setStatusLabel:(id)arg0;

@end