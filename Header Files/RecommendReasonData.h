//
//     Generated by private class-dump
//

@class RecommendReasonInteractDataV2;

@interface RecommendReasonData : GPBMessage

@property (nonatomic) BOOL addressBookPermission;
@property (nonatomic) BOOL hasAddressBookPermission;
@property (nonatomic) BOOL gpsPermission;
@property (nonatomic) BOOL hasGpsPermission;
@property (retain, nonatomic) RecommendReasonInteractDataV2 *interactData;
@property (nonatomic) BOOL hasInteractData;

+ (id)descriptor;

@end