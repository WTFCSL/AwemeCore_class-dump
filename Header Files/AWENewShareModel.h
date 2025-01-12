//
//     Generated by private class-dump
//

@class NSString, AWENewURLModel;

@interface AWENewShareModel : AWEBaseDataModel {
    int _isPersist;
    NSString *_shareUrl;
    NSString *_shareWeiboDesc;
    NSString *_shareDesc;
    NSString *_shareTitle;
    AWENewURLModel *_shareQRCodeURL;
    NSString *_manageGoodsURL;
    AWENewURLModel *_shareImageURL;
    NSString *_manageFXGURL;
    NSString *_shareTitleMyself;
    NSString *_shareTitleOther;
    NSString *_shareLinkDesc;
    NSString *_shareSignatureUrl;
    NSString *_shareSignatureDesc;
    NSString *_shareQuote;
    NSString *_whatsappDesc;
    NSString *_shareDescInfo;
    NSString *_shareShortenBelong;
    NSString *_shareChannelConfig;
    NSString *_lifeShareExt;
}

@property (copy, nonatomic) NSString *shareUrl;
@property (copy, nonatomic) NSString *shareWeiboDesc;
@property (copy, nonatomic) NSString *shareDesc;
@property (copy, nonatomic) NSString *shareTitle;
@property (retain, nonatomic) AWENewURLModel *shareQRCodeURL;
@property (copy, nonatomic) NSString *manageGoodsURL;
@property (retain, nonatomic) AWENewURLModel *shareImageURL;
@property (nonatomic) int isPersist;
@property (copy, nonatomic) NSString *manageFXGURL;
@property (copy, nonatomic) NSString *shareTitleMyself;
@property (copy, nonatomic) NSString *shareTitleOther;
@property (copy, nonatomic) NSString *shareLinkDesc;
@property (copy, nonatomic) NSString *shareSignatureUrl;
@property (copy, nonatomic) NSString *shareSignatureDesc;
@property (copy, nonatomic) NSString *shareQuote;
@property (copy, nonatomic) NSString *whatsappDesc;
@property (copy, nonatomic) NSString *shareDescInfo;
@property (copy, nonatomic) NSString *shareShortenBelong;
@property (copy, nonatomic) NSString *shareChannelConfig;
@property (copy, nonatomic) NSString *lifeShareExt;

+ (id)JSONKeyPathsByPropertyKey;

- (void)setShareTitle:(id)arg0;
- (id)shareDesc;
- (void)setShareDesc:(id)arg0;
- (id)shareWeiboDesc;
- (void)setShareWeiboDesc:(id)arg0;
- (id)shareLinkDesc;
- (void)setShareLinkDesc:(id)arg0;
- (void)setShareImageURL:(id)arg0;
- (id)shareUrl;
- (void)setShareUrl:(id)arg0;
- (id)lifeShareExt;
- (int)isPersist;
- (void)setIsPersist:(int)arg0;
- (id)shareQRCodeURL;
- (void)setShareQRCodeURL:(id)arg0;
- (id)shareImageURL;
- (id)manageGoodsURL;
- (void)setManageGoodsURL:(id)arg0;
- (id)manageFXGURL;
- (void)setManageFXGURL:(id)arg0;
- (id)shareSignatureDesc;
- (void)setShareSignatureDesc:(id)arg0;
- (id)shareSignatureUrl;
- (void)setShareSignatureUrl:(id)arg0;
- (id)shareChannelConfig;
- (void)setShareChannelConfig:(id)arg0;
- (id)shareShortenBelong;
- (void)setShareShortenBelong:(id)arg0;
- (id)shareTitleMyself;
- (void)setShareTitleMyself:(id)arg0;
- (id)shareTitleOther;
- (void)setShareTitleOther:(id)arg0;
- (id)shareQuote;
- (id)whatsappDesc;
- (id)shareDescInfo;
- (void)setShareQuote:(id)arg0;
- (void)setWhatsappDesc:(id)arg0;
- (void)setShareDescInfo:(id)arg0;
- (void)setLifeShareExt:(id)arg0;
- (void).cxx_destruct;
- (id)shareTitle;

@end
