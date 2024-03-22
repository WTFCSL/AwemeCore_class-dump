//
//     Generated by private class-dump
//

@class UIImageView, UILabel, BDNovelComicRetainRecommendBook;

@interface BDNovelComicRetainRecommendCell : UITableViewCell {
    UIImageView *_coverView;
    UILabel *_scoreLabel;
    UILabel *_bookNameLabel;
    UILabel *_abstractLabel;
    UILabel *_infoLabel;
    BDNovelComicRetainRecommendBook *_book;
}

@property (retain, nonatomic) UIImageView *coverView;
@property (retain, nonatomic) UILabel *scoreLabel;
@property (retain, nonatomic) UILabel *bookNameLabel;
@property (retain, nonatomic) UILabel *abstractLabel;
@property (retain, nonatomic) UILabel *infoLabel;
@property (retain, nonatomic) BDNovelComicRetainRecommendBook *book;

- (void)setBookNameLabel:(id)arg0;
- (void)setAbstractLabel:(id)arg0;
- (id)bookNameLabel;
- (id)abstractLabel;
- (id)initWithStyle:(long long)arg0 reuseIdentifier:(id)arg1;
- (void).cxx_destruct;
- (void)updateStyle:(BOOL)arg0;
- (void)updateData:(id)arg0;
- (void)layoutSubviews;
- (id)infoLabel;
- (void)setInfoLabel:(id)arg0;
- (id)scoreLabel;
- (void)setScoreLabel:(id)arg0;
- (id)book;
- (void)setBook:(id)arg0;
- (id)coverView;
- (void)setCoverView:(id)arg0;

@end
