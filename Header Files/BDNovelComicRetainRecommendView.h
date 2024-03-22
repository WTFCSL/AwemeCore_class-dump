//
//     Generated by private class-dump
//

@class UIView, NSString, BDNovelComicRetainRecommendData, BDNovelAudioTextView, UIImageView, UIButton, UITableView, BDNovelComicBasePlugin, UILabel;

@interface BDNovelComicRetainRecommendView : UIView <UITableViewDelegate, UITableViewDataSource> {
    UIView *_maskView;
    UIView *_contentView;
    UIButton *_closeButton;
    UILabel *_titleLabel;
    UIImageView *_leftTitleImageView;
    UIImageView *_rightTitleImageView;
    UITableView *_contentTableView;
    UIView *_lineView;
    BDNovelAudioTextView *_confirmButton;
    BDNovelComicRetainRecommendData *_data;
    BDNovelComicBasePlugin *_showInPlugin;
}

@property (retain, nonatomic) UIView *maskView;
@property (retain, nonatomic) UIView *contentView;
@property (retain, nonatomic) UIButton *closeButton;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIImageView *leftTitleImageView;
@property (retain, nonatomic) UIImageView *rightTitleImageView;
@property (retain, nonatomic) UITableView *contentTableView;
@property (retain, nonatomic) UIView *lineView;
@property (retain, nonatomic) BDNovelAudioTextView *confirmButton;
@property (retain, nonatomic) BDNovelComicRetainRecommendData *data;
@property (weak, nonatomic) BDNovelComicBasePlugin *showInPlugin;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)showWithData:(id)arg0 showInPlugin:(id)arg1;

- (id)contentTableView;
- (void)setContentTableView:(id)arg0;
- (void)onCloseClick;
- (void)onConfirmClick;
- (id)showInPlugin;
- (void)innerClose;
- (id)showBookParams:(id)arg0 rank:(long long)arg1;
- (void)setShowInPlugin:(id)arg0;
- (void)setLeftTitleImageView:(id)arg0;
- (void)setRightTitleImageView:(id)arg0;
- (id)leftTitleImageView;
- (id)rightTitleImageView;
- (void)innerShow;
- (id)data;
- (long long)numberOfSectionsInTableView:(id)arg0;
- (void)tableView:(id)arg0 didSelectRowAtIndexPath:(id)arg1;
- (long long)tableView:(id)arg0 numberOfRowsInSection:(long long)arg1;
- (void).cxx_destruct;
- (id)tableView:(id)arg0 cellForRowAtIndexPath:(id)arg1;
- (void)setData:(id)arg0;
- (id)titleLabel;
- (id)maskView;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (id)contentView;
- (double)tableView:(id)arg0 heightForRowAtIndexPath:(id)arg1;
- (void)updateStyle:(BOOL)arg0;
- (void)updateData:(id)arg0;
- (void)layoutSubviews;
- (void)setTitleLabel:(id)arg0;
- (void)setMaskView:(id)arg0;
- (void)setContentView:(id)arg0;
- (id)lineView;
- (void)setLineView:(id)arg0;
- (void)setupViews;
- (id)confirmButton;
- (void)setConfirmButton:(id)arg0;
- (id)closeButton;
- (void)setCloseButton:(id)arg0;

@end
