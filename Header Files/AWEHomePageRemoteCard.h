//
//     Generated by private class-dump
//

@class AWEHomePageRemoteCommonCardDataModel, NSString, UIImageView, AWEHomePageRemoteContext, UILabel, AWEHomePageRemoteItemDataModel;

@interface AWEHomePageRemoteCard : UIView <AWEHomePageRemoteViewProtocol> {
    AWEHomePageRemoteContext *_context;
    UIImageView *_imageView;
    UILabel *_mainContentLabel;
    UILabel *_subContentLabel;
    UIImageView *_arrowIconImageView;
    long long _themeType;
    AWEHomePageRemoteItemDataModel *_originItemDataModel;
    AWEHomePageRemoteCommonCardDataModel *_cardDataModel;
}

@property (retain, nonatomic) AWEHomePageRemoteContext *context;
@property (retain, nonatomic) UIImageView *imageView;
@property (retain, nonatomic) UILabel *mainContentLabel;
@property (retain, nonatomic) UILabel *subContentLabel;
@property (retain, nonatomic) UIImageView *arrowIconImageView;
@property (nonatomic) long long themeType;
@property (retain, nonatomic) AWEHomePageRemoteItemDataModel *originItemDataModel;
@property (retain, nonatomic) AWEHomePageRemoteCommonCardDataModel *cardDataModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)contentViewBackgroundColor;
- (void)updateImageAndColor;
- (void)updateWithItemDataModel:(id)arg0;
- (void)updateWithItemDataModel:(id)arg0 context:(id)arg1;
- (double)homePageRemoteViewHeight;
- (void)homePageThemeDidChange:(long long)arg0;
- (void)reloadWhenPanelShowWithItemDataModel:(id)arg0;
- (id)mainContentLabel;
- (id)subContentLabel;
- (id)arrowIconImageView;
- (id)mainContentLabelTextColor;
- (id)subContentLabelTextColor;
- (id)arrowIconPlaceholderImage;
- (id)mainPlaceholderImage;
- (id)mainContentLabelFont;
- (id)subContentLabelFont;
- (void)setCardDataModel:(id)arg0;
- (id)mainImageUrlArray;
- (id)arrowIconImageUrlArray;
- (id)cardDataModel;
- (void)setMainContentLabel:(id)arg0;
- (void)setSubContentLabel:(id)arg0;
- (void)setArrowIconImageView:(id)arg0;
- (id)originItemDataModel;
- (void)setOriginItemDataModel:(id)arg0;
- (void).cxx_destruct;
- (void)setContext:(id)arg0;
- (id)imageView;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (void)setImageView:(id)arg0;
- (long long)themeType;
- (id)context;
- (void)setupUI;
- (void)setThemeType:(long long)arg0;

@end