//
//     Generated by private class-dump
//

@class UIImageView, AWEECShoppingGuideMessageLinkSectionModel, UILabel;

@interface AWEECShoppingGuideCellLinkSection : AWEECShoppingGuideCellSection {
    UIImageView *_arrow;
    UILabel *_label;
    AWEECShoppingGuideMessageLinkSectionModel *_linkModel;
}

@property (retain, nonatomic) AWEECShoppingGuideMessageLinkSectionModel *linkModel;
@property (retain, nonatomic) UIImageView *arrow;
@property (retain, nonatomic) UILabel *label;

- (id)linkModel;
- (void)setupUIWithModel:(id)arg0;
- (void)setLinkModel:(id)arg0;
- (void)setArrow:(id)arg0;
- (id)arrow;
- (void)tapView:(id)arg0;
- (void).cxx_destruct;
- (void)setLabel:(id)arg0;
- (id)label;
- (struct CGSize { double x0; double x1; })expectedSize;

@end
