//
//     Generated by private class-dump
//

@class IESECLiveAnchorAuthorStatsItemModel, NSArray, UILabel, UIView, UIButton;
@protocol IESECLiveAnchorPickedCommodityHeaderCellDelegate;

@interface IESECLiveAnchorPickedCommodityHeaderCell : UICollectionViewCell {
    UIView *_valueView;
    UILabel *_frontLabel;
    UILabel *_middleLabel;
    UILabel *_backLabel;
    UILabel *_nameLabel;
    UIButton *_descButton;
    NSArray *_numbers;
    IESECLiveAnchorAuthorStatsItemModel *_item;
    id<IESECLiveAnchorPickedCommodityHeaderCellDelegate> _delegate;
}

@property (retain, nonatomic) UIView *valueView;
@property (retain, nonatomic) UILabel *frontLabel;
@property (retain, nonatomic) UILabel *middleLabel;
@property (retain, nonatomic) UILabel *backLabel;
@property (retain, nonatomic) UILabel *nameLabel;
@property (retain, nonatomic) UIButton *descButton;
@property (retain, nonatomic) NSArray *numbers;
@property (retain, nonatomic) IESECLiveAnchorAuthorStatsItemModel *item;
@property (weak, nonatomic) id<IESECLiveAnchorPickedCommodityHeaderCellDelegate> delegate;

+ (id)identity;

- (id)descButton;
- (void)setDescButton:(id)arg0;
- (id)backLabel;
- (void)setBackLabel:(id)arg0;
- (id)frontLabel;
- (void)setFrontLabel:(id)arg0;
- (void)setNumbers:(id)arg0;
- (void)descClick;
- (id)valueText:(id)arg0;
- (void)setValueView:(id)arg0;
- (id)item;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (id)delegate;
- (id)nameLabel;
- (void)setDelegate:(id)arg0;
- (void)setItem:(id)arg0;
- (void)setNameLabel:(id)arg0;
- (void)setupUI;
- (id)valueView;
- (id)numbers;
- (id)middleLabel;
- (void)setMiddleLabel:(id)arg0;

@end
