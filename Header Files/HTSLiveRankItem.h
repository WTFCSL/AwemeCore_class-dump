//
//     Generated by private class-dump
//

@class NSString;

@interface HTSLiveRankItem : IESLivePBBaseMessage

@property (nonatomic) long long rank;
@property (copy, nonatomic) NSString *country;
@property (copy, nonatomic) NSString *countryImgURL;
@property (nonatomic) long long goldMedal;
@property (nonatomic) long long silverMedal;
@property (nonatomic) long long copperMedal;
@property (nonatomic) long long totalMedal;
@property (copy, nonatomic) NSString *uniqueId;
@property (copy, nonatomic) NSString *extra;

+ (id)descriptor;

@end
