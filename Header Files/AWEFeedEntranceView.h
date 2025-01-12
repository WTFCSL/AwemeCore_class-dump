//
//     Generated by private class-dump
//

@class NSString, UIImageView, UILabel, UIView;

@interface AWEFeedEntranceView : UIView <AWEFeedThemeManagerProtocol> {
    BOOL _shouldFixTheme;
    UIImageView *_imageView;
    UILabel *_textLabel;
    UIView *_backgroundView;
}

@property (retain, nonatomic) UIImageView *imageView;
@property (retain, nonatomic) UILabel *textLabel;
@property (retain, nonatomic) UIView *backgroundView;
@property (nonatomic) BOOL shouldFixTheme;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)configAlpha:(double)arg0 transform:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })arg1;
- (void)configImage:(id)arg0 Label:(id)arg1 position:(unsigned long long)arg2;
- (void)themeDidChange:(long long)arg0;
- (BOOL)shouldFixTheme;
- (void)setShouldFixTheme:(BOOL)arg0;
- (id)textLabel;
- (id)init;
- (id)backgroundView;
- (void).cxx_destruct;
- (id)imageView;
- (void)setImageView:(id)arg0;
- (void)setBackgroundView:(id)arg0;
- (void)setTextLabel:(id)arg0;

@end
