//
//     Generated by private class-dump
//

@class UILabel, IESLiveUserCardStore;

@interface IESLiveUserCardPreviewComponentView : UIView {
    IESLiveUserCardStore *_store;
    UILabel *_descText;
}

@property (retain, nonatomic) IESLiveUserCardStore *store;
@property (retain, nonatomic) UILabel *descText;

- (id)descText;
- (void)setDescText:(id)arg0;
- (void)trackWithEventName:(id)arg0;
- (void)doTap;
- (id)initWithStore:(id)arg0;
- (void).cxx_destruct;
- (id)store;
- (void)setStore:(id)arg0;
- (void)layoutSubviews;
- (void)setupUI;

@end
