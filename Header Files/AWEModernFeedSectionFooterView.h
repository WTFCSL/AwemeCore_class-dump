//
//     Generated by private class-dump
//

@class AWEModernFeedCellSeparatorModel, NSString, UIImageView, UILabel, UIView, UIButton;
@protocol AWEModernFeedCellFrameProtocol, AWEAdMoreLinkView;

@interface AWEModernFeedSectionFooterView : UITableViewHeaderFooterView <AWESearchCachalotCardViewProtocol, AWEModernFeedSectionFooterViewProtocol> {
    long long _seperationType;
    id<AWEModernFeedCellFrameProtocol> _cellFrame;
    AWEModernFeedCellSeparatorModel *_separatorModel;
    NSString *_browseHistoryTip;
    NSString *_referString;
    UIView *_seperationView;
    UIView *_bottomSeperationLine;
    UILabel *_timeLabel;
    UIButton *_moreBtn;
    UIView<AWEAdMoreLinkView> *_adTagView;
    UILabel *_browseTipLabel;
    UIImageView *_spotImageView;
    UIView *_tagBackgroundView;
    struct CGSize { double width; double height; } _browseLabelSize;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) UIView *seperationView;
@property (retain, nonatomic) UIView *bottomSeperationLine;
@property (retain, nonatomic) UILabel *timeLabel;
@property (retain, nonatomic) UIButton *moreBtn;
@property (retain, nonatomic) UIView<AWEAdMoreLinkView> *adTagView;
@property (retain, nonatomic) UILabel *browseTipLabel;
@property (nonatomic) struct CGSize { double width; double height; } browseLabelSize;
@property (retain, nonatomic) UIImageView *spotImageView;
@property (retain, nonatomic) UIView *tagBackgroundView;
@property (nonatomic) long long seperationType;
@property (retain, nonatomic) id<AWEModernFeedCellFrameProtocol> cellFrame;
@property (retain, nonatomic) AWEModernFeedCellSeparatorModel *separatorModel;
@property (copy, nonatomic) NSString *browseHistoryTip;
@property (copy, nonatomic) NSString *referString;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (struct CGSize { double x0; double x1; })sizeWithViewModel:(id)arg0 width:(double)arg1;
+ (id)getBottomSeparatorModelWithCellModel:(id)arg0;
+ (double)footerHeightForCellModel:(id)arg0;
+ (BOOL)shouldShowTimeInFooterViewForFrame:(id)arg0;
+ (BOOL)shouldShowAdTag:(id)arg0;
+ (id)identifier;

- (id)componentView;
- (void)updateWithViewModel:(id)arg0;
- (id)referString;
- (void)setReferString:(id)arg0;
- (void)setMoreBtn:(id)arg0;
- (id)moreBtn;
- (id)adTagView;
- (id)separatorModel;
- (void)setSeparatorModel:(id)arg0;
- (void)moreBtnClicked:(id)arg0;
- (void)setAdTagView:(id)arg0;
- (id)cellFrame;
- (void)setCellFrame:(id)arg0;
- (id)tagBackgroundView;
- (void)setTagBackgroundView:(id)arg0;
- (void)updateAdTagWithModel:(id)arg0 offsetY:(double)arg1;
- (void)setSeperationType:(long long)arg0;
- (id)seperationView;
- (id)bottomSeperationLine;
- (id)browseTipLabel;
- (id)spotImageView;
- (long long)seperationType;
- (struct CGSize { double x0; double x1; })browseLabelSize;
- (void)LayoutBottomSeperationLine;
- (void)showSearchAdSpotIfNeeded;
- (void)setQualityStyleBackground;
- (unsigned long long)displayTypeForFooterView;
- (void)showXiGuaShare:(BOOL)arg0;
- (void)showXiguaVideoSharePanel;
- (void)setBrowseHistoryTip:(id)arg0;
- (BOOL)shouldShowAdLearnMoreLynxButtonWithCellFrame:(id)arg0;
- (id)browseHistoryTip;
- (void)setSeperationView:(id)arg0;
- (void)setBottomSeperationLine:(id)arg0;
- (void)setBrowseTipLabel:(id)arg0;
- (void)setBrowseLabelSize:(struct CGSize { double x0; double x1; })arg0;
- (void)setSpotImageView:(id)arg0;
- (void).cxx_destruct;
- (void)setTimeLabel:(id)arg0;
- (void)layoutSubviews;
- (id)timeLabel;
- (id)initWithReuseIdentifier:(id)arg0;

@end