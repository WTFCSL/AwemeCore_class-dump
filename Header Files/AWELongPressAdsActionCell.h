//
//     Generated by private class-dump
//

@class UIButton;

@interface AWELongPressAdsActionCell : UITableViewCell {
    UIButton *_dislikeButton;
    UIButton *_likeButton;
}

@property (retain, nonatomic) UIButton *dislikeButton;
@property (retain, nonatomic) UIButton *likeButton;

- (id)dislikeButton;
- (void)setDislikeButton:(id)arg0;
- (void)dislikeButtonDidSelected;
- (void)likeButtonDidSelected;
- (void)adsActionViewDismiss;
- (void)dislikeButtonClick;
- (void)likeButtonClick;
- (id)initWithStyle:(long long)arg0 reuseIdentifier:(id)arg1;
- (void).cxx_destruct;
- (id)likeButton;
- (void)setLikeButton:(id)arg0;
- (void)setUpUI;

@end
