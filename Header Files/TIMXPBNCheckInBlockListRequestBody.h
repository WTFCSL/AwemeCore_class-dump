//
//     Generated by private class-dump
//

@class NSString;

@interface TIMXPBNCheckInBlockListRequestBody : GPBMessage

@property (nonatomic) long long userToCheck;
@property (nonatomic) BOOL hasUserToCheck;
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