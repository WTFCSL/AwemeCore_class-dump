//
//     Generated by private class-dump
//

@class UIImageView, IESLiveImageView, UIView;
@protocol IESLiveWebPPlayer;

@interface IESLiveToolbarExpandView : UIView {
    BOOL _hasloadThemeImage;
    UIView *_shareItemView;
    UIImageView<IESLiveWebPPlayer> *_shareItemThemeView;
    IESLiveImageView *_shareItemIconView;
    UIView *_converContentView;
}

@property (retain, nonatomic) UIView *shareItemView;
@property (retain, nonatomic) UIImageView<IESLiveWebPPlayer> *shareItemThemeView;
@property (retain, nonatomic) IESLiveImageView *shareItemIconView;
@property (retain, nonatomic) UIView *converContentView;
@property (nonatomic) BOOL hasloadThemeImage;

- (void)loadThemeIcon:(id)arg0;
- (id)shareItemView;
- (void)setShareItemView:(id)arg0;
- (void)setShareItemIconView:(id)arg0;
- (id)shareItemIconView;
- (void)setShareItemThemeView:(id)arg0;
- (id)shareItemThemeView;
- (void)setConverContentView:(id)arg0;
- (id)converContentView;
- (void)refreshThemeImage:(id)arg0 iconImageJsonStr:(id)arg1;
- (void)setHasloadThemeImage:(BOOL)arg0;
- (BOOL)hasloadThemeImage;
- (void)loadDefaultImage:(id)arg0;
- (void)addConvertView:(id)arg0 size:(struct CGSize { double x0; double x1; })arg1;
- (BOOL)loadThemeImageSuccess;
- (id)init;
- (void).cxx_destruct;
- (void)setupSubviews;
- (void)showAnimated:(BOOL)arg0;

@end