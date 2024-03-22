//
//     Generated by private class-dump
//

@class NSMutableArray, IESECMallInnerFeedTitleView, UILabel, IESECMallInnerFeedPriceView, IESECMallInnerFeedImmersionPrivilegeMultiTagView;

@interface IESECMallInnerFeedImmersionContentView : UIView {
    NSMutableArray *_reportProductTagArrays;
    UILabel *_recReasonLabel;
    IESECMallInnerFeedPriceView *_priceInfo;
    IESECMallInnerFeedTitleView *_titleView;
    IESECMallInnerFeedImmersionPrivilegeMultiTagView *_privilegeTagView;
}

@property (retain, nonatomic) IESECMallInnerFeedPriceView *priceInfo;
@property (retain, nonatomic) IESECMallInnerFeedTitleView *titleView;
@property (retain, nonatomic) UILabel *recReasonLabel;
@property (retain, nonatomic) IESECMallInnerFeedImmersionPrivilegeMultiTagView *privilegeTagView;
@property (retain, nonatomic) NSMutableArray *reportProductTagArrays;

- (id)priceInfo;
- (void)setPriceInfo:(id)arg0;
- (id)recReasonLabel;
- (id)reportProductTagArrays;
- (void)setReportProductTagArrays:(id)arg0;
- (BOOL)calculateRecReasonCanAppend:(id)arg0 withCurrentText:(id)arg1;
- (id)recReasonLabelColor:(id)arg0;
- (BOOL)isSpecialReason:(id)arg0;
- (id)privilegeTagView;
- (void)setRecReasonLabel:(id)arg0;
- (void)setPrivilegeTagView:(id)arg0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (void)setTitleView:(id)arg0;
- (id)titleView;
- (void)setupUI;
- (void)updateWithNewModel:(id)arg0;

@end
