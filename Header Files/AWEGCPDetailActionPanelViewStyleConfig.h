//
//     Generated by private class-dump
//

@class UIColor, UIFont, NSString;

@interface AWEGCPDetailActionPanelViewStyleConfig : NSObject {
    UIFont *_buttonFont;
    UIColor *_buttonColor;
    double _buttonImageSize;
    double _imageTitleMargin;
    NSString *_likeImageName;
    NSString *_likeClickedImageName;
    NSString *_commentImageName;
    NSString *_favoriteImageName;
    NSString *_favoriteClickedImageName;
    NSString *_shareImageName;
}

@property (retain, nonatomic) UIFont *buttonFont;
@property (retain, nonatomic) UIColor *buttonColor;
@property (nonatomic) double buttonImageSize;
@property (nonatomic) double imageTitleMargin;
@property (copy, nonatomic) NSString *likeImageName;
@property (copy, nonatomic) NSString *likeClickedImageName;
@property (copy, nonatomic) NSString *commentImageName;
@property (copy, nonatomic) NSString *favoriteImageName;
@property (copy, nonatomic) NSString *favoriteClickedImageName;
@property (copy, nonatomic) NSString *shareImageName;

+ (id)defaultStyleConfig;
+ (id)newStrategyStyleConfig;

- (void)setImageTitleMargin:(double)arg0;
- (void)setLikeImageName:(id)arg0;
- (void)setLikeClickedImageName:(id)arg0;
- (void)setCommentImageName:(id)arg0;
- (void)setFavoriteImageName:(id)arg0;
- (void)setFavoriteClickedImageName:(id)arg0;
- (void)setShareImageName:(id)arg0;
- (double)imageTitleMargin;
- (id)likeImageName;
- (id)likeClickedImageName;
- (id)commentImageName;
- (id)favoriteImageName;
- (id)favoriteClickedImageName;
- (id)shareImageName;
- (id)buttonFont;
- (void).cxx_destruct;
- (void)setButtonImageSize:(double)arg0;
- (void)setButtonColor:(id)arg0;
- (id)buttonColor;
- (double)buttonImageSize;
- (void)setButtonFont:(id)arg0;

@end
