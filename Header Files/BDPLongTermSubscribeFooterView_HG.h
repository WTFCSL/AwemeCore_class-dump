//
//     Generated by private class-dump
//

@class NSString, UILabel;

@interface BDPLongTermSubscribeFooterView_HG : UIView {
    id /* block */ _callback;
    NSString *_refusalText;
    UILabel *_refusalLabel;
}

@property (copy, nonatomic) id /* block */ callback;

- (id)initWithRefusalText:(id)arg0;
- (void)refusalLabelClicked;
- (void).cxx_destruct;
- (void)setCallback:(id /* block */)arg0;
- (id /* block */)callback;
- (void)setupUI;

@end
