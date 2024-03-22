//
//     Generated by private class-dump
//

@class UIFont, UIColor, UIImageView, AWEAnchorNormalInfoModel, NSString, YYLabel;

@interface AWESearchNormalTagView : UIView <AWESearchTagViewUIInfoProtocol> {
    BOOL _isQuality;
    UIImageView *_iconView;
    YYLabel *_titleYYLabel;
    AWEAnchorNormalInfoModel *_anchorModel;
    UIFont *_labelFont;
    UIColor *_titleColor;
    UIColor *_lineColor;
}

@property (retain, nonatomic) UIImageView *iconView;
@property (retain, nonatomic) YYLabel *titleYYLabel;
@property (retain, nonatomic) AWEAnchorNormalInfoModel *anchorModel;
@property (nonatomic) BOOL isQuality;
@property (retain, nonatomic) UIFont *labelFont;
@property (retain, nonatomic) UIColor *titleColor;
@property (retain, nonatomic) UIColor *lineColor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)verticalLine;
- (void)setupUIWithModel:(id)arg0;
- (id)anchorModel;
- (void)setAnchorModel:(id)arg0;
- (void)reuseAnchor;
- (void)updateWithModel:(id)arg0 isQuality:(BOOL)arg1;
- (void)setIsQuality:(BOOL)arg0;
- (id)getAnchorText;
- (id)titleYYLabel;
- (BOOL)isQuality;
- (void)setTitleYYLabel:(id)arg0;
- (void)setLineColor:(id)arg0;
- (void).cxx_destruct;
- (void)setLabelFont:(id)arg0;
- (id)iconView;
- (id)lineColor;
- (void)setIconView:(id)arg0;
- (id)titleColor;
- (id)labelFont;
- (void)setTitleColor:(id)arg0;

@end