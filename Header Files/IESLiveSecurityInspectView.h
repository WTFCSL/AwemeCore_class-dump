//
//     Generated by private class-dump
//

@class NSString, IESLiveSecurityInspectStore, UIImageView, UILabel, UIBezierPath;

@interface IESLiveSecurityInspectView : UIView <HTSLivePluginLayoutView> {
    BOOL _isOpen;
    BOOL _isFirstShow;
    IESLiveSecurityInspectStore *_store;
    UIImageView *_containerView;
    UIImageView *_iconImage;
    UILabel *_titleLabel;
    UILabel *_subTitleLabel;
    UIBezierPath *_path;
}

@property (weak, nonatomic) IESLiveSecurityInspectStore *store;
@property (retain, nonatomic) UIImageView *containerView;
@property (retain, nonatomic) UIImageView *iconImage;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *subTitleLabel;
@property (retain, nonatomic) UIBezierPath *path;
@property (nonatomic) BOOL isOpen;
@property (nonatomic) BOOL isFirstShow;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setIsFirstShow:(BOOL)arg0;
- (BOOL)isFirstShow;
- (struct CGSize { double x0; double x1; })pluginLayoutContentSize;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })pluginLayoutContentInsets;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0 store:(id)arg1;
- (void)openToFold;
- (double)totalWith1;
- (double)totalWith2;
- (void)openUI;
- (void)foldUI;
- (void)foldToOpen;
- (void)setPath:(id)arg0;
- (id)iconImage;
- (void)setIsOpen:(BOOL)arg0;
- (void).cxx_destruct;
- (id)store;
- (id)path;
- (id)titleLabel;
- (void)setContainerView:(id)arg0;
- (void)setStore:(id)arg0;
- (BOOL)isOpen;
- (id)containerView;
- (id)viewType;
- (void)setTitleLabel:(id)arg0;
- (void)setIconImage:(id)arg0;
- (id)hitTest:(struct CGPoint { double x0; double x1; })arg0 withEvent:(id)arg1;
- (id)subTitleLabel;
- (void)setSubTitleLabel:(id)arg0;

@end