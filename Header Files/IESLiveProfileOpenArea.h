//
//     Generated by private class-dump
//

@class DSLDetail, IESLiveProfileBusinessArea, IESLiveMyLiveTabs, IESLiveFormComp;

@interface IESLiveProfileOpenArea : IESLivePBBaseMessage

@property (nonatomic) long long businessAreaVersion;
@property (retain, nonatomic) IESLiveProfileBusinessArea *businessAreaV3;
@property (nonatomic) BOOL hasBusinessAreaV3;
@property (retain, nonatomic) IESLiveFormComp *formComp;
@property (nonatomic) BOOL hasFormComp;
@property (retain, nonatomic) DSLDetail *ecomCard;
@property (nonatomic) BOOL hasEcomCard;
@property (retain, nonatomic) IESLiveMyLiveTabs *myLiveTabs;
@property (nonatomic) BOOL hasMyLiveTabs;

+ (id)descriptor;

@end
