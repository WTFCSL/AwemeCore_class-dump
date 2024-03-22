//
//     Generated by private class-dump
//

@class UIColor, NSString, UIImageView, UIImage, IESECListKitBackgroundModel;

@interface IESECMallBackgroundView : UIView {
    IESECListKitBackgroundModel *_background;
    unsigned long long _currentThemeStyle;
    NSString *_defaultBgUrl;
    UIColor *_defaultColor;
    UIImageView *_bgImageView;
    double _topBarBottom;
    UIImage *_currentBgImage;
    NSString *_currentBackgroundUrl;
}

@property (retain, nonatomic) UIImageView *bgImageView;
@property (copy, nonatomic) NSString *currentBackgroundUrl;
@property (retain, nonatomic) IESECListKitBackgroundModel *background;
@property (nonatomic) unsigned long long currentThemeStyle;
@property (copy, nonatomic) NSString *defaultBgUrl;
@property (retain, nonatomic) UIColor *defaultColor;
@property (nonatomic) double topBarBottom;
@property (retain, nonatomic) UIImage *currentBgImage;

- (void)buildUI;
- (unsigned long long)currentThemeStyle;
- (void)setCurrentThemeStyle:(unsigned long long)arg0;
- (id)currentBgImage;
- (id)defaultDarkBgUrl;
- (void)setCurrentBackgroundUrl:(id)arg0;
- (void)setCurrentBgImage:(id)arg0;
- (id)defaultBgUrl;
- (id)currentBackgroundUrl;
- (void)setDefaultBgUrl:(id)arg0;
- (void)setGrayIfNeed:(BOOL)arg0;
- (void)listenListCollectionScrollOffsetY:(double)arg0;
- (double)topBarBottom;
- (void)setTopBarBottom:(double)arg0;
- (id)background;
- (void).cxx_destruct;
- (void)setBackground:(id)arg0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (void)dealloc;
- (void)updateData;
- (id)defaultColor;
- (void)setDefaultColor:(id)arg0;
- (void)setBgImageView:(id)arg0;
- (id)bgImageView;
- (void)buildConstraints;

@end
