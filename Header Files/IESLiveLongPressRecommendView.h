//
//     Generated by private class-dump
//

@class UILabel, UIButton, UIImageView;
@protocol IESLiveWebPPlayer;

@interface IESLiveLongPressRecommendView : UIView {
    id /* block */ _shareButtonClicked;
    UILabel *_title;
    UILabel *_subTitle;
    UIButton *_shareButton;
    UIImageView<IESLiveWebPPlayer> *_webpView;
}

@property (retain, nonatomic) UILabel *title;
@property (retain, nonatomic) UILabel *subTitle;
@property (retain, nonatomic) UIButton *shareButton;
@property (retain, nonatomic) UIImageView<IESLiveWebPPlayer> *webpView;
@property (copy, nonatomic) id /* block */ shareButtonClicked;

- (id /* block */)shareButtonClicked;
- (void)setShareButtonClicked:(id /* block */)arg0;
- (void)p_shareButtonClicked;
- (id)webpView;
- (void)setWebpView:(id)arg0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (id)title;
- (void)setSubTitle:(id)arg0;
- (id)subTitle;
- (void)setTitle:(id)arg0;
- (void)setupUI;
- (id)shareButton;
- (void)setShareButton:(id)arg0;

@end
