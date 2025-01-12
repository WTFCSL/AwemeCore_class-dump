//
//     Generated by private class-dump
//

@class UIImage, NSString, UIFont;

@interface AFDLongPressRecommendActionModel : NSObject {
    BOOL _shouldPausePlayerWhenSelected;
    BOOL _shouldHideRightImage;
    UIImage *_iconImage;
    NSString *_title;
    NSString *_subtitle;
    id /* block */ _actionBlock;
    UIFont *_titleFont;
    double _titleLeftPadding;
}

@property (retain, nonatomic) UIImage *iconImage;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *subtitle;
@property (nonatomic) BOOL shouldPausePlayerWhenSelected;
@property (nonatomic) BOOL shouldHideRightImage;
@property (copy, nonatomic) id /* block */ actionBlock;
@property (retain, nonatomic) UIFont *titleFont;
@property (nonatomic) double titleLeftPadding;

- (double)titleLeftPadding;
- (BOOL)shouldHideRightImage;
- (BOOL)shouldPausePlayerWhenSelected;
- (void)setShouldPausePlayerWhenSelected:(BOOL)arg0;
- (void)setShouldHideRightImage:(BOOL)arg0;
- (void)setTitleLeftPadding:(double)arg0;
- (id)iconImage;
- (void).cxx_destruct;
- (id)title;
- (id)titleFont;
- (id /* block */)actionBlock;
- (id)subtitle;
- (void)setIconImage:(id)arg0;
- (void)setTitleFont:(id)arg0;
- (void)setSubtitle:(id)arg0;
- (void)setTitle:(id)arg0;
- (void)setActionBlock:(id /* block */)arg0;

@end
