//
//     Generated by private class-dump
//

@class NSMutableArray;

@interface TIMXPBNGetTagMetaInfoResponseBody : GPBMessage

@property (retain, nonatomic) NSMutableArray *tagMetaInfoListArray;
@property (readonly, nonatomic) unsigned long long tagMetaInfoListArray_Count;
@property (nonatomic) long long userConvTagLimit;
@property (nonatomic) BOOL hasUserConvTagLimit;
@property (retain, nonatomic) NSMutableArray *userCustomTagMetaInfoListArray;
@property (readonly, nonatomic) unsigned long long userCustomTagMetaInfoListArray_Count;
@property (nonatomic) long long userConvCustomTagLimit;
@property (nonatomic) BOOL hasUserConvCustomTagLimit;
@property (nonatomic) long long userCustomTagMetaInfoLimit;
@property (nonatomic) BOOL hasUserCustomTagMetaInfoLimit;

+ (id)descriptor;

@end
