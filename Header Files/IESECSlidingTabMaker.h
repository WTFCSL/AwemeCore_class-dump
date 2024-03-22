//
//     Generated by private class-dump
//

@class NSString, NSArray, UIImage, NSAttributedString;

@interface IESECSlidingTabMaker : NSObject <IESECSlidingTabConvertible> {
    BOOL _showRedDot;
    NSString *_title;
    NSString *_selectedTitle;
    NSString *_selectedColor;
    NSString *_unselectedColor;
    UIImage *_image;
    UIImage *_selectedImage;
    unsigned long long _badgeImagePosition;
    NSArray *_badgeImageURLArray;
    NSAttributedString *_badgeLabelAttributedText;
    NSAttributedString *_attributedTitle;
    NSAttributedString *_selectedAttributedTitle;
    struct CGSize { double width; double height; } _iconSize;
    struct CGSize { double width; double height; } _selectedIconSize;
}

@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *selectedTitle;
@property (copy, nonatomic) NSString *selectedColor;
@property (copy, nonatomic) NSString *unselectedColor;
@property (retain, nonatomic) UIImage *image;
@property (retain, nonatomic) UIImage *selectedImage;
@property (nonatomic) BOOL showRedDot;
@property (nonatomic) unsigned long long badgeImagePosition;
@property (copy, nonatomic) NSArray *badgeImageURLArray;
@property (copy, nonatomic) NSAttributedString *badgeLabelAttributedText;
@property (copy, nonatomic) NSAttributedString *attributedTitle;
@property (copy, nonatomic) NSAttributedString *selectedAttributedTitle;
@property (nonatomic) struct CGSize { double width; double height; } iconSize;
@property (nonatomic) struct CGSize { double width; double height; } selectedIconSize;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)showRedDot;
- (id)iesec_tabAttributedTitle;
- (struct CGSize { double x0; double x1; })iesec_iconSize;
- (struct CGSize { double x0; double x1; })iesec_selectedIconSize;
- (id)iesec_tabTitle;
- (id)iesec_tabImage;
- (id)iesec_unSelectedColor;
- (id)iesec_tabSelectedAttributedTitle;
- (id)iesec_tabSelectedTitle;
- (id)iesec_tabSelectedImage;
- (id)iesec_selectedColor;
- (id)badgeImageURLArray;
- (id)badgeLabelAttributedText;
- (unsigned long long)badgeImagePosition;
- (void)setShowRedDot:(BOOL)arg0;
- (id)unselectedColor;
- (void)setUnselectedColor:(id)arg0;
- (struct CGSize { double x0; double x1; })selectedIconSize;
- (void)setBadgeImageURLArray:(id)arg0;
- (void)setSelectedIconSize:(struct CGSize { double x0; double x1; })arg0;
- (id)selectedAttributedTitle;
- (void)setBadgeImagePosition:(unsigned long long)arg0;
- (void)setBadgeLabelAttributedText:(id)arg0;
- (void)setSelectedAttributedTitle:(id)arg0;
- (void)setIconSize:(struct CGSize { double x0; double x1; })arg0;
- (struct CGSize { double x0; double x1; })iconSize;
- (void).cxx_destruct;
- (id)image;
- (id)attributedTitle;
- (void)setAttributedTitle:(id)arg0;
- (id)title;
- (void)setImage:(id)arg0;
- (id)selectedColor;
- (void)setSelectedColor:(id)arg0;
- (void)setTitle:(id)arg0;
- (void)setSelectedImage:(id)arg0;
- (id)selectedImage;
- (id)selectedTitle;
- (void)setSelectedTitle:(id)arg0;

@end