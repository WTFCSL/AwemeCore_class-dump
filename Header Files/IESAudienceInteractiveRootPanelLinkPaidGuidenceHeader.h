//
//     Generated by private class-dump
//

@class UILabel, UIButton;

@interface IESAudienceInteractiveRootPanelLinkPaidGuidenceHeader : UIView {
    id /* block */ _openPaidLinkBlock;
    id /* block */ _closeBlock;
    UILabel *_textLabel;
    UIButton *_acceptButton;
    UIButton *_closeButton;
}

@property (retain, nonatomic) UILabel *textLabel;
@property (retain, nonatomic) UIButton *acceptButton;
@property (retain, nonatomic) UIButton *closeButton;
@property (copy, nonatomic) id /* block */ openPaidLinkBlock;
@property (copy, nonatomic) id /* block */ closeBlock;

+ (float)heightForGuidenceHeader;
+ (id)header;

- (id /* block */)closeBlock;
- (void)setCloseBlock:(id /* block */)arg0;
- (void)setUI;
- (void)didTapCloseBlock;
- (void)didTapAcceptButton;
- (id /* block */)openPaidLinkBlock;
- (void)setOpenPaidLinkBlock:(id /* block */)arg0;
- (id)textLabel;
- (void).cxx_destruct;
- (void)setTextLabel:(id)arg0;
- (id)closeButton;
- (void)setCloseButton:(id)arg0;
- (id)acceptButton;
- (void)setAcceptButton:(id)arg0;

@end
