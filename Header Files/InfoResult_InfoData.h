//
//     Generated by private class-dump
//

@class NSString, NSMutableArray;

@interface InfoResult_InfoData : IESLivePBBaseMessage

@property (nonatomic) long long money;
@property (nonatomic) long long userId;
@property (nonatomic) long long diamond;
@property (nonatomic) long long percentWord;
@property (nonatomic) long long goldCoins;
@property (copy, nonatomic) NSString *coupon;
@property (copy, nonatomic) NSString *couponDescription;
@property (retain, nonatomic) NSMutableArray *couponDetailArray;
@property (readonly, nonatomic) unsigned long long couponDetailArray_Count;
@property (nonatomic) long long goldenBeans;
@property (nonatomic) long long cashMoney;
@property (nonatomic) long long remunerationMoney;
@property (nonatomic) long long contingentMoney;
@property (nonatomic) BOOL hasLivePermission;

+ (id)descriptor;

@end
