//
//     Generated by private class-dump
//

@class OperationCard_OperationMultipleRoom_Tag, NSString, HTSLiveImage, NSMutableArray;

@interface OperationCard_OperationMultipleRoom : IESLivePBBaseMessage

@property (copy, nonatomic) NSString *title;
@property (retain, nonatomic) HTSLiveImage *cover;
@property (nonatomic) BOOL hasCover;
@property (retain, nonatomic) OperationCard_OperationMultipleRoom_Tag *tag;
@property (nonatomic) BOOL hasTag;
@property (retain, nonatomic) NSMutableArray *roomsArray;
@property (readonly, nonatomic) unsigned long long roomsArray_Count;
@property (copy, nonatomic) NSString *aggregateColumnTitle;
@property (nonatomic) int type;
@property (copy, nonatomic) NSString *extra;

+ (id)descriptor;

@end
