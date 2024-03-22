//
//     Generated by private class-dump
//

@class LotteryUserCondition, LotteryInfo, LotteryGiftGuide, NSMutableArray, LotteryLuckyUser;

@interface CheckUserRightResult_Data : IESLivePBBaseMessage

@property (retain, nonatomic) LotteryUserCondition *userCondition;
@property (nonatomic) BOOL hasUserCondition;
@property (retain, nonatomic) LotteryInfo *lotteryInfo;
@property (nonatomic) BOOL hasLotteryInfo;
@property (retain, nonatomic) NSMutableArray *candidateUsersArray;
@property (readonly, nonatomic) unsigned long long candidateUsersArray_Count;
@property (nonatomic) long long candidateUserNum;
@property (retain, nonatomic) LotteryLuckyUser *userLuckyInfo;
@property (nonatomic) BOOL hasUserLuckyInfo;
@property (retain, nonatomic) LotteryGiftGuide *giftGuide;
@property (nonatomic) BOOL hasGiftGuide;
@property (nonatomic) BOOL hasWishGift;
@property (nonatomic) BOOL hitBlackList;
@property (retain, nonatomic) NSMutableArray *expandActivityInfoListArray;
@property (readonly, nonatomic) unsigned long long expandActivityInfoListArray_Count;
@property (retain, nonatomic) NSMutableArray *userCustomizedConditionArray;
@property (readonly, nonatomic) unsigned long long userCustomizedConditionArray_Count;

+ (id)descriptor;

@end