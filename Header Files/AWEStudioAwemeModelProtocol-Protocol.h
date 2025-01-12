//
//     Generated by private class-dump
//

@class NSString, NSArray, UIImage, NSDictionary, NSNumber, NSObject;
@protocol AWEStudioPaymentChargeInfoModelProtocol, AWEStudioVideoModelProtocol, AWEStudioAwemeStatusModel, AWEStudioPaymentEntertainmentProductModelProtocol;

@protocol AWEStudioAwemeModelProtocol <NSObject>

@property (copy, nonatomic) NSString *itemID;
@property (copy, nonatomic) NSString *groupID;
@property (retain, nonatomic) NSNumber *draftId;
@property (nonatomic) long long awemeType;
@property (copy, nonatomic) NSString *duetOriginID;
@property (nonatomic) long long acc_duetCount;
@property (copy, nonatomic) NSString *acc_chorusMethod;
@property (copy, nonatomic) NSString *descriptionString;
@property (copy, nonatomic) NSString *itemTitle;
@property (copy, nonatomic) NSString *caption;
@property (nonatomic) BOOL syncToToutiao;
@property (nonatomic) BOOL isSharePost;
@property (retain, nonatomic) NSArray *interactionStickers;
@property (retain, nonatomic) UIImage *coverImage;
@property (retain, nonatomic) NSString *coverUrl;
@property (copy, nonatomic) NSDictionary *logPassback;
@property (retain, nonatomic) NSArray *textExtras;
@property (copy, nonatomic) NSArray *albumImages;
@property (retain, nonatomic) NSObject<AWEStudioAwemeStatusModel> *status;
@property (retain, nonatomic) NSObject<AWEStudioVideoModelProtocol> *video;
@property (retain, nonatomic) NSObject<AWEStudioPaymentChargeInfoModelProtocol> *paymentChargeInfoModel;
@property (retain, nonatomic) NSObject<AWEStudioPaymentEntertainmentProductModelProtocol> *paymentEntertainmentProductModel;

- (BOOL)isNoAccountAd;
- (id)poiInfo;
- (id)logPassback;
- (void)setLogPassback:(id)arg0;
- (id)albumImages;
- (long long)awemeType;
- (BOOL)syncToToutiao;
- (void)setSyncToToutiao:(BOOL)arg0;
- (void)setCoverImage:(id)arg0;
- (void)setCoverUrl:(id)arg0;
- (void)setTextExtras:(id)arg0;
- (id)videoControl;
- (id)textExtras;
- (void)setAwemeType:(long long)arg0;
- (id)coOperationInfo;
- (void)setAlbumImages:(id)arg0;
- (void)setInteractionStickers:(id)arg0;
- (id)interactionStickers;
- (void)mergeAllPropertyKeysWithRequestId;
- (id)coverUrl;
- (id)draftId;
- (void)setDraftId:(id)arg0;
- (BOOL)isSharePost;
- (void)setIsSharePost:(BOOL)arg0;
- (id)paymentChargeInfoModel;
- (void)setPaymentChargeInfoModel:(id)arg0;
- (id)paymentEntertainmentProductModel;
- (void)setPaymentEntertainmentProductModel:(id)arg0;
- (id)miscInfoMvId;
- (id)originalAlbumImages;
- (BOOL)withPromotionalMusic;
- (BOOL)isLiveReplay;
- (id)stickerGameModel;
- (id)xiguaBaseInfo;
- (BOOL)isCPCAd;
- (id)duetOriginID;
- (id)storySectionId;
- (void)setDuetOriginID:(id)arg0;
- (long long)acc_duetCount;
- (id)acc_chorusMethod;
- (void)setAcc_duetCount:(long long)arg0;
- (void)setAcc_chorusMethod:(id)arg0;
- (id)music;
- (void)setGroupID:(id)arg0;
- (id)descriptionString;
- (id)groupID;
- (id)status;
- (void)setVideo:(id)arg0;
- (id)itemID;
- (void)setCaption:(id)arg0;
- (void)setItemID:(id)arg0;
- (id)author;
- (void)setStatus:(id)arg0;
- (void)setDescriptionString:(id)arg0;
- (id)caption;
- (void)setError:(id)arg0;
- (id)video;
- (id)error;
- (id)itemTitle;
- (void)setAvatarImage:(id)arg0;
- (id)avatarImage;
- (void)setItemTitle:(id)arg0;
- (id)stickers;
- (id)coverImage;

@end
