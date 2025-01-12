//
//     Generated by private class-dump
//

@class NSString, BDNovelVipCenterPersonInfo, NSArray;

@interface BDNovelVipPageData : NSObject {
    BDNovelVipCenterPersonInfo *_personInfo;
    NSString *_comicPayButtonTitle;
    NSString *_novelPayButtonTitle;
    NSString *_payWallImageUrl;
    NSString *_publishPayWallImageUrl;
    NSArray *_rightList;
}

@property (retain, nonatomic) BDNovelVipCenterPersonInfo *personInfo;
@property (copy, nonatomic) NSString *comicPayButtonTitle;
@property (copy, nonatomic) NSString *novelPayButtonTitle;
@property (copy, nonatomic) NSString *payWallImageUrl;
@property (copy, nonatomic) NSString *publishPayWallImageUrl;
@property (copy, nonatomic) NSArray *rightList;

- (BOOL)isVip;
- (BOOL)isVipExpire;
- (id)payWallImageUrl;
- (id)comicPayButtonTitle;
- (id)rightList;
- (void)updateWithDic:(id)arg0;
- (void)setPersonInfo:(id)arg0;
- (id)personInfo;
- (void)setNovelPayButtonTitle:(id)arg0;
- (void)setPayWallImageUrl:(id)arg0;
- (void)setPublishPayWallImageUrl:(id)arg0;
- (void)setComicPayButtonTitle:(id)arg0;
- (void)setRightList:(id)arg0;
- (id)novelPayButtonTitle;
- (id)publishPayWallImageUrl;
- (void).cxx_destruct;

@end
