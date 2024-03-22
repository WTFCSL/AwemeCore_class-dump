//
//     Generated by private class-dump
//

@class NSString, NSDictionary, NSArray, NSNumber, NSMutableArray;

@interface AWEInteractionLiveStickerInfoModel : MTLModel <MTLJSONSerializing> {
    BOOL _showSubscriber;
    BOOL _btnClicked;
    BOOL _showAddGoodsEntry;
    NSMutableArray *_subscriberList;
    long long _total;
    double _targetTime;
    long long _status;
    NSNumber *_roomID;
    NSString *_promotionDetail;
    NSDictionary *_addGoodsData;
    long long _type;
    NSNumber *_appointmentId;
    NSArray *_promotionIds;
    NSString *_stickerExtraInfo;
}

@property (retain, nonatomic) NSMutableArray *subscriberList;
@property (nonatomic) BOOL showSubscriber;
@property (nonatomic) long long total;
@property (nonatomic) double targetTime;
@property (nonatomic) long long status;
@property (nonatomic) BOOL btnClicked;
@property (copy, nonatomic) NSNumber *roomID;
@property (copy, nonatomic) NSString *promotionDetail;
@property (nonatomic) BOOL showAddGoodsEntry;
@property (retain, nonatomic) NSDictionary *addGoodsData;
@property (nonatomic) long long type;
@property (retain, nonatomic) NSNumber *appointmentId;
@property (retain, nonatomic) NSArray *promotionIds;
@property (retain, nonatomic) NSString *stickerExtraInfo;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (id)cameraId;
- (id)matchId;
- (id)stickerTitle;
- (id)appointmentId;
- (void)setAppointmentId:(id)arg0;
- (BOOL)isVS;
- (BOOL)btnClicked;
- (void)setBtnClicked:(BOOL)arg0;
- (id)promotionDetail;
- (id)stickerExtraInfo;
- (BOOL)showPromotionDetail;
- (BOOL)isPremiereSticker;
- (long long)showCountView;
- (id)liveStatusStr;
- (id)subscriberImageURLs;
- (void)setShowSubscriber:(BOOL)arg0;
- (long long)subscriberTotal;
- (id)stickerOwnerUid;
- (BOOL)showToSee;
- (BOOL)hasTicket;
- (id)extraParamsForEevent;
- (long long)indexFromType;
- (void)setStickerExtraInfo:(id)arg0;
- (id)imageTextTitle;
- (void)updateImageText:(id)arg0;
- (BOOL)showAddGoodsEntry;
- (void)setAddGoodsData:(id)arg0;
- (BOOL)hasGoodsData;
- (id)addGoodsData;
- (BOOL)addGoodsFromAppointment;
- (id)currentPromotionIds;
- (void)setShowAddGoodsEntry:(BOOL)arg0;
- (BOOL)isImageTextStyle;
- (double)stickerTargetTime;
- (BOOL)showSubscriber;
- (id)stickerNewStyleBackgroundImage;
- (BOOL)liveTimeValid;
- (id)currentAppointmentId;
- (void)setPromotionIds:(id)arg0;
- (id)stickerExtraInfoConfig;
- (id)stickerBackgroundImage;
- (void)setPromotionDetail:(id)arg0;
- (id)promotionIds;
- (long long)total;
- (void).cxx_destruct;
- (long long)status;
- (long long)type;
- (void)setType:(long long)arg0;
- (void)setStatus:(long long)arg0;
- (double)targetTime;
- (void)setTargetTime:(double)arg0;
- (id)imageURLs;
- (void)setTotal:(long long)arg0;
- (id)roomID;
- (void)setRoomID:(id)arg0;
- (long long)stageID;
- (id)subscriberList;
- (void)setSubscriberList:(id)arg0;
- (void)generateData;

@end
