//
//     Generated by private class-dump
//

@class UIImageView, AWEPOITagRateGradeModel;

@interface AWEPOIUGCRateSingleStarView : UIView {
    AWEPOITagRateGradeModel *_grade;
    UIImageView *_unselectedIcon;
    UIImageView *_selectedIcon;
    struct CGSize { double width; double height; } _size;
}

@property (retain, nonatomic) AWEPOITagRateGradeModel *grade;
@property (nonatomic) struct CGSize { double width; double height; } size;
@property (retain, nonatomic) UIImageView *unselectedIcon;
@property (retain, nonatomic) UIImageView *selectedIcon;

- (id)selectedIcon;
- (void)setSelectedIcon:(id)arg0;
- (id)unselectedIcon;
- (void)setUnselectedIcon:(id)arg0;
- (void)preDownload;
- (id)initWithGrade:(id)arg0 size:(struct CGSize { double x0; double x1; })arg1;
- (void)updateWtihUnselected:(id)arg0 selected:(id)arg1 animaiton:(id)arg2;
- (void).cxx_destruct;
- (id)grade;
- (struct CGSize { double x0; double x1; })size;
- (void)setSize:(struct CGSize { double x0; double x1; })arg0;
- (void)setGrade:(id)arg0;

@end
