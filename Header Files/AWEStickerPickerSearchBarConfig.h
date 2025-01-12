//
//     Generated by private class-dump
//

@class UIColor, UIImage;

@interface AWEStickerPickerSearchBarConfig : NSObject {
    UIColor *_backgroundColor;
    UIColor *_textColor;
    UIColor *_tintColor;
    UIColor *_searchFiledBackgroundColor;
    UIImage *_lensImage;
    UIImage *_clearImage;
    double _searchBarHeight;
    UIColor *_lensImageTintColor;
}

@property (retain, nonatomic) UIColor *backgroundColor;
@property (retain, nonatomic) UIColor *textColor;
@property (retain, nonatomic) UIColor *tintColor;
@property (retain, nonatomic) UIColor *searchFiledBackgroundColor;
@property (retain, nonatomic) UIImage *lensImage;
@property (retain, nonatomic) UIImage *clearImage;
@property (nonatomic) double searchBarHeight;
@property (retain, nonatomic) UIColor *lensImageTintColor;

+ (id)sharedConfig;

- (id)searchFiledBackgroundColor;
- (id)lensImage;
- (id)lensImageTintColor;
- (void)setSearchFiledBackgroundColor:(id)arg0;
- (void)setLensImage:(id)arg0;
- (void)setLensImageTintColor:(id)arg0;
- (void)setClearImage:(id)arg0;
- (double)searchBarHeight;
- (void)setSearchBarHeight:(double)arg0;
- (id)init;
- (id)clearImage;
- (void)setTintColor:(id)arg0;
- (void).cxx_destruct;
- (id)tintColor;
- (id)backgroundColor;
- (void)setTextColor:(id)arg0;
- (void)setBackgroundColor:(id)arg0;
- (id)textColor;

@end
