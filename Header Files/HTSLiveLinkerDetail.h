//
//     Generated by private class-dump
//

@class GPBInt64Array, NSString, NSMutableDictionary;

@interface HTSLiveLinkerDetail : IESLivePBBaseMessage

@property (retain, nonatomic) GPBInt64Array *linkerPlayModesArray;
@property (readonly, nonatomic) unsigned long long linkerPlayModesArray_Count;
@property (nonatomic) int bigPartyLayoutConfigVersion;
@property (nonatomic) BOOL acceptAudiencePreApply;
@property (nonatomic) long long linkerUiLayout;
@property (nonatomic) int enableAudienceLinkmic;
@property (copy, nonatomic) NSString *functionType;
@property (retain, nonatomic) NSMutableDictionary *linkerMapStr;
@property (readonly, nonatomic) unsigned long long linkerMapStr_Count;
@property (copy, nonatomic) NSString *ktvLyricMode;
@property (copy, nonatomic) NSString *initSource;
@property (nonatomic) BOOL forbidApplyFromOther;
@property (nonatomic) int ktvExhibitMode;
@property (nonatomic) long long enlargeGuestTurnOnSource;
@property (retain, nonatomic) NSMutableDictionary *playmodeDetail;
@property (readonly, nonatomic) unsigned long long playmodeDetail_Count;

+ (id)descriptor;

@end