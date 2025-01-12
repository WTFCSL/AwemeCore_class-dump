//
//     Generated by private class-dump
//

@class NSDictionary, AWEButton, NSString;
@protocol AWEIMShareModelProtocol;

@interface AFDLongPressIMSendButton : UIView <AFDHoverable> {
    BOOL _enableDynamicTheme;
    long long _state;
    AWEButton *_actionButton;
    id<AWEIMShareModelProtocol> _shareModel;
    id /* block */ _clickBlock;
    id /* block */ _trackSendClickedBlock;
    NSDictionary *_infoDict;
}

@property (retain, nonatomic) id<AWEIMShareModelProtocol> shareModel;
@property (nonatomic) long long state;
@property (copy, nonatomic) id /* block */ clickBlock;
@property (copy, nonatomic) id /* block */ trackSendClickedBlock;
@property (retain, nonatomic) NSDictionary *infoDict;
@property (retain, nonatomic) AWEButton *actionButton;
@property (nonatomic) BOOL enableDynamicTheme;
@property (readonly, nonatomic) long long afdHoverStyle;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setClickBlock:(id /* block */)arg0;
- (void)actionButtonClicked;
- (id /* block */)clickBlock;
- (void)hoverBegan:(id)arg0;
- (void)hoverEnded:(id)arg0;
- (void)hoverCancelled:(id)arg0;
- (BOOL)enableDynamicTheme;
- (void)setEnableDynamicTheme:(BOOL)arg0;
- (void)setTrackSendClickedBlock:(id /* block */)arg0;
- (void)trackWithdrawClicked;
- (id /* block */)trackSendClickedBlock;
- (void)configWithShareModel:(id)arg0 shareState:(long long)arg1 clickBlock:(id /* block */)arg2 trackSendClickedBlock:(id /* block */)arg3 infoDict:(id)arg4 animated:(BOOL)arg5;
- (id)init;
- (void).cxx_destruct;
- (long long)state;
- (void)setState:(long long)arg0;
- (id)titleForState:(long long)arg0;
- (id)backgroundColorForState:(long long)arg0;
- (id)titleColorForState:(long long)arg0;
- (void)setupUI;
- (id)actionButton;
- (void)setActionButton:(id)arg0;
- (void)updateUI;
- (id)shareModel;
- (void)setShareModel:(id)arg0;
- (void)updateUIAnimated:(BOOL)arg0;
- (void)updateTitle:(id)arg0;
- (id)infoDict;
- (void)setInfoDict:(id)arg0;

@end
