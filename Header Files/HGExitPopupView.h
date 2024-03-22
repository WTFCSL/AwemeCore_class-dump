//
//     Generated by private class-dump
//

@class HGModel;

@interface HGExitPopupView : UIView {
    id /* block */ _exitAction;
    id /* block */ _addToDesktopAction;
    id /* block */ _closeAction;
    HGModel *_model;
}

@property (retain, nonatomic) HGModel *model;
@property (copy, nonatomic) id /* block */ exitAction;
@property (copy, nonatomic) id /* block */ addToDesktopAction;
@property (copy, nonatomic) id /* block */ closeAction;

- (void)clickCloseButton;
- (void)clickExitButton;
- (id /* block */)addToDesktopAction;
- (void)setAddToDesktopAction:(id /* block */)arg0;
- (void)clickAddToDesktopButton;
- (id)initWithModel:(id)arg0;
- (void)setModel:(id)arg0;
- (void)prepareLayout;
- (void).cxx_destruct;
- (id)model;
- (id /* block */)exitAction;
- (id /* block */)closeAction;
- (void)setExitAction:(id /* block */)arg0;
- (void)setCloseAction:(id /* block */)arg0;
- (void)setupUI;

@end
