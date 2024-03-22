//
//     Generated by private class-dump
//

@class DUXPopover, UIImageView, UIView, UILabel;

@interface AWEDiscoverFeedPauseEntranceView : UIView {
    UIView *_contentView;
    UIView *_lineView;
    UIImageView *_searchImage;
    UILabel *_searchLable;
    id /* block */ _tapBlock;
    DUXPopover *_popover;
}

@property (retain, nonatomic) DUXPopover *popover;
@property (retain, nonatomic) UIView *contentView;
@property (retain, nonatomic) UIView *lineView;
@property (retain, nonatomic) UIImageView *searchImage;
@property (retain, nonatomic) UILabel *searchLable;
@property (copy, nonatomic) id /* block */ tapBlock;

+ (id)shareInstance;

- (id /* block */)tapBlock;
- (void)setTapBlock:(id /* block */)arg0;
- (void)setSearchImage:(id)arg0;
- (id)searchImage;
- (void)setSearchLable:(id)arg0;
- (id)searchLable;
- (void)removeAnimationForSubViews;
- (void)popoverShow;
- (void)pauseSearch;
- (id)init;
- (void)dismiss;
- (void).cxx_destruct;
- (id)popover;
- (void)show;
- (id)contentView;
- (void)setPopover:(id)arg0;
- (void)setContentView:(id)arg0;
- (id)lineView;
- (void)setLineView:(id)arg0;
- (void)setUpUI;

@end