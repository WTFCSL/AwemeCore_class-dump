//
//     Generated by private class-dump
//

@class PayInfoV2, NSString, AlbumAdInfoV2, UrlStructV2, XiguaGuideV2, ContentChargeStructV2, EntertainmentProductStructV2, NSMutableArray, InteractControlV2, GPBInt32Array;

@interface AlbumInfoStructV2 : GPBMessage

@property (copy, nonatomic) NSString *albumId;
@property (nonatomic) BOOL hasAlbumId;
@property (copy, nonatomic) NSString *title;
@property (nonatomic) BOOL hasTitle;
@property (nonatomic) int status;
@property (nonatomic) BOOL hasStatus;
@property (nonatomic) int episodeUpdateAt;
@property (nonatomic) BOOL hasEpisodeUpdateAt;
@property (nonatomic) int label;
@property (nonatomic) BOOL hasLabel;
@property (retain, nonatomic) NSMutableArray *rewardListArray;
@property (readonly, nonatomic) unsigned long long rewardListArray_Count;
@property (retain, nonatomic) NSMutableArray *categoryStrTypeArray;
@property (readonly, nonatomic) unsigned long long categoryStrTypeArray_Count;
@property (retain, nonatomic) NSMutableArray *categoryStrTopicArray;
@property (readonly, nonatomic) unsigned long long categoryStrTopicArray_Count;
@property (copy, nonatomic) NSString *region;
@property (nonatomic) BOOL hasRegion;
@property (nonatomic) long long releaseTime;
@property (nonatomic) BOOL hasReleaseTime;
@property (retain, nonatomic) UrlStructV2 *cover;
@property (nonatomic) BOOL hasCover;
@property (retain, nonatomic) NSMutableArray *actorListArray;
@property (readonly, nonatomic) unsigned long long actorListArray_Count;
@property (copy, nonatomic) NSString *intro;
@property (nonatomic) BOOL hasIntro;
@property (copy, nonatomic) NSString *updateCycle;
@property (nonatomic) BOOL hasUpdateCycle;
@property (nonatomic) int pattern;
@property (nonatomic) BOOL hasPattern;
@property (retain, nonatomic) NSMutableArray *languageListArray;
@property (readonly, nonatomic) unsigned long long languageListArray_Count;
@property (nonatomic) int seqsCount;
@property (nonatomic) BOOL hasSeqsCount;
@property (nonatomic) int seriesRank;
@property (nonatomic) BOOL hasSeriesRank;
@property (copy, nonatomic) NSString *seriesTab;
@property (nonatomic) BOOL hasSeriesTab;
@property (nonatomic) long long duration;
@property (nonatomic) BOOL hasDuration;
@property (retain, nonatomic) GPBInt32Array *typeListArray;
@property (readonly, nonatomic) unsigned long long typeListArray_Count;
@property (nonatomic) int isCollect;
@property (nonatomic) BOOL hasIsCollect;
@property (nonatomic) long long collectCount;
@property (nonatomic) BOOL hasCollectCount;
@property (copy, nonatomic) NSString *subTitle;
@property (nonatomic) BOOL hasSubTitle;
@property (nonatomic) int groupSource;
@property (nonatomic) BOOL hasGroupSource;
@property (copy, nonatomic) NSString *labelText;
@property (nonatomic) BOOL hasLabelText;
@property (copy, nonatomic) NSString *awemeId;
@property (nonatomic) BOOL hasAwemeId;
@property (copy, nonatomic) NSString *score;
@property (nonatomic) BOOL hasScore;
@property (retain, nonatomic) NSMutableArray *coverListArray;
@property (readonly, nonatomic) unsigned long long coverListArray_Count;
@property (retain, nonatomic) PayInfoV2 *payInfo;
@property (nonatomic) BOOL hasPayInfo;
@property (nonatomic) BOOL isDrm;
@property (nonatomic) BOOL hasIsDrm;
@property (retain, nonatomic) InteractControlV2 *interactControl;
@property (nonatomic) BOOL hasInteractControl;
@property (retain, nonatomic) XiguaGuideV2 *xiguaGuide;
@property (nonatomic) BOOL hasXiguaGuide;
@property (retain, nonatomic) AlbumAdInfoV2 *adInfo;
@property (nonatomic) BOOL hasAdInfo;
@property (nonatomic) long long albumPlayVv;
@property (nonatomic) BOOL hasAlbumPlayVv;
@property (copy, nonatomic) NSString *seriesId;
@property (nonatomic) BOOL hasSeriesId;
@property (retain, nonatomic) NSMutableArray *largeCoverListArray;
@property (readonly, nonatomic) unsigned long long largeCoverListArray_Count;
@property (retain, nonatomic) NSMutableArray *mediumCoverListArray;
@property (readonly, nonatomic) unsigned long long mediumCoverListArray_Count;
@property (retain, nonatomic) NSMutableArray *thumbCoverListArray;
@property (readonly, nonatomic) unsigned long long thumbCoverListArray_Count;
@property (retain, nonatomic) ContentChargeStructV2 *chargeInfo;
@property (nonatomic) BOOL hasChargeInfo;
@property (retain, nonatomic) EntertainmentProductStructV2 *productInfo;
@property (nonatomic) BOOL hasProductInfo;
@property (nonatomic) int labelV2;
@property (nonatomic) BOOL hasLabelV2;
@property (nonatomic) int chargeTotalCount;
@property (nonatomic) BOOL hasChargeTotalCount;
@property (nonatomic) int chargeRemainCount;
@property (nonatomic) BOOL hasChargeRemainCount;
@property (nonatomic) BOOL isAlbumPay;
@property (nonatomic) BOOL hasIsAlbumPay;
@property (copy, nonatomic) NSString *compassId;
@property (nonatomic) BOOL hasCompassId;

+ (id)descriptor;

@end
