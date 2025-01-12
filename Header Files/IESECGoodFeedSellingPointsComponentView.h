//
//     Generated by private class-dump
//

@class IESEGoodsFeedSellingPointsStackView, UIImage, UILabel, NSMutableArray;

@interface IESECGoodFeedSellingPointsComponentView : IESECGoodsDetailBaseComponentView {
    UILabel *_privilegeLabel;
    UILabel *_logisticLabel;
    NSMutableArray *_secondLabels;
    UILabel *_rankingLabel;
    IESEGoodsFeedSellingPointsStackView *_stackView;
    UIImage *_rankIcon;
    UIImage *_arrowIcon;
}

@property (retain, nonatomic) UILabel *privilegeLabel;
@property (retain, nonatomic) UILabel *logisticLabel;
@property (retain, nonatomic) NSMutableArray *secondLabels;
@property (retain, nonatomic) UILabel *rankingLabel;
@property (retain, nonatomic) IESEGoodsFeedSellingPointsStackView *stackView;
@property (retain, nonatomic) UIImage *rankIcon;
@property (retain, nonatomic) UIImage *arrowIcon;

+ (BOOL)componentViewShouldShow:(id)arg0 style:(long long)arg1;
+ (double)componentViewHeight:(id)arg0 style:(long long)arg1;

- (id)arrowIcon;
- (void)setArrowIcon:(id)arg0;
- (void)configUI;
- (void)updateWithParameters:(id)arg0;
- (id)rankIcon;
- (void)setRankIcon:(id)arg0;
- (id)initWithParameters:(id)arg0 style:(long long)arg1 tracker:(id)arg2;
- (id)logisticLabel;
- (id)rankingLabel;
- (id)secondLabels;
- (id)privilegeLabel;
- (void)configRankingListWithParams:(id)arg0 isFirst:(BOOL)arg1;
- (void)configLogisticWithParams:(id)arg0 isFirst:(BOOL)arg1;
- (BOOL)servicesShouldShow:(id)arg0;
- (BOOL)salePointsShouldShow:(id)arg0;
- (void)configSecondLabelWithParams:(id)arg0 count:(long long)arg1 isFirst:(BOOL)arg2;
- (id)seconLabelWithIndex:(long long)arg0;
- (void)setPrivilegeLabel:(id)arg0;
- (void)setLogisticLabel:(id)arg0;
- (void)setSecondLabels:(id)arg0;
- (void)setRankingLabel:(id)arg0;
- (void).cxx_destruct;
- (id)stackView;
- (void)setStackView:(id)arg0;
- (void)layoutSubviews;

@end
