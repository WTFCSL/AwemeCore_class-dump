//
//     Generated by private class-dump
//

@class NSString, IESLivePaidStreamActionButton, UILabel, IESLivePaidStreamUIConfig;

@interface IESLivePaidStreamRoomBlockView : UIView <IESLivePaidStreamBlockView> {
    IESLivePaidStreamUIConfig *_uiConfig;
    UILabel *_titleLabel;
    UILabel *_subTitleLabel;
    IESLivePaidStreamActionButton *_actionBtn;
    id /* block */ _actionHandler;
}

@property (retain, nonatomic) IESLivePaidStreamUIConfig *uiConfig;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *subTitleLabel;
@property (retain, nonatomic) IESLivePaidStreamActionButton *actionBtn;
@property (copy, nonatomic) id /* block */ actionHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)uiConfig;
- (void)setUiConfig:(id)arg0;
- (id)actionBtn;
- (void)setActionBtn:(id)arg0;
- (void)actionDidFire:(id)arg0;
- (void)install:(unsigned long long)arg0 uiConfig:(id)arg1 actionHandler:(id /* block */)arg2;
- (id)init;
- (void).cxx_destruct;
- (id /* block */)actionHandler;
- (void)setActionHandler:(id /* block */)arg0;
- (id)titleLabel;
- (void)uninstall;
- (void)setTitleLabel:(id)arg0;
- (id)hitTest:(struct CGPoint { double x0; double x1; })arg0 withEvent:(id)arg1;
- (id)subTitleLabel;
- (void)setSubTitleLabel:(id)arg0;

@end
