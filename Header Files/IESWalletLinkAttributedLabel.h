//
//     Generated by private class-dump
//

@class UILabel, IESWalletLinkAttributedItem;
@protocol IESLiveURLSchemaHandler;

@interface IESWalletLinkAttributedLabel : UIView {
    IESWalletLinkAttributedItem *_item;
    UILabel *_textLabel;
    id<IESLiveURLSchemaHandler> _walletRouter;
}

@property (retain, nonatomic) IESWalletLinkAttributedItem *item;
@property (retain, nonatomic) UILabel *textLabel;
@property (retain, nonatomic) id<IESLiveURLSchemaHandler> walletRouter;

- (id)walletRouter;
- (void)setWalletRouter:(id)arg0;
- (id)textLabel;
- (id)item;
- (void).cxx_destruct;
- (double)contentHeight;
- (void)setItem:(id)arg0;
- (void)setTextLabel:(id)arg0;
- (id)initWithItem:(id)arg0;
- (void)setupUI;
- (void)handleTap:(id)arg0;

@end
