//
//     Generated by private class-dump
//

@class NSString, HTSLiveImage, HTSLiveFlexImageStruct, NSMutableArray;

@interface FirstChargeResponse_FirstChargeExtra : IESLivePBBaseMessage

@property (copy, nonatomic) NSString *givingDesc;
@property (retain, nonatomic) HTSLiveImage *giftImg;
@property (nonatomic) BOOL hasGiftImg;
@property (retain, nonatomic) NSMutableArray *panelBottomDescArray;
@property (readonly, nonatomic) unsigned long long panelBottomDescArray_Count;
@property (retain, nonatomic) HTSLiveImage *panelTopImg;
@property (nonatomic) BOOL hasPanelTopImg;
@property (retain, nonatomic) NSMutableArray *ruleArray;
@property (readonly, nonatomic) unsigned long long ruleArray_Count;
@property (retain, nonatomic) HTSLiveFlexImageStruct *panelBottomBgImg;
@property (nonatomic) BOOL hasPanelBottomBgImg;
@property (retain, nonatomic) HTSLiveFlexImageStruct *panelTopBgImg;
@property (nonatomic) BOOL hasPanelTopBgImg;
@property (retain, nonatomic) NSMutableArray *panelTopDescArray;
@property (readonly, nonatomic) unsigned long long panelTopDescArray_Count;
@property (retain, nonatomic) HTSLiveFlexImageStruct *newPanelBottomBgImg;
@property (nonatomic) BOOL hasNewPanelBottomBgImg;
@property (retain, nonatomic) HTSLiveFlexImageStruct *roomChargeBtnImg;
@property (nonatomic) BOOL hasRoomChargeBtnImg;
@property (retain, nonatomic) HTSLiveFlexImageStruct *introBgImg;
@property (nonatomic) BOOL hasIntroBgImg;
@property (copy, nonatomic) NSString *introChargeBtnText;
@property (nonatomic) int roomChargeType;
@property (retain, nonatomic) HTSLiveFlexImageStruct *roomChargeBtnStaticImg;
@property (nonatomic) BOOL hasRoomChargeBtnStaticImg;
@property (copy, nonatomic) NSString *panelBottomSchemeURL;
@property (retain, nonatomic) NSMutableArray *giftPanelTopDescArray;
@property (readonly, nonatomic) unsigned long long giftPanelTopDescArray_Count;
@property (copy, nonatomic) NSString *giftPanelTopSchemeURL;
@property (copy, nonatomic) NSString *giftPanelTopLynxURL;

+ (id)descriptor;

@end