//
//     Generated by private class-dump
//

@class IESECFeedResourceCardCouponLinkInfoModel, NSString, IESECURLModel, IESECFeedResourceCardCouponTimeInfoModel;

@interface IESECFeedResourceCardCouponModel : IESECFeedResourceCardBaseNode {
    unsigned long long _style;
    long long _price;
    NSString *_desc;
    NSString *_subDesc;
    NSString *_couponID;
    IESECFeedResourceCardCouponLinkInfoModel *_link;
    IESECFeedResourceCardCouponTimeInfoModel *_timeInfo;
    IESECURLModel *_backgroundImage;
}

@property (nonatomic) unsigned long long style;
@property (nonatomic) long long price;
@property (copy, nonatomic) NSString *desc;
@property (copy, nonatomic) NSString *subDesc;
@property (copy, nonatomic) NSString *couponID;
@property (retain, nonatomic) IESECFeedResourceCardCouponLinkInfoModel *link;
@property (retain, nonatomic) IESECFeedResourceCardCouponTimeInfoModel *timeInfo;
@property (retain, nonatomic) IESECURLModel *backgroundImage;

+ (id)JSONKeyPathsByPropertyKey;

- (id)couponID;
- (void)setCouponID:(id)arg0;
- (void)setTimeInfo:(id)arg0;
- (id)timeInfo;
- (id)subDesc;
- (void)setSubDesc:(id)arg0;
- (long long)price;
- (id)desc;
- (unsigned long long)style;
- (id)backgroundImage;
- (void)setLink:(id)arg0;
- (void).cxx_destruct;
- (id)link;
- (void)setBackgroundImage:(id)arg0;
- (void)setStyle:(unsigned long long)arg0;
- (void)setDesc:(id)arg0;
- (void)setPrice:(long long)arg0;

@end
