//
//     Generated by private class-dump
//

@class NSArray, UIButton, UIView;
@protocol AWETeenLongPressPanelSegmentViewDelegate;

@interface AWETeenLongPressPanelSegmentView : UIView {
    id<AWETeenLongPressPanelSegmentViewDelegate> _delegate;
    NSArray *_items;
    UIView *_btnBackView;
    UIView *_animationView;
    UIButton *_seletedBtn;
    long long _selectedIndex;
}

@property (retain, nonatomic) NSArray *items;
@property (retain, nonatomic) UIView *btnBackView;
@property (retain, nonatomic) UIView *animationView;
@property (retain, nonatomic) UIButton *seletedBtn;
@property (nonatomic) long long selectedIndex;
@property (weak, nonatomic) id<AWETeenLongPressPanelSegmentViewDelegate> delegate;

- (void)setBtnBackView:(id)arg0;
- (void)btnDidClick:(id)arg0;
- (struct CGSize { double x0; double x1; })animationViewSize;
- (void)btnClick:(id)arg0 isUserAction:(BOOL)arg1;
- (id)btnBackView;
- (id)seletedBtn;
- (void)setSeletedBtn:(id)arg0;
- (void)setDefaultSelectIndex:(long long)arg0;
- (void)setItems:(id)arg0;
- (void).cxx_destruct;
- (id)items;
- (void)setSelectedIndex:(long long)arg0;
- (id)delegate;
- (id)initWithItems:(id)arg0;
- (void)setDelegate:(id)arg0;
- (void)setUp;
- (long long)selectedIndex;
- (id)animationView;
- (void)setAnimationView:(id)arg0;
- (id)initWithItems:(id)arg0 delegate:(id)arg1;
- (double)titleLabelFontSize;

@end
