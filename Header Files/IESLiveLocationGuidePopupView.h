//
//     Generated by private class-dump
//

@class IESLiveLocationStore, UIView;
@protocol IESLiveLocationAction;

@interface IESLiveLocationGuidePopupView : HTSLivePopUpView {
    IESLiveLocationStore *_store;
    UIView *_headImageView;
    UIView *_nameLabel;
    UIView *_hintLabel;
    UIView *_openBtn;
    id<IESLiveLocationAction> _locationDispatcher;
}

@property (weak, nonatomic) IESLiveLocationStore *store;
@property (retain, nonatomic) UIView *headImageView;
@property (retain, nonatomic) UIView *nameLabel;
@property (retain, nonatomic) UIView *hintLabel;
@property (retain, nonatomic) UIView *openBtn;
@property (retain, nonatomic) id<IESLiveLocationAction> locationDispatcher;

- (void)didSetAttachingDIContext;
- (id)openBtn;
- (void)setOpenBtn:(id)arg0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0 store:(id)arg1;
- (void)openLocation;
- (void)setHeadImageView:(id)arg0;
- (id)headImageView;
- (void).cxx_destruct;
- (id)store;
- (void)setStore:(id)arg0;
- (id)nameLabel;
- (void)setNameLabel:(id)arg0;
- (id)hintLabel;
- (void)setHintLabel:(id)arg0;
- (id)locationDispatcher;
- (void)setLocationDispatcher:(id)arg0;
- (void)layoutUI;

@end