//
//     Generated by private class-dump
//

@class NSString, NSMutableArray, HTSLiveImage;

@interface HTSLiveBattlePowerContainer_ContainerInfo : IESLivePBBaseMessage

@property (nonatomic) int type;
@property (retain, nonatomic) NSMutableArray *usersArray;
@property (readonly, nonatomic) unsigned long long usersArray_Count;
@property (copy, nonatomic) NSString *text;
@property (retain, nonatomic) HTSLiveImage *icon;
@property (nonatomic) BOOL hasIcon;
@property (copy, nonatomic) NSString *clientPointInfo;

+ (id)descriptor;

@end
