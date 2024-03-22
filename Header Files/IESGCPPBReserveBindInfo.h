//
//     Generated by private class-dump
//

@class NSString, NSMutableArray, IESGCPPBGameUser;

@interface IESGCPPBReserveBindInfo : GPBMessage

@property (copy, nonatomic) NSString *gameId;
@property (copy, nonatomic) NSString *gameName;
@property (copy, nonatomic) NSString *gameIcon;
@property (retain, nonatomic) NSMutableArray *gameTagsArray;
@property (readonly, nonatomic) unsigned long long gameTagsArray_Count;
@property (copy, nonatomic) NSString *downloadExtra;
@property (nonatomic) long long gameStatus;
@property (nonatomic) int gameStage;
@property (retain, nonatomic) IESGCPPBGameUser *gameAnchor;
@property (nonatomic) BOOL hasGameAnchor;

+ (id)descriptor;

@end