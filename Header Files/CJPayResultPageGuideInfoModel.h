//
//     Generated by private class-dump
//

@class NSString;

@interface CJPayResultPageGuideInfoModel : CJPayBaseGuideInfoModel {
    NSString *_guideType;
    NSString *_confirmBtnDesc;
    NSString *_cancelBtnDesc;
    NSString *_cancelBtnLocation;
    NSString *_headerDesc;
    NSString *_subTitle;
    NSString *_pictureUrl;
    NSString *_bioType;
    NSString *_afterOpenDesc;
    long long _quota;
    NSString *_subTitleIconUrl;
    NSString *_voucherDisplayText;
    NSString *_subTitleColor;
    NSString *_guideShowStyle;
    NSString *_bubbleText;
    NSString *_headerPicUrl;
}

@property (copy, nonatomic) NSString *guideType;
@property (copy, nonatomic) NSString *confirmBtnDesc;
@property (copy, nonatomic) NSString *cancelBtnDesc;
@property (copy, nonatomic) NSString *cancelBtnLocation;
@property (copy, nonatomic) NSString *headerDesc;
@property (copy, nonatomic) NSString *subTitle;
@property (copy, nonatomic) NSString *pictureUrl;
@property (copy, nonatomic) NSString *bioType;
@property (copy, nonatomic) NSString *afterOpenDesc;
@property (nonatomic) long long quota;
@property (copy, nonatomic) NSString *subTitleIconUrl;
@property (copy, nonatomic) NSString *voucherDisplayText;
@property (copy, nonatomic) NSString *subTitleColor;
@property (copy, nonatomic) NSString *guideShowStyle;
@property (copy, nonatomic) NSString *bubbleText;
@property (copy, nonatomic) NSString *headerPicUrl;

+ (id)keyMapper;
+ (BOOL)propertyIsOptional:(id)arg0;

- (id)guideType;
- (void)setGuideType:(id)arg0;
- (void)setSubTitleColor:(id)arg0;
- (id)subTitleColor;
- (id)pictureUrl;
- (void)setPictureUrl:(id)arg0;
- (void)setSubTitleIconUrl:(id)arg0;
- (id)subTitleIconUrl;
- (id)bioType;
- (id)confirmBtnDesc;
- (void)setConfirmBtnDesc:(id)arg0;
- (BOOL)isNewGuideShowStyle;
- (BOOL)isNewGuideShowStyleForOldPeople;
- (id)cancelBtnDesc;
- (void)setCancelBtnDesc:(id)arg0;
- (id)cancelBtnLocation;
- (void)setCancelBtnLocation:(id)arg0;
- (id)afterOpenDesc;
- (void)setAfterOpenDesc:(id)arg0;
- (id)headerDesc;
- (void)setHeaderDesc:(id)arg0;
- (id)guideShowStyle;
- (void)setGuideShowStyle:(id)arg0;
- (id)headerPicUrl;
- (void)setHeaderPicUrl:(id)arg0;
- (id)voucherDisplayText;
- (void)setBioType:(id)arg0;
- (void)setVoucherDisplayText:(id)arg0;
- (void).cxx_destruct;
- (void)setSubTitle:(id)arg0;
- (id)subTitle;
- (void)setQuota:(long long)arg0;
- (long long)quota;
- (id)bubbleText;
- (void)setBubbleText:(id)arg0;

@end
