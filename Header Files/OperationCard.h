//
//     Generated by private class-dump
//

@class OperationCard_OperationMultipleRoom, NSString, OperationCard_OperationActivityBanner, OperationCard_OperationSingleRoom;

@interface OperationCard : IESLivePBBaseMessage

@property (nonatomic) int type;
@property (copy, nonatomic) NSString *idStr;
@property (retain, nonatomic) OperationCard_OperationActivityBanner *activityBanner;
@property (nonatomic) BOOL hasActivityBanner;
@property (retain, nonatomic) OperationCard_OperationSingleRoom *singleRoom;
@property (nonatomic) BOOL hasSingleRoom;
@property (retain, nonatomic) OperationCard_OperationMultipleRoom *multipleRoom;
@property (nonatomic) BOOL hasMultipleRoom;
@property (nonatomic) int pos;

+ (id)descriptor;

@end