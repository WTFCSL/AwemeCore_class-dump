//
//     Generated by private class-dump
//

@class NSString, HTSLiveImage, HTSLivePaidLiveData;

@interface Rank_SimpleRoom : IESLivePBBaseMessage

@property (nonatomic) long long id_p;
@property (copy, nonatomic) NSString *idStr;
@property (copy, nonatomic) NSString *title;
@property (nonatomic) long long userCount;
@property (retain, nonatomic) HTSLiveImage *cover;
@property (nonatomic) BOOL hasCover;
@property (copy, nonatomic) NSString *challengeInfo;
@property (retain, nonatomic) HTSLiveImage *contentLabel;
@property (nonatomic) BOOL hasContentLabel;
@property (retain, nonatomic) HTSLivePaidLiveData *paidLiveData;
@property (nonatomic) BOOL hasPaidLiveData;

+ (id)descriptor;

@end