//
//     Generated by private class-dump
//

@class GPBInt64Array, NSString;

@interface TIMXPBNSetBlocklistRequestBody : GPBMessage

@property (nonatomic) BOOL setBlockList;
@property (nonatomic) BOOL hasSetBlockList;
@property (retain, nonatomic) GPBInt64Array *blocklistArray;
@property (readonly, nonatomic) unsigned long long blocklistArray_Count;
@property (nonatomic) BOOL blockType;
@property (nonatomic) BOOL hasBlockType;
@property (nonatomic) int convType;
@property (nonatomic) BOOL hasConvType;
@property (nonatomic) long long convShortId;
@property (nonatomic) BOOL hasConvShortId;
@property (copy, nonatomic) NSString *convId;
@property (nonatomic) BOOL hasConvId;
@property (nonatomic) int customedConvType;
@property (nonatomic) BOOL hasCustomedConvType;

+ (id)descriptor;

@end
