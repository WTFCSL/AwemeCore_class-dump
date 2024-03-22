//
//     Generated by private class-dump
//

@class UIViewController, AWETeenCustomDisplayViewModel, AWETeenCustomDisplayViewController;

@interface AWETeenAwemeTableViewCell : UITableViewCell {
    AWETeenCustomDisplayViewModel *_cellModel;
    AWETeenCustomDisplayViewController *_viewController;
    UIViewController *_parentVC;
}

@property (retain, nonatomic) AWETeenCustomDisplayViewModel *cellModel;
@property (retain, nonatomic) AWETeenCustomDisplayViewController *viewController;
@property (weak, nonatomic) UIViewController *parentVC;

- (void)setCellModel:(id)arg0;
- (void)p_setupParentVC:(id)arg0;
- (void)p_removeChildVC;
- (void)configWithModel:(id)arg0 parentVC:(id)arg1;
- (void)replaceViewController:(id)arg0 removeIfExisting:(BOOL)arg1;
- (void)p_addChildVC;
- (id)initWithStyle:(long long)arg0 reuseIdentifier:(id)arg1;
- (void)setViewController:(id)arg0;
- (id)viewController;
- (void).cxx_destruct;
- (id)cellModel;
- (id)parentVC;
- (void)setParentVC:(id)arg0;

@end