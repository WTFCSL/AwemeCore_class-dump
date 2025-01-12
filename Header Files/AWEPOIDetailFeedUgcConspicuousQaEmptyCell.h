//
//     Generated by private class-dump
//

@class AWEPOIFeedUgcQAEntranceInfoModel, UIImageView, AWEPOIDetailConstData, UILabel, UIView, NSString;
@protocol AWEPOIDetailFeedUgcConspicuousQaEmptyCellDelegate;

@interface AWEPOIDetailFeedUgcConspicuousQaEmptyCell : UICollectionViewCell <AWEPOIDetailAwemeWaterfallAwemeCellProtocol> {
    unsigned long long _scene;
    id<AWEPOIDetailFeedUgcConspicuousQaEmptyCellDelegate> _delegate;
    UIView *_containerView;
    UILabel *_titleLabel;
    UILabel *_emptyLabel;
    UIView *_splitLine;
    UIView *_bottomView;
    UIImageView *_iconImageView;
    UILabel *_promptLabel;
    UIImageView *_arrowIcon;
    UIImageView *_writeImageView;
    UILabel *_writeEmptyLabel;
    UIView *_writeBottomView;
    UILabel *_writePromptLabel;
    UIImageView *_moreFoldIcon;
    AWEPOIFeedUgcQAEntranceInfoModel *_qaModel;
    AWEPOIDetailConstData *_constData;
    NSString *_creationIDForToComment;
}

@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *emptyLabel;
@property (retain, nonatomic) UIView *splitLine;
@property (retain, nonatomic) UIView *bottomView;
@property (retain, nonatomic) UIImageView *iconImageView;
@property (retain, nonatomic) UILabel *promptLabel;
@property (retain, nonatomic) UIImageView *arrowIcon;
@property (retain, nonatomic) UIImageView *writeImageView;
@property (retain, nonatomic) UILabel *writeEmptyLabel;
@property (retain, nonatomic) UIView *writeBottomView;
@property (retain, nonatomic) UILabel *writePromptLabel;
@property (retain, nonatomic) UIImageView *moreFoldIcon;
@property (retain, nonatomic) AWEPOIFeedUgcQAEntranceInfoModel *qaModel;
@property (retain, nonatomic) AWEPOIDetailConstData *constData;
@property (copy, nonatomic) NSString *creationIDForToComment;
@property (weak, nonatomic) id<AWEPOIDetailFeedUgcConspicuousQaEmptyCellDelegate> delegate;
@property (nonatomic) unsigned long long scene;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (double)cellHeightForModel:(id)arg0 withWidth:(double)arg1;

- (void)rx_store:(id)arg0 didSetWithModule:(id)arg1;
- (id)splitLine;
- (void)setSplitLine:(id)arg0;
- (id)arrowIcon;
- (void)setArrowIcon:(id)arg0;
- (id)constData;
- (void)updateCellWithModel:(id)arg0 constData:(id)arg1 index:(long long)arg2;
- (void)setConstData:(id)arg0;
- (id)trackingParams;
- (id)writeImageView;
- (id)writeEmptyLabel;
- (id)writeBottomView;
- (id)moreFoldIcon;
- (id)writePromptLabel;
- (id)qaModel;
- (void)setQaModel:(id)arg0;
- (void)updateRateCardWithModel:(id)arg0;
- (id)creationIDForToComment;
- (id)trackingParamsForWrite;
- (void)bottomViewDidTap;
- (void)writeViewDidTap;
- (void)moreFoldDidTap;
- (void)didCompleteShow;
- (void)setWriteImageView:(id)arg0;
- (void)setWriteEmptyLabel:(id)arg0;
- (void)setWriteBottomView:(id)arg0;
- (void)setWritePromptLabel:(id)arg0;
- (void)setMoreFoldIcon:(id)arg0;
- (void)setCreationIDForToComment:(id)arg0;
- (void)setPromptLabel:(id)arg0;
- (void)setScene:(unsigned long long)arg0;
- (id)promptLabel;
- (void).cxx_destruct;
- (id)titleLabel;
- (void)setContainerView:(id)arg0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (id)delegate;
- (id)containerView;
- (void)setDelegate:(id)arg0;
- (void)setTitleLabel:(id)arg0;
- (id)iconImageView;
- (unsigned long long)scene;
- (id)bottomView;
- (void)setIconImageView:(id)arg0;
- (void)setBottomView:(id)arg0;
- (id)emptyLabel;
- (void)setEmptyLabel:(id)arg0;

@end
