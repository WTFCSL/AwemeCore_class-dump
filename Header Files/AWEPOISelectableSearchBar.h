//
//     Generated by private class-dump
//

@class NSString, UIImageView, UILabel, UIView;
@protocol AWEPOISelectableSearchBarDelegate;

@interface AWEPOISelectableSearchBar : AWECommonSearchBar {
    id<AWEPOISelectableSearchBarDelegate> delegate;
    unsigned long long _selectableType;
    UILabel *_selectAreaLabel;
    UIImageView *_upDownArrowImageView;
    UIView *_seperateView;
}

@property (nonatomic) unsigned long long selectableType;
@property (retain, nonatomic) UILabel *selectAreaLabel;
@property (retain, nonatomic) UIImageView *upDownArrowImageView;
@property (retain, nonatomic) UIView *seperateView;
@property (weak, nonatomic) id<AWEPOISelectableSearchBarDelegate> delegate;
@property (retain, nonatomic) NSString *selectAreaText;

- (id)seperateView;
- (void)setSeperateView:(id)arg0;
- (void)p_setupUI;
- (void)p_changeSearchBarIconImage;
- (void)p_addSelectableView;
- (id)selectAreaLabel;
- (id)upDownArrowImageView;
- (unsigned long long)selectableType;
- (void)setSelectableType:(unsigned long long)arg0;
- (void)handleTapSelectAreaGes;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0 selectableType:(unsigned long long)arg1;
- (void)showSelectableView;
- (void)hideSelectableView;
- (void)setSelectAreaText:(id)arg0;
- (id)selectAreaText;
- (void)rotateArrowImageView;
- (void)setSelectAreaLabel:(id)arg0;
- (void)setUpDownArrowImageView:(id)arg0;
- (void).cxx_destruct;
- (id)delegate;
- (void)setDelegate:(id)arg0;

@end
