//
//     Generated by private class-dump
//

@class UIButton, NSString, ACCBarItem;

@interface AWENewCoverEditToolBarCollectionCell : UICollectionViewCell <ACCBarItemCustomView> {
    BOOL _enabled;
    BOOL needShow;
    double alpha;
    NSString *title;
    UIButton *barItemButton;
    NSString *_imageName;
    id /* block */ itemViewDidClicked;
    NSString *_selectedImageName;
    UIButton *_button;
    ACCBarItem *_barItem;
}

@property (retain, nonatomic) ACCBarItem *barItem;
@property (retain, nonatomic) UIButton *button;
@property (nonatomic) BOOL enable;
@property (nonatomic) BOOL needShow;
@property (copy, nonatomic) NSString *imageName;
@property (copy, nonatomic) NSString *selectedImageName;
@property (copy, nonatomic) NSString *title;
@property (nonatomic) BOOL enabled;
@property (nonatomic) double alpha;
@property (weak, nonatomic) UIButton *barItemButton;
@property (copy, nonatomic) id /* block */ itemViewDidClicked;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)needShow;
- (id)barItemButton;
- (void)setBarItemButton:(id)arg0;
- (void)setNeedShow:(BOOL)arg0;
- (id)selectedImageName;
- (void)setSelectedImageName:(id)arg0;
- (id)barItem;
- (void)setBarItem:(id)arg0;
- (void)setItemViewDidClicked:(id /* block */)arg0;
- (void)itemViewDidClicked:(id)arg0;
- (id /* block */)itemViewDidClicked;
- (void)configCellWithBarItem:(id)arg0;
- (BOOL)enable;
- (BOOL)enabled;
- (void).cxx_destruct;
- (id)imageName;
- (void)setImageName:(id)arg0;
- (void)setAlpha:(double)arg0;
- (id)button;
- (void)setButton:(id)arg0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (id)title;
- (void)setEnabled:(BOOL)arg0;
- (double)alpha;
- (void)setEnable:(BOOL)arg0;
- (void)setTitle:(id)arg0;
- (void)setupUI;

@end