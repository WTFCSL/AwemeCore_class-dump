//
//     Generated by private class-dump
//

@class NSString, AWEURLModel;

@interface AWELivePaidLiveUIBaseConfig : AWEBaseApiModel {
    long long _paidLiveType;
    AWEURLModel *_paidLiveIcon;
    NSString *_paidLiveIconTitle;
    long long _duration;
    NSString *_noRightEndTitle;
    NSString *_noRightEndSubTitle;
    NSString *_hasRightEndTitle;
    NSString *_hasRightEndSubTitle;
    NSString *_paidConversionJumpURL;
    NSString *_panelSixJumpURL;
    NSString *_feedPagePurchaseBtnWord;
    NSString *_purchaseBtnWord;
    NSString *_imShareTopTitle;
    NSString *_imShareBottomTitle;
    NSString *_searchCardTopTitle;
    NSString *_panelFeedJumpURL;
    NSString *_panelImCardJumpURL;
    NSString *_panelInRoomJumpURL;
    NSString *_panelSearchCardJumpURL;
}

@property (nonatomic) long long paidLiveType;
@property (retain, nonatomic) AWEURLModel *paidLiveIcon;
@property (copy, nonatomic) NSString *paidLiveIconTitle;
@property (nonatomic) long long duration;
@property (copy, nonatomic) NSString *noRightEndTitle;
@property (copy, nonatomic) NSString *noRightEndSubTitle;
@property (copy, nonatomic) NSString *hasRightEndTitle;
@property (copy, nonatomic) NSString *hasRightEndSubTitle;
@property (copy, nonatomic) NSString *paidConversionJumpURL;
@property (copy, nonatomic) NSString *panelSixJumpURL;
@property (copy, nonatomic) NSString *feedPagePurchaseBtnWord;
@property (copy, nonatomic) NSString *purchaseBtnWord;
@property (copy, nonatomic) NSString *imShareTopTitle;
@property (copy, nonatomic) NSString *imShareBottomTitle;
@property (copy, nonatomic) NSString *searchCardTopTitle;
@property (copy, nonatomic) NSString *panelFeedJumpURL;
@property (copy, nonatomic) NSString *panelImCardJumpURL;
@property (copy, nonatomic) NSString *panelInRoomJumpURL;
@property (copy, nonatomic) NSString *panelSearchCardJumpURL;

+ (id)paidLiveIconJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (long long)paidLiveType;
- (void)setPaidLiveType:(long long)arg0;
- (id)noRightEndTitle;
- (id)hasRightEndTitle;
- (id)noRightEndSubTitle;
- (id)hasRightEndSubTitle;
- (id)feedPagePurchaseBtnWord;
- (id)panelFeedJumpURL;
- (id)panelSearchCardJumpURL;
- (id)panelImCardJumpURL;
- (id)paidLiveIcon;
- (void)setPaidLiveIcon:(id)arg0;
- (id)paidLiveIconTitle;
- (void)setPaidLiveIconTitle:(id)arg0;
- (void)setNoRightEndTitle:(id)arg0;
- (void)setNoRightEndSubTitle:(id)arg0;
- (void)setHasRightEndTitle:(id)arg0;
- (void)setHasRightEndSubTitle:(id)arg0;
- (id)paidConversionJumpURL;
- (void)setPaidConversionJumpURL:(id)arg0;
- (id)panelSixJumpURL;
- (void)setPanelSixJumpURL:(id)arg0;
- (void)setFeedPagePurchaseBtnWord:(id)arg0;
- (id)purchaseBtnWord;
- (void)setPurchaseBtnWord:(id)arg0;
- (id)imShareTopTitle;
- (void)setImShareTopTitle:(id)arg0;
- (id)imShareBottomTitle;
- (void)setImShareBottomTitle:(id)arg0;
- (id)searchCardTopTitle;
- (void)setSearchCardTopTitle:(id)arg0;
- (void)setPanelFeedJumpURL:(id)arg0;
- (void)setPanelImCardJumpURL:(id)arg0;
- (id)panelInRoomJumpURL;
- (void)setPanelInRoomJumpURL:(id)arg0;
- (void)setPanelSearchCardJumpURL:(id)arg0;
- (void).cxx_destruct;
- (long long)duration;
- (void)setDuration:(long long)arg0;

@end