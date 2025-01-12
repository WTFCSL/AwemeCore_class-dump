//
//     Generated by private class-dump
//

@class NSString, NSMutableArray, PoiDcardControlStructV2;

@interface PoiDcardStructV2 : GPBMessage

@property (copy, nonatomic) NSString *scene;
@property (nonatomic) BOOL hasScene;
@property (retain, nonatomic) NSMutableArray *layersArray;
@property (readonly, nonatomic) unsigned long long layersArray_Count;
@property (copy, nonatomic) NSString *commonBizData;
@property (nonatomic) BOOL hasCommonBizData;
@property (retain, nonatomic) PoiDcardControlStructV2 *controlStruct;
@property (nonatomic) BOOL hasControlStruct;
@property (copy, nonatomic) NSString *dcardId;
@property (nonatomic) BOOL hasDcardId;
@property (copy, nonatomic) NSString *subCardType;
@property (nonatomic) BOOL hasSubCardType;

+ (id)descriptor;

@end
